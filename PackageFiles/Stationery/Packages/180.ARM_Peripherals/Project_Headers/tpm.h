/**
 * @file     tpm.h
 * @brief    GPIO Pin routines
 *
 * @version  V4.12.1.80
 * @date     13 April 2016
 */
#ifndef HEADER_TPM_H
#define HEADER_TPM_H
/*
 * *****************************
 * *** DO NOT EDIT THIS FILE ***
 * *****************************
 *
 * This file is generated automatically.
 * Any manual changes will be lost.
 */
#include <stddef.h>
#include <assert.h>
#include "derivative.h"
#include <cmath>

/*
 * Default port information
 */

#ifndef TPM0_CLOCK_MASK
#ifdef SIM_SCGC6_TPM0_MASK
#define TPM0_CLOCK_MASK SIM_SCGC6_TPM0_MASK
#define TPM0_CLOCK_REG  SCGC6
#endif
#ifdef SIM_SCGC6_TPM1_MASK
#define TPM1_CLOCK_MASK SIM_SCGC6_TPM1_MASK
#define TPM1_CLOCK_REG  SCGC6
#endif
#ifdef SIM_SCGC6_TPM2_MASK
#define TPM2_CLOCK_MASK SIM_SCGC6_TPM2_MASK
#define TPM2_CLOCK_REG  SCGC6
#elif defined SIM_SCGC3_TPM2_MASK
#define TPM2_CLOCK_MASK SIM_SCGC3_TPM2_MASK
#define TPM2_CLOCK_REG  SCGC3
#endif
#ifdef SIM_SCGC6_TPM3_MASK
#define TPM3_CLOCK_MASK SIM_SCGC6_TPM3_MASK
#define TPM3_CLOCK_REG  SCGC6
#endif
#ifdef SIM_SCGC3_TPM3_MASK
#define TPM3_CLOCK_MASK SIM_SCGC3_TPM3_MASK
#define TPM3_CLOCK_REG  SCGC3
#endif
#ifdef SIM_SCGC3_TPM3_MASKC
#define TPM3_CLOCK_MASK SIM_SCGC3_TPM3_MASKC
#define TPM3_CLOCK_REG  SCGC3
#endif
#endif

namespace USBDM {

/**
 * @addtogroup TPM_Group TPM, PWM, Input capture and Output compare
 * @brief Pins used for PWM, Input capture and Output compare
 * @{
 */
/**
 * Controls basic operation of PWM/Input capture
 */
enum Tpm_ChannelMode {
   //! Capture rising edge
   tpm_inputCaptureRisingEdge  = TPM_CnSC_MS(0)|TPM_CnSC_ELS(1),
   //! Capture falling edge
   tpm_inputCaptureFallingEdge = TPM_CnSC_MS(0)|TPM_CnSC_ELS(2),
   //! Capture both rising and falling edges
   tpm_inputCaptureEitherEdge  = TPM_CnSC_MS(0)|TPM_CnSC_ELS(3),
   //! Output compare operation
   tpm_outputCompare           = TPM_CnSC_MS(1),
   //! Toggle pin on output compare
   tpm_outputCompareToggle     = TPM_CnSC_MS(1)|TPM_CnSC_ELS(1),
   //! Clear pin on output compare
   tpm_outputCompareClear      = TPM_CnSC_MS(1)|TPM_CnSC_ELS(2),
   //! Set pin on output compare
   tpm_outputCompareSet        = TPM_CnSC_MS(1)|TPM_CnSC_ELS(3),
   //! PWM with high-true pulses
   tpm_pwmHighTruePulses       = TPM_CnSC_MS(2)|TPM_CnSC_ELS(2),
   //! PWM with low-true pulses
   tpm_pwmLowTruePulses        = TPM_CnSC_MS(2)|TPM_CnSC_ELS(1),
};

/**
 * Control alignment of PWM function
 */
enum Tpm_Mode {
   //! Left-aligned PWM - also used for input capture and output compare modes
   tpm_leftAlign   = 0,
   //! Centre-aligned PWM
   tpm_centreAlign = TPM_SC_CPWMS_MASK,
};

/**
 * Type definition for TPM timer overflow interrupt call back
 */
typedef void (*TPMToiCallbackFunction)();
/**
 * Type definition for TPM channel interrupt call back
 *
 * @param status Flags indicating interrupt source channels
 *
 */
typedef void (*TPMCallbackFunction)(int status);

/**
 * Base class representing an TPM
 *
 * Example
 * @code
 * // Instantiate the tmr (for TPM0)
 * const USBDM::TpmBase_T<TPM0_Info)> Tpm0;
 *
 * // Initialise PWM with initial period and alignment
 * Tpm0::initialise(200, USBDM::tpm_leftAlign);
 *
 * // Change timer period
 * Tpm0::setPeriod(500);
 * @endcode
 *
 * @tparam Info  Class describing TPM hardware instance
 */
template<class Info>
class TpmBase_T {

protected:
   static constexpr volatile TPM_Type* tmr      = Info::tpm;
   static constexpr volatile uint32_t *clockReg = Info::clockReg;

public:
   /**
    * Enable with default settings\n
    * Includes configuring all pins
    */
   static void enable() {
      // Configure pins
      Info::initPCRs();

      // Enable clock to timer
      *clockReg |= Info::clockMask;
      __DMB();

      // Disable so immediate effect
      tmr->SC      = 0;

      // Common registers
      tmr->CNT     = 0;
      tmr->MOD     = Info::period;
      tmr->SC      = Info::sc;

      enableNvicInterrupts();
   }

