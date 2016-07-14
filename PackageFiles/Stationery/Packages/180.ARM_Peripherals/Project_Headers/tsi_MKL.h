/*
 * tsi_MKL.h
 *
 *  Created on: 25/10/2013
 *      Author: podonoghue
 */

#ifndef TSI_H_
#define TSI_H_
/*
 * *****************************
 * *** DO NOT EDIT THIS FILE ***
 * *****************************
 *
 * This file is generated automatically.
 * Any manual changes will be lost.
 */
#include "hardware.h"

namespace USBDM {

/**
 * Type definition for TSI interrupt call back
 *
 *  @param status - Interrupt flags e.g. TSI_GENCS_EOSF_MASK, TSI_GENCS_OVRF_MASK, TSI_GENCS_EXTERF_MASK
 */
typedef void (*TSICallbackFunction)(uint8_t status);

/**
 * Template class representing a TSI interface
 *
 * @tparam Info      Information class describing the TSI interface
 */
template <class Info>
class TsiBase_T {

protected:
   static constexpr volatile TSI_Type *tsi      = Info::tsi;
   static constexpr volatile uint32_t *clockReg = Info::clockReg;

public:
   /**
    * Initialise TSI to default settings\n
    * Configures all TSI pins
    */
   static void enable() {
      *clockReg |= Info::clockMask;
      __DMB();

      Info::initPCRs();

      tsi->GENCS  = Info::tsi_gencs|TSI_GENCS_TSIEN_MASK;
      tsi->TSHD   = Info::tsi_tshd;

      enableNvicInterrupts();
   }

   /**
    * Enable/disable interrupts in NVIC
    *
    * @param enable True => enable, False => disable
    */
   static void enableNvicInterrupts(bool enable=true) {
      if (enable) {
         // Enable interrupts
         NVIC_EnableIRQ(Info::irqNums[0]);

         // Set priority level
         NVIC_SetPriority(Info::irqNums[0], Info::irqLevel);
      }
      else {
         // Disable interrupts
         NVIC_DisableIRQ(Info::irqNums[0]);
      }
   }
   /**
    * Enable/disable touch sensing interrupts
    *
    * @param enable True => enable, False => disable
    */
   static void enableTsiInterrupts(bool enable=true) {
      if (enable) {
         tsi->GENCS |= TSI_GENCS_TSIIEN_MASK;
      }
      else {
         tsi->GENCS &= ~TSI_GENCS_TSIIEN_MASK;
      }
   }

   /**
    * Get channel count value
    *
    * @param channel Channel number
    *
    * @return 16-bit count value
    */
   static uint16_t getCount() {
      return Info::tsi->DATA&TSI_DATA_TSICNT_MASK;
   }

   /**
    * Start configured scan on channel
    *
    * @param channel Channel number
    */
   static void startScan(int channel) {
      // Clear flags
      Info::tsi->GENCS |= TSI_GENCS_OUTRGF_MASK|TSI_GENCS_EOSF_MASK;
      // Start scan
      Info::tsi->DATA = TSI_DATA_SWTS_MASK|TSI_DATA_TSICH(channel);
   }

   /**
    * Start configured scan and wait for completion
    *
    * @param channel Channel number
    *
    * @return Error code indicating if scan was successful
    */
   static ErrorCode startScanAndWait(int channel) {
      // Clear flags
      Info::tsi->GENCS |= TSI_GENCS_OUTRGF_MASK|TSI_GENCS_EOSF_MASK;
      // Start scan
      Info::tsi->DATA = TSI_DATA_SWTS_MASK|TSI_DATA_TSICH(channel);

      // Wait for complete flag or err
      while ((Info::tsi->GENCS&(TSI_GENCS_OUTRGF_MASK|TSI_GENCS_EOSF_MASK)) == 0) {
      }
      return (Info::tsi->GENCS&(TSI_GENCS_OUTRGF_MASK))?E_ERROR:E_NO_ERROR;
   }
};

/**
 * Template class to provide TSI callback
 *
 * @tparam Info      Information class describing the TSI interface
 */
template<class Info>
class TsiIrq_T : public TsiBase_T<Info> {

protected:
   /** Callback function for ISR */
   static TSICallbackFunction callback;

public:
   /**
    * IRQ handler
    */
   static void irqHandler(void) {
      uint8_t status = TsiBase_T<Info>::tsi->GENCS&(TSI_GENCS_OUTRGF_MASK|TSI_GENCS_EOSF_MASK);
      if (callback != 0) {
         TsiBase_T<Info>::tsi->GENCS |= status;
         callback(status);
      }
   }

