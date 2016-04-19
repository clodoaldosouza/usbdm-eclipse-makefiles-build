/**
 * @file     gpio.h (from gpio_defs-MKE.h)
 * @brief    GPIO Pin routines
 *
 * @version  V4.11.1.70
 * @date     18 June 2015
 */
#ifndef HEADER_GPIO_H
#define HEADER_GPIO_H

#include <stddef.h>
#include "derivative.h"
#include "bme.h"
#include "pin_mapping.h"

namespace USBDM {

/**
 * @addtogroup GPIO_Group GPIO, Digital Input/Output
 * @{
 */

/**
 * @brief Template representing a pin with Digital I/O capability
 *
 * <b>Example</b>
 * @code
 * // Instantiate
 * USBDM::Gpio_T<PORT_BasePtr+offsetof(PORT_Type, PUE0), GPIOA_BasePtr, 3> pta3;
 *
 * // Set as digital output
 * pta3.setOutput();
 *
 * // Set pin high
 * pta3.set();
 *
 * // Set pin low
 * pta3.clear();
 *
 * // Toggle pin
 * pta3.toggle();
 *
 * // Set pin to boolean value
 * pta3.write(true);
 *
 * // Set pin to boolean value
 * pta3.write(false);
 *
 * // Set as digital input
 * pta3.setInput();
 *
 * // Read pin as boolean value
 * bool x = pta3.read();
 *
 * @endcode
 *
 * @tparam portPue         Pull-up enable register associated with this GPIO
 * @tparam gpioAddress     GPIO hardware
 * @tparam bitNum          Bit number in the PORT associated with this GPIO
 */
template<uint32_t portPue, uint32_t gpio, const uint32_t bitNum> 
class Gpio_T {

public:

   static constexpr volatile GPIO_Type *gpio = reinterpret_cast<volatile GPIO_Type *>(gpioAddress);