   /**
    * Check if FTM is enabled\n
    * Just check for clock enable and clock sourtce selection
    *
    * @return True => enabled
    */
   static bool isEnabled() {
      return ((*clockReg & Info::clockMask) != 0) && ((tmr->SC & FTM_SC_CLKS_MASK) != 0);
   }

   /**
    * Configure Timer operation\n
    * Used to change configuration after enabling interface
    *
    * @param period  Period in ticks
    * @param mode    Mode of operation see @ref Tpm_Mode
    *
    * @note Assumes prescale has been chosen as a appropriate value. Rudimentary range checking.
    */
   static void configure(uint32_t period /* ticks */, Tpm_Mode mode=tpm_leftAlign) {

      // Disable so immediate effect
      tmr->SC      = 0;

      tmr->SC      = mode;
      if (mode == tpm_centreAlign) {
         // Centre aligned PWM with CPWMS not selected
         tmr->SC   = Info::sc|TPM_SC_CPWMS_MASK;
      }
      else {
         // Left aligned PWM without CPWMS selected
         tmr->SC   = Info::sc;
      }
      setPeriodInTicks(period);

      enableNvicInterrupts();
   }

   /**
    * Enable/disable interrupts in NVIC
    *
    * @param enable true to enable, false to disable
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
    * Enable/disable Timer Overflow interrupts
    *
    * @param enable true to enable, false to disable
    */
   static void enableToiInterrupts(bool enable=true) {
      if (enable) {
         tmr->SC |= TPM_SC_TOIE_MASK;
      }
      else {
         tmr->SC &= ~TPM_SC_TOIE_MASK;
      }
   }

   /**
    * Set period
    *
    * @param period Period in seconds as a float
    *
    * @note Adjusts TPM pre-scaler to appropriate value.
    *       This will affect all channels on the TPM
    *
    * @return true => success, false => failed to find suitable values
    */
   static ErrorCode setPeriod(float period) {
      float inputClock = Info::getInputClockFrequency();
      int prescaleFactor=1;
      int prescalerValue=0;
      while (prescalerValue<=7) {
         float    clock = inputClock/prescaleFactor;
         uint32_t mod   = round(period*clock);
         if (mod < Info::minimumResolution) {
            // Too short a period for 1% resolution
            return setErrorCode(E_TOO_SMALL);
         }
         if (mod <= 65535) {
            // Clear SC so immediate effect on prescale change
            uint32_t sc = tmr->SC&~TPM_SC_PS_MASK;
            tmr->SC     = 0;
            __DSB();
            tmr->MOD    = mod;
            tmr->SC     = sc|TPM_SC_PS(prescalerValue);
            return E_NO_ERROR;
         }
         prescalerValue++;
         prescaleFactor <<= 1;
      }
      // Too long a period
      return setErrorCode(E_TOO_LARGE);
   }

