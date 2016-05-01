/**
 * @file     spi.h (derived from spi-MK.h)
 *
 * @brief    Abstraction layer for SPI interface
 *
 * @version  V4.12.1.80
 * @date     13 April 2016
 */

#ifndef INCLUDE_USBDM_SPI_H_
#define INCLUDE_USBDM_SPI_H_

#include <stdint.h>
#include "derivative.h"
#include "hardware.h"

namespace USBDM {

static constexpr uint32_t SPI_CPHA = SPI_CTAR_CPHA_MASK;     // Clock phase    - First edge on SPSCK occurs at the start of the first cycle of a data transfer
static constexpr uint32_t SPI_CPOL = SPI_CTAR_CPOL_MASK;     // Clock polarity - Active-low SPI clock (idles high)
static constexpr uint32_t SPI_LSBF = SPI_CTAR_LSBFE_MASK;    // LSB transmitted  first

static constexpr uint32_t SPI_MODE0 (0       |0);
static constexpr uint32_t SPI_MODE1 (0       |SPI_CPHA);
static constexpr uint32_t SPI_MODE2 (SPI_CPOL|0);
static constexpr uint32_t SPI_MODE3 (SPI_CPOL|SPI_CPHA);

/**
 * @addtogroup SPI_Group SPI, Serial Peripheral Interface
 * @brief C++ Class allowing access to SPI interface
 * @{
 */

/**
 * @brief Base class for representing an SPI interface
 */
class Spi {
protected:
   volatile  SPI_Type *spi;       //!< SPI hardware
   uint32_t  spiBaudValue;        //!< Current Baud Rate
   uint32_t  interfaceFrequency;  //!< Interface frequency to use
   uint32_t  pushrMask;           //!< Value to combine with data

protected:
   /**
    * Constructor
    *
    * @param baseAddress    Base address of SPI
    */
   Spi(volatile SPI_Type *baseAddress) :
      spi(baseAddress), spiBaudValue(0), pushrMask(SPI_PUSHR_PCS_MASK) {
   }

public:
   /**
    * Enable pins used by SPI
    */
   virtual void enablePins() = 0;

   /**
    * Disable (restore to usual default) pins used by SPI
    */
   virtual void disablePins() = 0;

   /**
    * Sets Communication speed for SPI
    *
    * @param frequency => Frequency in Hz (0 => use default value)
    *
    * Note: Chooses the highest speed that is not greater than frequency.
    * Note: This will only have effect the next time a CTAR is changed
    */
   void setSpeed(uint32_t frequency);

   /**
    * Sets Communication mode for SPI
    *
    * @param mode => Mode to set. Combination of SPI_CPHA, SPI_CPOL and SPI_LSBFE
    */
   void setMode(uint32_t mode) {
      // Sets the default CTAR value with 8 bits
      setCTAR0Value((mode & (SPI_CPHA|SPI_CPOL|SPI_LSBF))|SPI_CTAR_FMSZ(8-1));
   }
   /**
    * Gets current speed of interface
    *
    * @return Speed in Hz
    */
   uint32_t getSpeed(void) {
      return interfaceFrequency;
   }
   /**
    * Set value that is combined with data for PUSHR register
    * For example this may be used to control which CTAR is used or which SPI_PCSx signal is asserted
    *
    * @param pushrMask Value to combine with Tx data before writing to PUSHR register
    *                  For example, SPI_PUSHR_CTAS(1)|SPI_PUSHR_PCS(1<<2)
    */
   void setPushrValue(uint32_t pushrMask) {
      this->pushrMask = pushrMask;
   }
   /**
    *  Transmit and receive a series of bytes
    *
    *  @param dataSize  Number of bytes to transfer
    *  @param dataOut   Transmit bytes (may be NULL for Rx only)
    *  @param dataIn    Receive byte buffer (may be NULL for Tx only)
    *
    *  Note: dataIn may use same buffer as dataOut
    */
   void txRxBytes(uint32_t dataSize, const uint8_t *dataOut, uint8_t *dataIn=0);

   /**
    *  Transmit and receive a series of 16-bit values
    *
    *  @param dataSize  Number of values to transfer
    *  @param dataOut   Transmit values (may be NULL for Rx only)
    *  @param dataIn    Receive buffer (may be NULL for Tx only)
    */
   void txRxWords(uint32_t dataSize, const uint16_t *dataOut, uint16_t *dataIn=0);