   /**
    * Set Callback function
    *
    *   @param theCallback - Callback function to be executed on TSI alarm interrupt
    */
   static void setCallback(TSICallbackFunction theCallback) {
      callback = theCallback;
   }
};

/**
 * Class representing a TSI button
 *
 * @tparam Info      Information class describing the TSI interface
 * @tparam channel   Channel connected to the button
 * @tparam threshold Threshold for the button to be considered pressed
 */
template<class Info, int channel, int threshold>
class TsiButton_T : public USBDM::TsiIrq_T<Info> {

public:

   /**
    * Poll button
    *
    * @return true => pressed, false => not pressed
    */
   static bool poll() {
      if (TsiIrq_T<Info>::startScanAndWait(channel) != E_NO_ERROR) {
         return false;
      }
      return TsiIrq_T<Info>::getCount()>threshold;
   }

   /**
    * Start configured scan and wait for completion
    *
    * @return Error code indicating if scan was successful
    */
   static ErrorCode startScanAndWait() {
      return TsiIrq_T<Info>::startScanAndWait(channel);
   }
   /**
    * Get channel count value
    *
    * @return 16-bit count value
    */
   static uint16_t getCount() {
      return Info::tsi->DATA&TSI_DATA_TSICNT_MASK;
   }
};

/**
 * Class representing a TSI slider
 *
 * @tparam Info      Information class describing the TSI interface
 * @tparam channel1  First channel connected to slider
 * @tparam channel2  Second channel connected to slider
 * @tparam threshold Threshold for the contact to be considered
 */
template<class Info, int channel1, int channel2, int threshold>
class TsiSlider_T : public USBDM::TsiIrq_T<Info> {

public:
   static int measure() {
      if (TsiIrq_T<Info>::startScanAndWait(channel1) != E_NO_ERROR) {
         return false;
      }
      int value1 = TsiIrq_T<Info>::getCount();
      if (TsiIrq_T<Info>::startScanAndWait(channel2) != E_NO_ERROR) {
         return false;
      }
      int value2 = TsiIrq_T<Info>::getCount();

      return 0; //TODO ???
   }
};

template<class Info> TSICallbackFunction TsiIrq_T<Info>::callback = 0;

#ifdef USBDM_TSI_IS_DEFINED
/**
 * Class representing TSI
 */
using Tsi = TsiIrq_T<TsiInfo>;


/**
 * Class representing TSI button
 *
 * @tparam channel   Channel connected to the button
 * @tparam threshold Threshold for the button to be considered pressed
 */
template<int channel, int threshold>
using Tsi0Button = TsiButton_T<TsiInfo, channel, threshold>;

#endif

#ifdef USBDM_TSI0_IS_DEFINED
/**
 * Class representing TSI
 */
using Tsi0 = TsiIrq_T<Tsi0Info>;

/**
 * Class representing TSI button
 *
 * @tparam channel   Channel connected to the button
 * @tparam threshold Threshold for the button to be considered pressed
 */
template<int channel, int threshold>
using Tsi0Button = TsiButton_T<Tsi0Info, channel, threshold>;

#endif

} // End namespace USBDM

#endif /* TSI_H_ */