   /**
    * Set period
    *
    * @param period Period in ticks
    *
    * @note Assumes prescale has been chosen as a appropriate value. Rudimentary range checking.
    */
   static ErrorCode setPeriodInTicks(uint32_t period) {

      // Check if CPWMS is set (affects period)
      bool centreAlign = (tmr->SC&TPM_SC_CPWMS_MASK) != 0;

      // Disable so register changes are immediate
      tmr->SC = TPM_SC_PS(0);

      if (centreAlign) {
#ifdef DEBUG_BUILD
         if (period > 2*0xFFFFUL) {
            // Attempt to set too long a period
            return setErrorCode(E_TOO_LARGE);
         }
#endif
         tmr->MOD = (uint32_t)(period/2);
         // Centre aligned PWM with CPWMS not selected
         tmr->SC  = Info::sc|TPM_SC_CPWMS_MASK;
      }
      else {
#ifdef DEBUG_BUILD
         if (period > 0x10000UL) {
            // Attempt to set too long a period
            return setErrorCode(E_TOO_LARGE);
         }
#endif
         tmr->MOD = (uint32_t)(period-1);
         // Left aligned PWM without CPWMS selected
         tmr->SC  = Info::sc;
      }
      // OK period
      return setErrorCode(E_NO_ERROR);
   }

   /**
    * Converts a time in microseconds to number of ticks
    *
    * @param time Time in microseconds
    * @return Time in ticks
    *
    * @note Assumes prescale has been chosen as a appropriate value. Rudimentary range checking.
    */
   static uint32_t convertMicrosecondsToTicks(int time) {

      // Calculate period
      uint32_t tickRate = Info::getClockFrequency();
      uint64_t rv       = ((uint64_t)time*tickRate)/1000000;
#ifdef DEBUG_BUILD
      if (rv > 0xFFFFUL) {
         // Attempt to set too long a period
         setErrorCode(E_TOO_LARGE);
      }
      if (rv == 0) {
         // Attempt to set too short a period
         setErrorCode(E_TOO_SMALL);
      }
#endif
      return rv;
   }

   /**
    * Converts a time in microseconds to number of ticks
    *
    * @param time Time in microseconds
    * @return Time in ticks
    *
    * @note Assumes prescale has been chosen as a appropriate value. Rudimentary range checking.
    */
   static uint32_t convertSecondsToTicks(float time) {

      // Calculate period
      float    tickRate = Info::getClockFrequencyF();
      uint64_t rv       = time*tickRate;
#ifdef DEBUG_BUILD
      if (rv > 0xFFFFUL) {
         // Attempt to set too long a period
         setErrorCode(E_TOO_LARGE);
      }
      if (rv == 0) {
         // Attempt to set too short a period
         setErrorCode(E_TOO_SMALL);
      }
#endif
      return rv;
   }

   /**
    * Converts ticks to time in microseconds
    *
    * @param time Time in ticks
    * @return Time in microseconds
    *
    * @note Assumes prescale has been chosen as a appropriate value. Rudimentary range checking.
    */
   static uint32_t convertTicksToMicroseconds(int time) {

      // Calculate period
      uint32_t tickRate = Info::getClockFrequency()/(1<<(tmr->SC&TPM_SC_PS_MASK));
      uint64_t rv       = ((uint64_t)time*1000000)/tickRate;
#ifdef DEBUG_BUILD
      if (rv > 0xFFFFUL) {
         // Attempt to set too long a period
         setErrorCode(E_TOO_LARGE);
      }
      if (rv == 0) {
         // Attempt to set too short a period
         setErrorCode(E_TOO_SMALL);
      }
#endif
      return rv;
   }

   /**
    * Set PWM duty cycle
    *
    * @param dutyCycle  Duty-cycle as percentage
    * @param channel Timer channel
    */
   static void setDutyCycle(int dutyCycle, int channel) {
      if (tmr->SC&TPM_SC_CPWMS_MASK) {
         tmr->CONTROLS[channel].CnV  = (dutyCycle*tmr->MOD)/100;
      }
      else {
         tmr->CONTROLS[channel].CnV  = (dutyCycle*(tmr->MOD+1))/100;
      }
   }