   /**
    * Set pin as digital output
    */
   static void setOutput() {
      bmeOr(gpio->PDDR, 1<<bitNum);
//      gpio->PDDR |= (1<<bitNum);
   }
   /**
    * Set pin as digital input
    */
   static void setInput() {
      bmeAnd(gpio->PDDR, ~(1<<bitNum));
//      gpio->PDDR &= ~(1<<bitNum);
   }
   /**
    * Enable Pull-ups on pin
    */
   static void enablePup() {
      reinterpret_cast<volatile uint32_t *>(portPue) |= (1<<bitNum);
   }
   /**
    * Disable Pull-ups on pin
    */
   static void disablePup() {
      reinterpret_cast<volatile uint32_t *>(portPue) &= ~(1<<bitNum);
   }
   /**
    * Toggle pin
    */
   static void toggle() {
      gpio->PTOR = (1<<bitNum);
   }
   /**
    * Set pin high
    */
   static void set() {
      gpio->PSOR = (1<<bitNum);
   }
   /**
    * Set pin low
    */
   static void clear() {
      gpio->PCOR = (1<<bitNum);
   }
   /**
    * Set pin high
    */
   static void high() {
      set();
   }
   /**
    * Set pin low
    */
   static void low() {
      clear();
   }
   /**
    * Write boolean value to digital output
    *
    * @param value true/false value
    */
   static void write(bool value) {
      bmeInsert(gpio->PDOR, bitNum, 1, (value!=0));
   }
   /**
    * Read pin value
    * Note: this reads the PDIR not the PDOR
    *
    * @return true/false reflecting pin value
    */
   static bool read() {
      return bmeExtract(gpio->PDIR, bitNum, 1);
   }
   /**
    * Read value being driven to pin if output
    * Note: this reads the PDOR not the PDIR
    *
    * @return true/false reflecting value in output register
    */
   static bool readState() {
      return bmeExtract(gpio->PDOR, bitNum, 1);
   }
};
#ifdef GPIOA_BasePtr
/**
 * @brief Convenience template for GPIOA bits. See @ref Gpio_T
 *
 * <b>Usage</b>
 * @code
 * // Instantiate for bit 3 of port
 * GpioA<3> pta3
 *
 * // Set as digital output
 * pta3.setOutput();
 *
 * // Set pin high
 * pta3.set();
 *
 * // Set pin low
 * pta3.clear();
 *
 * // Toggle pin
 * pta3.toggle();
 *
 * // Set pin to boolean value
 * pta3.write(true);
 *
 * // Set pin to boolean value
 * pta3.write(false);
 *
 * // Set as digital input
 * pta3.setInput();
 *
 * // Read pin as boolean value
 * bool x = pta3.read();
 * @endcode
 *
 * @tparam bitNum        Bit number in the port
 */
template<int bitNum> using GpioA = Gpio_T<PORT_BasePtr+offsetof(PORT_Type, PUE0), GPIOA_BasePtr, bitNum>;
#endif
#ifdef GPIOB_BasePtr
/**
 * @brief Convenience template for GPIOB bits. See @ref Gpio_T
 *
 * <b>Usage</b>
 * @code
 * // Instantiate for bit 3 of port
 * GpioB<3> ptb3
 *
 * // Set as digital output
 * ptb3.setOutput();
 *
 * // Set pin high
 * ptb3.set();
 *
 * // Set pin low
 * ptb3.clear();
 *
 * // Toggle pin
 * ptb3.toggle();
 *
 * // Set pin to boolean value
 * ptb3.write(true);
 *
 * // Set pin to boolean value
 * ptb3.write(false);
 *
 * // Set as digital input
 * ptb3.setInput();
 *
 * // Read pin as boolean value
 * bool x = ptb3.read();
 * @endcode
 *
 * @tparam bitNum        Bit number in the port
 */
template<int bitNum> using GpioB = Gpio_T<PORT_BasePtr+offsetof(PORT_Type, PUE1), GPIOB_BasePtr, bitNum>;
#endif
#ifdef GPIOC_BasePtr
/**
 * @brief Convenience template for GPIOC bits. See @ref Gpio_T
 *
 * <b>Usage</b>
 * @code
 * // Instantiate for bit 3 of port
 * GpioC<3> ptc3
 *
 * // Set as digital output
 * ptc3.setOutput();
 *
 * // Set pin high
 * ptc3.set();
 *
 * // Set pin low
 * ptc3.clear();
 *
 * // Toggle pin
 * ptc3.toggle();
 *
 * // Set pin to boolean value
 * ptc3.write(true);
 *
 * // Set pin to boolean value
 * ptc3.write(false);
 *
 * // Set as digital input
 * ptc3.setInput();
 *
 * // Read pin as boolean value
 * bool x = ptc3.read();
 * @endcode
 *
 * @tparam bitNum        Bit number in the port
 */
template<int bitNum> using GpioC = Gpio_T<PORT_BasePtr+offsetof(PORT_Type, PUE2), GPIOC_BasePtr, bitNum>;
#endif

/**
 * @brief Template representing a field with a port
 *
 * <b>Example</b>
 * @code
 * // Instantiate object representing Port A 6 down to 3
 * USBDM::Field_T<PORT_BasePtr+offsetof(PORT_Type, PUE0), GPIOA_BasePtr, 6, 3> pta6_3;
 *
 * // Set as digital output
 * pta6_3.setOutput();
 *
 * // Write value to field
 * pta6_3.write(0x53);
 *
 * // Clear all of field
 * pta6_3.bitClear();
 *
 * // Clear lower two bits of field
 * pta6_3.bitClear(0x3);
 *
 * // Set lower two bits of field
 * pta6_3.bitSet(0x3);
 *
 * // Set as digital input
 * pta6_3.setInput();
 *
 * // Read pin as int value
 * int x = pta6_3.read();
 * @endcode
 *
 * @tparam portPue         Pull-up enable register associated with this GPIO
 * @tparam gpioAddress     GPIO hardware address
 * @tparam left            Bit number of leftmost bit in port (inclusive)
 * @tparam right           Bit number of rightmost bit in port (inclusive)
 */
template<uint32_t portPue, uint32_t gpioAddress, const uint32_t left, const uint32_t right> 
class Field_T {

private:
   static constexpr volatile GPIO_Type *gpio = reinterpret_cast<volatile GPIO_Type *>(Info::gpioAddress);
   /**
    * Mask for the bits being manipulated
    */
   static constexpr uint32_t    MASK = ((1<<(left-right+1))-1)<<right;

public:
   /**
    * Set pin as digital output
    */
   static void setOutput() {
      bmeOr(gpio->PDDR, MASK);
   }
   /**
    * Set pin as digital input
    */
   static void setInput() {
      bmeAnd(gpio->PDDR, ~MASK);
   }
   /**
    * Set individual pin directions
    *
    * @param mask Mask for pin directions (1=>out, 0=>in)
    */
   static void setDirection(uint32_t mask) {
      bmeInsert(gpio->PDDR, right, left-right+1, mask);
   }
   /**
    * Enable Pull-ups on pin
    */
   static void enablePups() {
      reinterpret_cast<volatile uint32_t *>(portPue) |= MASK;
   }
   /**
    * Disable Pull-ups on pin
    */
   static void disablePups() {
      reinterpret_cast<volatile uint32_t *>(portPue) &= ~MASK;
   }
   /**
    * Set bits in field
    *
    * @param mask Mask to apply to the field (1 => set bit, 0 => unchanged)
    */
   static void bitSet(const uint32_t mask) {
      gpio->PSOR = (mask<<right)&MASK;
   }
   /**
    * Clear bits in field
    *
    * @param mask Mask to apply to the field (1 => clear bit, 0 => unchanged)
    */
   static void bitClear(const uint32_t mask) {
      gpio->PCOR = (mask<<right)&MASK;
   }
   /**
    * Read field
    *
    * @return value from field
    */
   static uint32_t read() {
      return bmeExtract(gpio->PDIR, right, left-right+1);
   }
   /**
    * Write field
    *
    * @param value to insert as field
    */
   static void write(uint32_t value) {
      bmeInsert(gpio->PDOR, right, left-right+1, value);
   }
};
#ifdef GPIOA_BasePtr
/**
 * @brief Convenience template for GPIOA fields. See @ref Field_T
 *
 * <b>Usage</b>
 * @code
 * // Instantiate for bit 6 down to 3 of port
 * GpioAField<6,3> ptb12_4
 *
 * // Set as digital output
 * pta6_3.setOutput();
 *
 * // Write value to field
 * pta6_3.write(0x53);
 *
 * // Clear all of field
 * pta6_3.bitClear();
 *
 * // Clear lower two bits of field
 * pta6_3.bitClear(0x3);
 *
 * // Set lower two bits of field
 * pta6_3.bitSet(0x3);
 *
 * // Set as digital input
 * pta6_3.setInput();
 *
 * // Read pin as int value
 * int x = pta6_3.read();
 * @endcode
 *
 * @tparam left          Bit number of leftmost bit in port (inclusive)
 * @tparam right         Bit number of rightmost bit in port (inclusive)
 */
template<int left, int right> using GpioAField = Field_T<PORT_BasePtr+offsetof(PORT_Type, PUE0), GPIOA_BasePtr, left, right>;
#endif
#ifdef GPIOB_BasePtr
/**
 * @brief Convenience template for GPIOB fields. See @ref Field_T
 *
 * <b>Usage</b>
 * @code
 * // Instantiate for bit 6 down to 3 of port
 * GpioBField<6,3> ptb12_4
 *
 * // Set as digital output
 * ptb6_3.setOutput();
 *
 * // Write value to field
 * ptb6_3.write(0x53);
 *
 * // Clear all of field
 * ptb6_3.bitClear();
 *
 * // Clear lower two bits of field
 * ptb6_3.bitClear(0x3);
 *
 * // Set lower two bits of field
 * ptb6_3.bitSet(0x3);
 *
 * // Set as digital input
 * ptb6_3.setInput();
 *
 * // Read pin as int value
 * int x = ptb6_3.read();
 * @endcode
 *
 * @tparam left          Bit number of leftmost bit in port (inclusive)
 * @tparam right         Bit number of rightmost bit in port (inclusive)
 */
template<int left, int right> using GpioBField = Field_T<PORT_BasePtr+offsetof(PORT_Type, PUE1), GPIOB_BasePtr, left, right>;
#endif
#ifdef GPIOC_BasePtr
/**
 * @brief Convenience template for GPIOC fields. See @ref Field_T
 *
 * <b>Usage</b>
 * @code
 * // Instantiate for bit 6 down to 3 of port
 * GpioCField<6,3> ptc12_4
 *
 * // Set as digital output
 * ptc6_3.setOutput();
 *
 * // Write value to field
 * ptc6_3.write(0x53);
 *
 * // Clear all of field
 * ptc6_3.bitClear();
 *
 * // Clear lower two bits of field
 * ptc6_3.bitClear(0x3);
 *
 * // Set lower two bits of field
 * ptc6_3.bitSet(0x3);
 *
 * // Set as digital input
 * ptc6_3.setInput();
 *
 * // Read pin as int value
 * int x = ptc6_3.read();
 * @endcode
 *
 * @tparam left          Bit number of leftmost bit in port (inclusive)
 * @tparam right         Bit number of rightmost bit in port (inclusive)
 */
template<int left, int right> using GpioCField = Field_T<PORT_BasePtr+offsetof(PORT_Type, PUE2), GPIOC_BasePtr, left, right>;
#endif

/**
 * @}
 */

} // End namespace USBDM

#endif /* HEADER_GPIO_H */