   /**
    * Transmit and receive a value over SPI
    *
    * @param data - Data to send (8-16 bits) <br>
    *               May include other control bits
    *
    * @return Data received
    */
   uint32_t txRx(uint32_t data);

   static constexpr uint32_t CTAR_MASK = ~(SPI_CTAR_BR_MASK|SPI_CTAR_PBR_MASK|SPI_CTAR_DBR_MASK);

   /*! Set SPI.CTAR0 value
    *
    * @param ctar 32-bit CTAR value (excluding baud related settings)
    *     e.g. setCTAR0Value(SPI_CTAR_SLAVE_FMSZ(8-1)|SPI_CTAR_CPOL_MASK|SPI_CTAR_CPHA_MASK);
    */
   void setCTAR0Value(uint32_t ctar) {
      spi->CTAR[0] = spiBaudValue|(ctar&CTAR_MASK);
   }

   /*! Set SPI.CTAR1 value
    *
    * @param ctar 32-bit CTAR value (excluding baud related settings)
    *     e.g. setCTAR1Value(SPI_CTAR_SLAVE_FMSZ(8-1)|SPI_CTAR_CPOL_MASK|SPI_CTAR_CPHA_MASK);
    */
   void setCTAR1Value(uint32_t ctar) {
      spi->CTAR[1] = spiBaudValue|(ctar&CTAR_MASK);
   }
};

/**
 * @brief Template class representing a SPI interface
 *
 * @tparam  Info           Class describing Spi hardware
 */
template<class Info>
class Spi_T : public Spi {

public:
   virtual void enablePins() {
      // Configure SPI pins
      Info::initPCRs();
   }

   virtual void disablePins() {
      // Configure SPI pins to mux=0
      Info::clearPCRs();
   }

   /**
    * Constructor
    */
   Spi_T() : Spi(reinterpret_cast<volatile SPI_Type*>(Info::basePtr)) {

#ifdef DEBUG_BUILD
      // Check pin assignments
      static_assert(Info::info[0].gpioBit != UNMAPPED_PCR, "SPIx_SCK has not been assigned to a pin");
      static_assert(Info::info[1].gpioBit != UNMAPPED_PCR, "SPIx_SIN has not been assigned to a pin");
      static_assert(Info::info[2].gpioBit != UNMAPPED_PCR, "SPIx_SOUT has not been assigned to a pin");
#endif

      // Enable SPI module clock
      *reinterpret_cast<volatile uint32_t*>(Info::clockReg) |= Info::clockMask;
      __DMB();

      spi->MCR   = SPI_MCR_HALT_MASK|SPI_MCR_CLR_RXF_MASK|SPI_MCR_ROOE_MASK|SPI_MCR_CLR_TXF_MASK|
                   SPI_MCR_MSTR_MASK|SPI_MCR_DCONF(0)|SPI_MCR_SMPL_PT(0)|SPI_MCR_PCSIS_MASK;

      setSpeed(Info::speed);             // Use default speed
      setMode(Info::modeValue);          // Use default mode
      setCTAR0Value(SPI_CTAR_FMSZ(8-1)); // Default 8-bit transfers
      setCTAR1Value(SPI_CTAR_FMSZ(8-1)); // Default 8-bit transfers

      // Configure SPI pins
      enablePins();
   }
};

#if defined(USBDM_SPI0_IS_DEFINED)
/**
 * @brief Template class representing a SPI0 interface
 *
 * <b>Example</b>
 * @code
 * USBDM::Spi *spi = new USBDM::Spi0();
 *
 * uint8_t txData[] = {1,2,3};
 * uint8_t rxData[10];
 * spi->txRxBytes(sizeof(txData), txData, rxData);
 * @endcode
 *
 */
using Spi0 = Spi_T<Spi0Info>;
#endif

#if defined(USBDM_SPI1_IS_DEFINED)
/**
 * @brief Template class representing a SPI1 interface
 *
 * <b>Example</b>
 * @code
 * USBDM::Spi *spi = new USBDM::Spi1();
 *
 * uint8_t txData[] = {1,2,3};
 * uint8_t rxData[10];
 * spi->txRxBytes(sizeof(txData), txData, rxData);
 * @endcode
 *
 */
using  Spi1 = Spi_T<Spi1Info>;
#endif
/**
 * @}
 */

} // End namespace USBDM

#endif /* INCLUDE_USBDM_SPI_H_ */