   /**
    * Set PWM high time in ticks
    * Assumes value is less than period
    *
    * @param highTime   PWM high time in ticks
    * @param channel    Timer channel
    */
   static ErrorCode setHighTime(uint32_t highTime, int channel) {
#ifdef DEBUG_BUILD
      if (highTime > tmr->MOD) {
         return setErrorCode(E_TOO_LARGE);
      }
#endif
      tmr->CONTROLS[channel].CnV  = highTime;
      return E_NO_ERROR;
   }

   /**
    * Set PWM high time in seconds
    *
    * @param highTime   PWM high time in seconds
    * @param channel    Timer channel
    */
   static ErrorCode setHighTime(float highTime, int channel) {
      return setHighTime(convertSecondsToTicks(highTime), channel);
   }

};

/**
 * Template class to provide TPM callback
 */
template<class Info>
class TpmIrq_T : public TpmBase_T<Info> {

protected:
   /** Callback function for TOI ISR */
   static TPMToiCallbackFunction toiCallback;
   /** Callback function for Channel ISR */
   static TPMCallbackFunction callback;

public:
   /**
    * IRQ handler
    */
   static void irqHandler() {
      if (TpmBase_T<Info>::tmr->SC&TPM_SC_TOF_MASK) {
         // Clear TOI flag
         TpmBase_T<Info>::tmr->SC &= ~TPM_SC_TOF_MASK;
         if (toiCallback != 0) {
            toiCallback();
         }
         else {
            setAndCheckErrorCode(E_NO_HANDLER);
         }
      }
      uint8_t status = TpmBase_T<Info>::tmr->STATUS;
      if (status) {
         // Clear channel event flags
         TpmBase_T<Info>::tmr->STATUS &= ~status;
         if (callback != 0) {
            callback(status);
         }
         else {
            setAndCheckErrorCode(E_NO_HANDLER);
         }
      }
   }

   /**
    * Set TOI Callback function
    *
    * @param theCallback Callback function to execute on interrupt
    */
   static void setToiCallback(TPMToiCallbackFunction theCallback) {
      toiCallback = theCallback;
   }
   /**
    * Set channel Callback function
    *
    * @param theCallback Callback function to execute on interrupt
    */
   static void setChannelCallback(TPMCallbackFunction theCallback) {
      callback = theCallback;
   }
};

template<class Info> TPMToiCallbackFunction TpmIrq_T<Info>::toiCallback = 0;
template<class Info> TPMCallbackFunction    TpmIrq_T<Info>::callback = 0;

/**
 * Template class representing a TPM timer channel
 *
 * Example
 * @code
 * // Instantiate the timer channel (for TPM0 channel 6)
 * using Tpm0_ch6 = USBDM::TpmChannel<TPM0Info, 6>;
 *
 * // Initialise PWM with initial period and alignment
 * Tpm0_ch6.setMode(200, PwmIO::tpm_leftAlign);
 *
 * // Change period (in ticks)
 * Tpm0_ch6.setPeriod(500);
 *
 * // Change duty cycle (in percent)
 * Tpm0_ch6.setDutyCycle(45);
 * @endcode
 *
 * @tparam channel TPM timer channel
 */
template <class Info, int channel>
class TpmChannel_T : public TpmBase_T<Info>, CheckSignal<Info, channel> {

public:

   /**
    * Enable channel (and set mode)\n
    * Bug - re-enables TPM every time a channel is enabled\n
    * Use enableChannel() to avoid this
    *
    * Enabled TPM as well
    */
   static void enable(Tpm_ChannelMode mode = tpm_pwmHighTruePulses) {
      TpmBase_T<Info>::enable();
      TpmBase_T<Info>::tmr->CONTROLS[channel].CnSC = mode;
   }

   /**
    * Enable channel (and set mode)\n
    * Doesn't affect shared settings of owning TPM
    */
   static void enableChannel(Tpm_ChannelMode mode = tpm_pwmHighTruePulses) {
      TpmBase_T<Info>::tmr->CONTROLS[channel].CnSC = mode;
   }

