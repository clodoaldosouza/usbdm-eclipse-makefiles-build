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
 * Type definition for TPM interrupt call back
 */
typedef void (*TPMCallbackFunction)(void);

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

private:
   /** Minimum resolution required when setting interval */
   static constexpr int MINIMUM_RESOLUTION = 100;

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

      // Common registers
      tmr->CNT     = 0;
      tmr->MOD     = Info::period;
      tmr->SC      = Info::sc;

      enableInterrupts(Info::irqEnabled);
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
   static void configure(int period /* us */, Tpm_Mode mode=tpm_leftAlign) {

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

      if (Info::irqEnabled) {
         enableInterrupts();
      }
   }

   /**
    * Enable/disable interrupts in the NVIC
    *
    * @param enable true to enable, false to disable
    */
   static void enableInterrupts(bool enable=true) {
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
         if (mod < MINIMUM_RESOLUTION) {
            // Too short a period for 1% resolution
            return setErrrCode(E_TOO_SMALL);
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
      return setErrrCode(E_TOO_LARGE);
   }

   /**
    * Set period
    *
    * @param period Period in ticks
    *
    * @note Assumes prescale has been chosen as a appropriate value. Rudimentary range checking.
    */
   static void setPeriodInTicks(int period) {

      // Check if CPWMS is set (affects period)
      bool centreAlign = (tmr->SC&TPM_SC_CPWMS_MASK) != 0;

      // Disable TPM so register changes are immediate
      tmr->SC = TPM_SC_PS(0);

      if (centreAlign) {
#ifdef DEBUG_BUILD
      if (period > 2*0xFFFFUL) {
         // Attempt to set too long a period
         __BKPT();
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
         __BKPT();
      }
#endif
         tmr->MOD = (uint32_t)(period-1);
         // Left aligned PWM without CPWMS selected
         tmr->SC  = Info::sc;
      }
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
         __BKPT();
      }
      if (rv == 0) {
         // Attempt to set too short a period
         __BKPT();
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
         __BKPT();
      }
      if (rv == 0) {
         // Attempt to set too short a period
         __BKPT();
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
         __BKPT();
      }
      if (rv == 0) {
         // Attempt to set too short a period
         __BKPT();
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
      tmr->CONTROLS[channel].CnSC = tpm_pwmHighTruePulses;

      if (tmr->SC&TPM_SC_CPWMS_MASK) {
         tmr->CONTROLS[channel].CnV  = (dutyCycle*tmr->MOD)/100;
      }
      else {
         tmr->CONTROLS[channel].CnV  = (dutyCycle*(tmr->MOD+1))/100;
      }
   }
};

/**
 * Template class to provide TPM callback
 */
template<class Info>
class TpmIrq_T : public TpmBase_T<Info> {

protected:
   /** Callback function for ISR */
   static TPMCallbackFunction callback;

public:
   /**
    * IRQ handler
    */
   static void irqHandler() {
      if (callback != 0) {
         callback(TpmBase_T<Info>::tmr);
      }
	  // Clear interrupt
      TpmBase_T<Info>::tmr->SC &= ~TPM_SC_TOF_MASK;
   }

   /**
    * Set callback function
    *
    * @param theCallback Callback function to execute on interrupt
    */
   static void setCallback(TPMCallbackFunction theCallback) {
      callback = theCallback;
      TpmBase_T<Info>::enableInterrupts();
   }
};

template<class Info> TPMCallbackFunction TpmIrq_T<Info>::callback = 0;

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
class TpmChannel_T : public TpmBase_T<Info>, CheckSignal<Tpm0Info, channel> {

public:
   /**
    * Set PWM duty cycle
    *
    * @param dutyCycle  Duty-cycle as percentage
    */
   static void setDutyCycle(int dutyCycle) {
      TpmBase_T<Info>::setDutyCycle(dutyCycle, channel);
   }

   static void setPCR(uint32_t pcrValue) {
      PcrTable_T<Info,  1>::setPCR((pcrValue&~PORT_PCR_MUX_MASK)|(Info::info[channel].pcrValue&PORT_PCR_MUX_MASK));
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
class Tpm0Channel : public TpmBase_T<Tpm0Info>, CheckSignal<Tpm0Info, channel> {

public:
   /**
    * Set PWM duty cycle
    *
    * @param dutyCycle  Duty-cycle as percentage
    */
   static void setDutyCycle(int dutyCycle) {
      TpmBase_T::setDutyCycle(dutyCycle, channel);
   }
};
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
class Tpm1Channel : public TpmBase_T<Tpm1Info>, CheckSignal<Tpm1Info, channel> {
public:
   static void setDutyCycle(int dutyCycle) {
      TpmBase_T::setDutyCycle(dutyCycle, channel);
   }
};

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
class Tpm2Channel : public TpmBase_T<Tpm2Info>, CheckSignal<Tpm2Info, channel> {
public:
   static void setDutyCycle(int dutyCycle) {
      TpmBase_T::setDutyCycle(dutyCycle, channel);
   }
};

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
public:
   static void setDutyCycle(int dutyCycle) {
      TpmBase_T::setDutyCycle(dutyCycle, channel);
   }
};

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