   /**
    * Enable or disable interrupt from this channel\n
    * Note: It is necessary to enable interrupts in the TPM as well
    *
    * @param enable  True => enable, False => disable
    */
   static void enableChannelInterrupts(bool enable=true) {
      if (enable) {
         TpmBase_T<Info>::tmr->CONTROLS[channel].CnSC |= TPM_CnSC_CHIE_MASK;
      }
      else {
         TpmBase_T<Info>::tmr->CONTROLS[channel].CnSC &= ~TPM_CnSC_CHIE_MASK;
      }
   }

   static void setPCR(uint32_t pcrValue) {
      PcrTable_T<Info,  channel>::setPCR((pcrValue&~PORT_PCR_MUX_MASK)|(Info::info[channel].pcrValue&PORT_PCR_MUX_MASK));
   }

   /**
    * Set PWM duty cycle
    *
    * @param dutyCycle  Duty-cycle as percentage
    */
   static void setDutyCycle(int dutyCycle) {
      TpmBase_T<Info>::setDutyCycle(dutyCycle, channel);
   }
   /**
    * Set PWM high time in ticks\n
    * Assumes value is less than period
    *
    * @param highTime   PWM high time in ticks
    */
   static ErrorCode setHighTime(uint32_t highTime) {
      return TpmBase_T<Info>::setHighTime(highTime, channel);
   }

   /**
    * Set PWM high time in seconds
    *
    * @param highTime   PWM high time in seconds
    */
   static ErrorCode setHighTime(float highTime) {
      return TpmBase_T<Info>::setHighTime(highTime, channel);
   }

};

#ifdef USBDM_TPM0_IS_DEFINED
/**
 * Template class representing a TPM0 timer channel
 *
 * Example
 * @code
 * // Instantiate the timer channel (for TPM0 channel 6)
 * using Tpm0_ch6 = USBDM::Tpm0Channel<6>;
 *
 * // Initialise PWM with initial period and alignment
 * Tpm0_ch6.setMode(200, PwmIO::tpm_leftAlign);
 *
 * // Change period (in ticks)
 * Tpm0_ch6.setPeriod(500);
 *
 * // Change duty cycle (in percent)
 * Tpm0_ch6.setDutyCycle(45);
 * @endcode
 *
 * @tparam channel TPM timer channel
 */
template <int channel>
class Tpm0Channel : public TpmBase_T<Tpm0Info>, CheckSignal<Tpm0Info, channel> {};

/**
 * Class representing TPM0
 */
using Tpm0 = TpmIrq_T<Tpm0Info>;
#endif

#ifdef USBDM_TPM1_IS_DEFINED
/**
 * Template class representing a TPM1 timer channel
 *
 * Refer @ref Tpm0Channel
 *
 * @tparam channel TPM timer channel
 */
template <int channel>
class Tpm1Channel : public TpmChannel_T<Tpm1Info, channel> {};

/**
 * Class representing TPM1
 */
using Tpm1 = TpmIrq_T<Tpm1Info>;
#endif

#ifdef USBDM_TPM2_IS_DEFINED
/**
 * Template class representing a TPM2 timer channel
 *
 * Refer @ref Tpm0Channel
 *
 * @tparam channel TPM timer channel
 */
template <int channel>
class Tpm2Channel : public TpmChannel_T<Tpm2Info, channel> {};

/**
 * Class representing TPM2
 */
using Tpm2 = TpmIrq_T<Tpm2Info>;
#endif

#ifdef USBDM_TPM3_IS_DEFINED
/**
 * Template class representing a TPM3 timer channel
 *
 * Refer @ref Tpm0Channel
 *
 * @tparam channel TPM timer channel
 */
template <int channel>
class Tpm3Channel : public TpmBase_T<Tpm3Info>, CheckSignal<Tpm2Info, channel> {

   /**
    * Class representing TPM0
    */
   using Tpm3 = TpmIrq_T<Tpm3Info>;
#endif

/**
 * @}
 */

} // End namespace USBDM

#endif /* HEADER_TPM_H */

