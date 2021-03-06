/****************************************************************************************************//**
 * @file     MKE14Z7.h
 *
 * @brief    CMSIS Cortex-M Peripheral Access Layer Header File for MKE14Z7.
 *           Equivalent: 
 *
 * @version  V1.6
 * @date     2017/05
 *
 *******************************************************************************************************/

#ifndef MCU_MKE14Z7
#define MCU_MKE14Z7

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

/**
* @addtogroup Interrupt_vector_numbers_GROUP Interrupt vector numbers
* @brief Vector numbers required for NVIC functions
* @{
*/
/* -------------------------  Interrupt Number Definition  ------------------------ */

/**
 * Interrupt vector numbers
 */
typedef enum {
/* ------------------------  Processor Exceptions Numbers  ------------------------- */
  Reset_IRQn                    = -15,   /**<   1 Reset Vector, invoked on Power up and warm reset                                 */
  NonMaskableInt_IRQn           = -14,   /**<   2 Non maskable Interrupt, cannot be stopped or preempted                           */
  HardFault_IRQn                = -13,   /**<   3 Hard Fault, all classes of Fault                                                 */
  SVCall_IRQn                   =  -5,   /**<  11 System Service Call via SVC instruction                                          */
  PendSV_IRQn                   =  -2,   /**<  14 Pendable request for system service                                              */
  SysTick_IRQn                  =  -1,   /**<  15 System Tick Timer                                                                */
/* ----------------------   MKE14Z7 VectorTable                      ---------------------- */
  DMA0_04_IRQn                  =   0,   /**<  16 Enhanced direct memory access controller                                         */
  DMA0_15_IRQn                  =   1,   /**<  17 Enhanced direct memory access controller                                         */
  DMA0_26_IRQn                  =   2,   /**<  18 Enhanced direct memory access controller                                         */
  DMA0_37_IRQn                  =   3,   /**<  19 Enhanced direct memory access controller                                         */
  DMA_Error_IRQn                =   4,   /**<  20 Enhanced direct memory access controller                                         */
  FTFE_IRQn                     =   5,   /**<  21 Flash Memory Interface                                                           */
  LVD_LVW_IRQn                  =   6,   /**<  22 PMC                                                                              */
  PORTAE_IRQn                   =   7,   /**<  23 General Purpose Input/Output                                                     */
  LPI2C0_IRQn                   =   8,   /**<  24 Low power I2C                                                                    */
  LPI2C1_IRQn                   =   9,   /**<  25 Low power I2C                                                                    */
  LPSPI0_IRQn                   =  10,   /**<  26 Low power SPI                                                                    */
  LPSPI1_IRQn                   =  11,   /**<  27 Low power SPI                                                                    */
  LPUART0_IRQn                  =  12,   /**<  28 Low Power Universal Asynchronous Receiver/Transmitter                            */
  LPUART1_IRQn                  =  13,   /**<  29 Low Power Universal Asynchronous Receiver/Transmitter                            */
  LPUART2_IRQn                  =  14,   /**<  30 Low Power Universal Asynchronous Receiver/Transmitter                            */
  ADC0_IRQn                     =  15,   /**<  31 Analog-to-Digital Converter                                                      */
  CMP0_IRQn                     =  16,   /**<  32 Comparator                                                                       */
  FTM0_IRQn                     =  17,   /**<  33 FlexTimer Module                                                                 */
  FTM1_IRQn                     =  18,   /**<  34 FlexTimer Module                                                                 */
  FTM2_IRQn                     =  19,   /**<  35 FlexTimer Module                                                                 */
  RTC_IRQn                      =  20,   /**<  36 Secure Real Time Clock                                                           */
  CMP1_IRQn                     =  21,   /**<  37 Comparator                                                                       */
  LPIT0_IRQn                    =  22,   /**<  38 Low Power Periodic Interrupt Timer                                               */
  FLEXIO_IRQn                   =  23,   /**<  39 Flexible I/O - universal I/O module for communication (UART, SPI, I2C, I2S) and PWM purposes */
  PDB0_IRQn                     =  25,   /**<  41 Programmable Delay Block                                                         */
  PORTBCD_IRQn                  =  26,   /**<  42 General Purpose Input/Output                                                     */
  SCG_IRQn                      =  27,   /**<  43 System Clock Generator                                                           */
  WDOG_EWM_IRQn                 =  28,   /**<  44 External Watchdog Monitor                                                        */
  PWT_LPTMR0_IRQn               =  29,   /**<  45 Low Power Timer                                                                  */
  ADC1_IRQn                     =  30,   /**<  46 Analog-to-Digital Converter                                                      */
  RCM_IRQn                      =  31,   /**<  47 Reset Control Module                                                             */
} IRQn_Type;

/**
 * @} */ /* End group Interrupt_vector_numbers_GROUP 
 */
/**
* @addtogroup Interrupt_handler_prototypes_GROUP Interrupt handler prototypes
* @brief Prototypes for interrupt handlers
* @{
*/
/* -------------------------  Exception Handlers  ------------------------ */
extern void NMI_Handler(void);                 /**< Non maskable Interrupt, cannot be stopped or preempted                           */
extern void HardFault_Handler(void);           /**< Hard Fault, all classes of Fault                                                 */
extern void SVC_Handler(void);                 /**< System Service Call via SVC instruction                                          */
extern void PendSV_Handler(void);              /**< Pendable request for system service                                              */
extern void SysTick_Handler(void);             /**< System Tick Timer                                                                */
extern void DMA0_04_IRQHandler(void);          /**< Enhanced direct memory access controller                                         */
extern void DMA0_15_IRQHandler(void);          /**< Enhanced direct memory access controller                                         */
extern void DMA0_26_IRQHandler(void);          /**< Enhanced direct memory access controller                                         */
extern void DMA0_37_IRQHandler(void);          /**< Enhanced direct memory access controller                                         */
extern void DMA_Error_IRQHandler(void);        /**< Enhanced direct memory access controller                                         */
extern void FTFE_IRQHandler(void);             /**< Flash Memory Interface                                                           */
extern void LVD_LVW_IRQHandler(void);          /**< PMC                                                                              */
extern void PORTAE_IRQHandler(void);           /**< General Purpose Input/Output                                                     */
extern void LPI2C0_IRQHandler(void);           /**< Low power I2C                                                                    */
extern void LPI2C1_IRQHandler(void);           /**< Low power I2C                                                                    */
extern void LPSPI0_IRQHandler(void);           /**< Low power SPI                                                                    */
extern void LPSPI1_IRQHandler(void);           /**< Low power SPI                                                                    */
extern void LPUART0_IRQHandler(void);          /**< Low Power Universal Asynchronous Receiver/Transmitter                            */
extern void LPUART1_IRQHandler(void);          /**< Low Power Universal Asynchronous Receiver/Transmitter                            */
extern void LPUART2_IRQHandler(void);          /**< Low Power Universal Asynchronous Receiver/Transmitter                            */
extern void ADC0_IRQHandler(void);             /**< Analog-to-Digital Converter                                                      */
extern void CMP0_IRQHandler(void);             /**< Comparator                                                                       */
extern void FTM0_IRQHandler(void);             /**< FlexTimer Module                                                                 */
extern void FTM1_IRQHandler(void);             /**< FlexTimer Module                                                                 */
extern void FTM2_IRQHandler(void);             /**< FlexTimer Module                                                                 */
extern void RTC_IRQHandler(void);              /**< Secure Real Time Clock                                                           */
extern void CMP1_IRQHandler(void);             /**< Comparator                                                                       */
extern void LPIT0_IRQHandler(void);            /**< Low Power Periodic Interrupt Timer                                               */
extern void FLEXIO_IRQHandler(void);           /**< Flexible I/O - universal I/O module for communication (UART, SPI, I2C, I2S) and PWM purposes */
extern void PDB0_IRQHandler(void);             /**< Programmable Delay Block                                                         */
extern void PORTBCD_IRQHandler(void);          /**< General Purpose Input/Output                                                     */
extern void SCG_IRQHandler(void);              /**< System Clock Generator                                                           */
extern void WDOG_EWM_IRQHandler(void);         /**< External Watchdog Monitor                                                        */
extern void PWT_LPTMR0_IRQHandler(void);       /**< Low Power Timer                                                                  */
extern void ADC1_IRQHandler(void);             /**< Analog-to-Digital Converter                                                      */
extern void RCM_IRQHandler(void);              /**< Reset Control Module                                                             */

/**
 * @} */ /* End group Interrupt_handler_prototypes_GROUP 
 */
/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/**
* @addtogroup Cortex_Core_Configuration_GROUP Cortex Core Configuration
* @brief Configuration of the cm4 Processor and Core Peripherals
* @{
*/
#define __CM0PLUS_REV             0x0000     /**< CPU Revision                                        */
#define __MPU_PRESENT             0          /**< Whether MPU is present                              */
#define __NVIC_PRIO_BITS          2          /**< Number of implemented bits in NVIC PRIO register    */
#define __Vendor_SysTickConfig    0          /**< Whether Vendor implemented SYSTICK timer is present */
#define __FPU_PRESENT             0          /**< Whether FPU is present                              */
#define __VTOR_PRESENT            1          /**< Whether VTOR register is present                    */

/**
 * @} */ /* End group Cortex_Core_Configuration_GROUP 
 */
#include "core_cm0plus.h"       /* Processor and core peripherals     */
#include "system.h"             /* Device specific configuration file */

#ifndef __IO
#define __IO volatile 
#endif

#ifndef __I
#define __I volatile const
#endif

#ifndef __O
#define __O volatile
#endif


/* ================================================================================ */
/* ================       Device Specific Peripheral Section       ================ */
/* ================================================================================ */



/* -------------------  Start of section using anonymous unions  ------------------ */
#if defined(__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined(__ICCARM__)
  #pragma language=extended
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning 586
#else
  #warning Not supported compiler type
#endif
/**
* @addtogroup Peripheral_access_layer_GROUP Device Peripheral Access Layer
* @brief C structs allowing access to peripheral registers
* @{
*/
/**
* @addtogroup ADC_Peripheral_access_layer_GROUP ADC Peripheral Access Layer
* @brief C Struct for ADC
* @{
*/

/* ================================================================================ */
/* ================           ADC0 (file:ADC0_MKE15Z7)             ================ */
/* ================================================================================ */

/**
 * @brief Analog-to-Digital Converter
 */
/**
* @addtogroup ADC_structs_GROUP ADC struct
* @brief Struct for ADC
* @{
*/
typedef struct {                                /*       ADC0 Structure                                               */
   __IO uint32_t  SC1A;                         /**< 0000: ADC Status and Control Register 1                            */
   __IO uint32_t  SC1B;                         /**< 0004: ADC Status and Control Register 1                            */
        uint8_t   RESERVED_0[56];              
   __IO uint32_t  CFG1;                         /**< 0040: ADC Configuration Register 1                                 */
   __IO uint32_t  CFG2;                         /**< 0044: ADC Configuration Register 2                                 */
   __I  uint32_t  RA;                           /**< 0048: ADC Data Result                                              */
   __I  uint32_t  RB;                           /**< 004C: ADC Data Result                                              */
        uint8_t   RESERVED_1[56];              
   __IO uint32_t  CV1;                          /**< 0088: Compare Value                                                */
   __IO uint32_t  CV2;                          /**< 008C: Compare Value                                                */
   __IO uint32_t  SC2;                          /**< 0090: Status and Control Register 2                                */
   __IO uint32_t  SC3;                          /**< 0094: Status and Control Register 3                                */
   __IO uint32_t  BASE_OFS;                     /**< 0098: BASE Offset Register                                         */
   __IO uint32_t  OFS;                          /**< 009C: ADC Offset Correction Register                               */
   __IO uint32_t  USR_OFS;                      /**< 00A0: USER Offset Correction Register                              */
   __IO uint32_t  XOFS;                         /**< 00A4: ADC X Offset Correction Register                             */
   __IO uint32_t  YOFS;                         /**< 00A8: ADC Y Offset Correction Register                             */
   __IO uint32_t  G;                            /**< 00AC: ADC Gain Register                                            */
   __IO uint32_t  UG;                           /**< 00B0: ADC User Gain Register                                       */
   __IO uint32_t  CLPS;                         /**< 00B4: ADC General Calibration Value Register S                     */
   __IO uint32_t  CLP3;                         /**< 00B8: ADC Plus-Side General Calibration Value Register 3           */
   __IO uint32_t  CLP2;                         /**< 00BC: ADC Plus-Side General Calibration Value Register 2           */
   __IO uint32_t  CLP1;                         /**< 00C0: ADC Plus-Side General Calibration Value Register 1           */
   __IO uint32_t  CLP0;                         /**< 00C4: ADC Plus-Side General Calibration Value Register 0           */
   __IO uint32_t  CLPX;                         /**< 00C8: ADC Plus-Side General Calibration Value Register X           */
   __IO uint32_t  CLP9;                         /**< 00CC: ADC Plus-Side General Calibration Value Register 9           */
   __IO uint32_t  CLPS_OFS;                     /**< 00D0: ADC General Calibration Offset Value Register S              */
   __IO uint32_t  CLP3_OFS;                     /**< 00D4: ADC Plus-Side General Calibration Offset Value Register 3    */
   __IO uint32_t  CLP2_OFS;                     /**< 00D8: ADC Plus-Side General Calibration Offset Value Register 2    */
   __IO uint32_t  CLP1_OFS;                     /**< 00DC: ADC Plus-Side General Calibration Offset Value Register 1    */
   __IO uint32_t  CLP0_OFS;                     /**< 00E0: ADC Plus-Side General Calibration Offset Value Register 0    */
   __IO uint32_t  CLPX_OFS;                     /**< 00E4: ADC Plus-Side General Calibration Offset Value Register X    */
   __IO uint32_t  CLP9_OFS;                     /**< 00E8: ADC Plus-Side General Calibration Offset Value Register 9    */
} ADC0_Type;

/**
 * @} */ /* End group ADC_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'ADC0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup ADC_Register_Masks_GROUP ADC Register Masks
* @brief Register Masks for ADC
* @{
*/
/* ------- SC1 Bit Fields                           ------ */
#define ADC_SC1_ADCH_MASK                        (0x1FU)                                             /*!< ADC0_SC1: ADCH Mask                     */
#define ADC_SC1_ADCH_SHIFT                       (0U)                                                /*!< ADC0_SC1: ADCH Position                 */
#define ADC_SC1_ADCH(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC1_ADCH_SHIFT))&ADC_SC1_ADCH_MASK) /*!< ADC0_SC1                                */
#define ADC_SC1_AIEN_MASK                        (0x40U)                                             /*!< ADC0_SC1: AIEN Mask                     */
#define ADC_SC1_AIEN_SHIFT                       (6U)                                                /*!< ADC0_SC1: AIEN Position                 */
#define ADC_SC1_AIEN(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC1_AIEN_SHIFT))&ADC_SC1_AIEN_MASK) /*!< ADC0_SC1                                */
#define ADC_SC1_COCO_MASK                        (0x80U)                                             /*!< ADC0_SC1: COCO Mask                     */
#define ADC_SC1_COCO_SHIFT                       (7U)                                                /*!< ADC0_SC1: COCO Position                 */
#define ADC_SC1_COCO(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC1_COCO_SHIFT))&ADC_SC1_COCO_MASK) /*!< ADC0_SC1                                */
/* ------- CFG1 Bit Fields                          ------ */
#define ADC_CFG1_ADICLK_MASK                     (0x3U)                                              /*!< ADC0_CFG1: ADICLK Mask                  */
#define ADC_CFG1_ADICLK_SHIFT                    (0U)                                                /*!< ADC0_CFG1: ADICLK Position              */
#define ADC_CFG1_ADICLK(x)                       (((uint32_t)(((uint32_t)(x))<<ADC_CFG1_ADICLK_SHIFT))&ADC_CFG1_ADICLK_MASK) /*!< ADC0_CFG1                               */
#define ADC_CFG1_MODE_MASK                       (0xCU)                                              /*!< ADC0_CFG1: MODE Mask                    */
#define ADC_CFG1_MODE_SHIFT                      (2U)                                                /*!< ADC0_CFG1: MODE Position                */
#define ADC_CFG1_MODE(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CFG1_MODE_SHIFT))&ADC_CFG1_MODE_MASK) /*!< ADC0_CFG1                               */
#define ADC_CFG1_ADIV_MASK                       (0x60U)                                             /*!< ADC0_CFG1: ADIV Mask                    */
#define ADC_CFG1_ADIV_SHIFT                      (5U)                                                /*!< ADC0_CFG1: ADIV Position                */
#define ADC_CFG1_ADIV(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CFG1_ADIV_SHIFT))&ADC_CFG1_ADIV_MASK) /*!< ADC0_CFG1                               */
/* ------- CFG2 Bit Fields                          ------ */
#define ADC_CFG2_SMPLTS_MASK                     (0xFFU)                                             /*!< ADC0_CFG2: SMPLTS Mask                  */
#define ADC_CFG2_SMPLTS_SHIFT                    (0U)                                                /*!< ADC0_CFG2: SMPLTS Position              */
#define ADC_CFG2_SMPLTS(x)                       (((uint32_t)(((uint32_t)(x))<<ADC_CFG2_SMPLTS_SHIFT))&ADC_CFG2_SMPLTS_MASK) /*!< ADC0_CFG2                               */
/* ------- R Bit Fields                             ------ */
#define ADC_R_D_MASK                             (0xFFFU)                                            /*!< ADC0_R: D Mask                          */
#define ADC_R_D_SHIFT                            (0U)                                                /*!< ADC0_R: D Position                      */
#define ADC_R_D(x)                               (((uint32_t)(((uint32_t)(x))<<ADC_R_D_SHIFT))&ADC_R_D_MASK) /*!< ADC0_R                                  */
/* ------- CV Bit Fields                            ------ */
#define ADC_CV_CV_MASK                           (0xFFFFU)                                           /*!< ADC0_CV: CV Mask                        */
#define ADC_CV_CV_SHIFT                          (0U)                                                /*!< ADC0_CV: CV Position                    */
#define ADC_CV_CV(x)                             (((uint32_t)(((uint32_t)(x))<<ADC_CV_CV_SHIFT))&ADC_CV_CV_MASK) /*!< ADC0_CV                                 */
/* ------- SC2 Bit Fields                           ------ */
#define ADC_SC2_REFSEL_MASK                      (0x3U)                                              /*!< ADC0_SC2: REFSEL Mask                   */
#define ADC_SC2_REFSEL_SHIFT                     (0U)                                                /*!< ADC0_SC2: REFSEL Position               */
#define ADC_SC2_REFSEL(x)                        (((uint32_t)(((uint32_t)(x))<<ADC_SC2_REFSEL_SHIFT))&ADC_SC2_REFSEL_MASK) /*!< ADC0_SC2                                */
#define ADC_SC2_DMAEN_MASK                       (0x4U)                                              /*!< ADC0_SC2: DMAEN Mask                    */
#define ADC_SC2_DMAEN_SHIFT                      (2U)                                                /*!< ADC0_SC2: DMAEN Position                */
#define ADC_SC2_DMAEN(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_SC2_DMAEN_SHIFT))&ADC_SC2_DMAEN_MASK) /*!< ADC0_SC2                                */
#define ADC_SC2_ACREN_MASK                       (0x8U)                                              /*!< ADC0_SC2: ACREN Mask                    */
#define ADC_SC2_ACREN_SHIFT                      (3U)                                                /*!< ADC0_SC2: ACREN Position                */
#define ADC_SC2_ACREN(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_SC2_ACREN_SHIFT))&ADC_SC2_ACREN_MASK) /*!< ADC0_SC2                                */
#define ADC_SC2_ACFGT_MASK                       (0x10U)                                             /*!< ADC0_SC2: ACFGT Mask                    */
#define ADC_SC2_ACFGT_SHIFT                      (4U)                                                /*!< ADC0_SC2: ACFGT Position                */
#define ADC_SC2_ACFGT(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_SC2_ACFGT_SHIFT))&ADC_SC2_ACFGT_MASK) /*!< ADC0_SC2                                */
#define ADC_SC2_ACFE_MASK                        (0x20U)                                             /*!< ADC0_SC2: ACFE Mask                     */
#define ADC_SC2_ACFE_SHIFT                       (5U)                                                /*!< ADC0_SC2: ACFE Position                 */
#define ADC_SC2_ACFE(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC2_ACFE_SHIFT))&ADC_SC2_ACFE_MASK) /*!< ADC0_SC2                                */
#define ADC_SC2_ADTRG_MASK                       (0x40U)                                             /*!< ADC0_SC2: ADTRG Mask                    */
#define ADC_SC2_ADTRG_SHIFT                      (6U)                                                /*!< ADC0_SC2: ADTRG Position                */
#define ADC_SC2_ADTRG(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_SC2_ADTRG_SHIFT))&ADC_SC2_ADTRG_MASK) /*!< ADC0_SC2                                */
#define ADC_SC2_ADACT_MASK                       (0x80U)                                             /*!< ADC0_SC2: ADACT Mask                    */
#define ADC_SC2_ADACT_SHIFT                      (7U)                                                /*!< ADC0_SC2: ADACT Position                */
#define ADC_SC2_ADACT(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_SC2_ADACT_SHIFT))&ADC_SC2_ADACT_MASK) /*!< ADC0_SC2                                */
/* ------- SC3 Bit Fields                           ------ */
#define ADC_SC3_AVGS_MASK                        (0x3U)                                              /*!< ADC0_SC3: AVGS Mask                     */
#define ADC_SC3_AVGS_SHIFT                       (0U)                                                /*!< ADC0_SC3: AVGS Position                 */
#define ADC_SC3_AVGS(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC3_AVGS_SHIFT))&ADC_SC3_AVGS_MASK) /*!< ADC0_SC3                                */
#define ADC_SC3_AVGE_MASK                        (0x4U)                                              /*!< ADC0_SC3: AVGE Mask                     */
#define ADC_SC3_AVGE_SHIFT                       (2U)                                                /*!< ADC0_SC3: AVGE Position                 */
#define ADC_SC3_AVGE(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC3_AVGE_SHIFT))&ADC_SC3_AVGE_MASK) /*!< ADC0_SC3                                */
#define ADC_SC3_ADCO_MASK                        (0x8U)                                              /*!< ADC0_SC3: ADCO Mask                     */
#define ADC_SC3_ADCO_SHIFT                       (3U)                                                /*!< ADC0_SC3: ADCO Position                 */
#define ADC_SC3_ADCO(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC3_ADCO_SHIFT))&ADC_SC3_ADCO_MASK) /*!< ADC0_SC3                                */
#define ADC_SC3_CAL_MASK                         (0x80U)                                             /*!< ADC0_SC3: CAL Mask                      */
#define ADC_SC3_CAL_SHIFT                        (7U)                                                /*!< ADC0_SC3: CAL Position                  */
#define ADC_SC3_CAL(x)                           (((uint32_t)(((uint32_t)(x))<<ADC_SC3_CAL_SHIFT))&ADC_SC3_CAL_MASK) /*!< ADC0_SC3                                */
/* ------- BASE_OFS Bit Fields                      ------ */
#define ADC_BASE_OFS_BA_OFS_MASK                 (0xFFU)                                             /*!< ADC0_BASE_OFS: BA_OFS Mask              */
#define ADC_BASE_OFS_BA_OFS_SHIFT                (0U)                                                /*!< ADC0_BASE_OFS: BA_OFS Position          */
#define ADC_BASE_OFS_BA_OFS(x)                   (((uint32_t)(((uint32_t)(x))<<ADC_BASE_OFS_BA_OFS_SHIFT))&ADC_BASE_OFS_BA_OFS_MASK) /*!< ADC0_BASE_OFS                           */
/* ------- OFS Bit Fields                           ------ */
#define ADC_OFS_OFS_MASK                         (0xFFFFU)                                           /*!< ADC0_OFS: OFS Mask                      */
#define ADC_OFS_OFS_SHIFT                        (0U)                                                /*!< ADC0_OFS: OFS Position                  */
#define ADC_OFS_OFS(x)                           (((uint32_t)(((uint32_t)(x))<<ADC_OFS_OFS_SHIFT))&ADC_OFS_OFS_MASK) /*!< ADC0_OFS                                */
/* ------- USR_OFS Bit Fields                       ------ */
#define ADC_USR_OFS_USR_OFS_MASK                 (0xFFU)                                             /*!< ADC0_USR_OFS: USR_OFS Mask              */
#define ADC_USR_OFS_USR_OFS_SHIFT                (0U)                                                /*!< ADC0_USR_OFS: USR_OFS Position          */
#define ADC_USR_OFS_USR_OFS(x)                   (((uint32_t)(((uint32_t)(x))<<ADC_USR_OFS_USR_OFS_SHIFT))&ADC_USR_OFS_USR_OFS_MASK) /*!< ADC0_USR_OFS                            */
/* ------- XOFS Bit Fields                          ------ */
#define ADC_XOFS_XOFS_MASK                       (0x3FU)                                             /*!< ADC0_XOFS: XOFS Mask                    */
#define ADC_XOFS_XOFS_SHIFT                      (0U)                                                /*!< ADC0_XOFS: XOFS Position                */
#define ADC_XOFS_XOFS(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_XOFS_XOFS_SHIFT))&ADC_XOFS_XOFS_MASK) /*!< ADC0_XOFS                               */
/* ------- YOFS Bit Fields                          ------ */
#define ADC_YOFS_YOFS_MASK                       (0xFFU)                                             /*!< ADC0_YOFS: YOFS Mask                    */
#define ADC_YOFS_YOFS_SHIFT                      (0U)                                                /*!< ADC0_YOFS: YOFS Position                */
#define ADC_YOFS_YOFS(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_YOFS_YOFS_SHIFT))&ADC_YOFS_YOFS_MASK) /*!< ADC0_YOFS                               */
/* ------- G Bit Fields                             ------ */
#define ADC_G_G_MASK                             (0x7FFU)                                            /*!< ADC0_G: G Mask                          */
#define ADC_G_G_SHIFT                            (0U)                                                /*!< ADC0_G: G Position                      */
#define ADC_G_G(x)                               (((uint32_t)(((uint32_t)(x))<<ADC_G_G_SHIFT))&ADC_G_G_MASK) /*!< ADC0_G                                  */
/* ------- UG Bit Fields                            ------ */
#define ADC_UG_UG_MASK                           (0x3FFU)                                            /*!< ADC0_UG: UG Mask                        */
#define ADC_UG_UG_SHIFT                          (0U)                                                /*!< ADC0_UG: UG Position                    */
#define ADC_UG_UG(x)                             (((uint32_t)(((uint32_t)(x))<<ADC_UG_UG_SHIFT))&ADC_UG_UG_MASK) /*!< ADC0_UG                                 */
/* ------- CLPS Bit Fields                          ------ */
#define ADC_CLPS_CLPS_MASK                       (0x7FU)                                             /*!< ADC0_CLPS: CLPS Mask                    */
#define ADC_CLPS_CLPS_SHIFT                      (0U)                                                /*!< ADC0_CLPS: CLPS Position                */
#define ADC_CLPS_CLPS(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLPS_CLPS_SHIFT))&ADC_CLPS_CLPS_MASK) /*!< ADC0_CLPS                               */
/* ------- CLP Bit Fields                           ------ */
#define ADC_CLP_CLP3_MASK                        (0x3FFU)                                            /*!< ADC0_CLP: CLP3 Mask                     */
#define ADC_CLP_CLP3_SHIFT                       (0U)                                                /*!< ADC0_CLP: CLP3 Position                 */
#define ADC_CLP_CLP3(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_CLP_CLP3_SHIFT))&ADC_CLP_CLP3_MASK) /*!< ADC0_CLP                                */
/* ------- CLP1 Bit Fields                          ------ */
#define ADC_CLP1_CLP1_MASK                       (0x1FFU)                                            /*!< ADC0_CLP1: CLP1 Mask                    */
#define ADC_CLP1_CLP1_SHIFT                      (0U)                                                /*!< ADC0_CLP1: CLP1 Position                */
#define ADC_CLP1_CLP1(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLP1_CLP1_SHIFT))&ADC_CLP1_CLP1_MASK) /*!< ADC0_CLP1                               */
/* ------- CLP0 Bit Fields                          ------ */
#define ADC_CLP0_CLP0_MASK                       (0xFFU)                                             /*!< ADC0_CLP0: CLP0 Mask                    */
#define ADC_CLP0_CLP0_SHIFT                      (0U)                                                /*!< ADC0_CLP0: CLP0 Position                */
#define ADC_CLP0_CLP0(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLP0_CLP0_SHIFT))&ADC_CLP0_CLP0_MASK) /*!< ADC0_CLP0                               */
/* ------- CLPX Bit Fields                          ------ */
#define ADC_CLPX_CLPX_MASK                       (0x7FU)                                             /*!< ADC0_CLPX: CLPX Mask                    */
#define ADC_CLPX_CLPX_SHIFT                      (0U)                                                /*!< ADC0_CLPX: CLPX Position                */
#define ADC_CLPX_CLPX(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLPX_CLPX_SHIFT))&ADC_CLPX_CLPX_MASK) /*!< ADC0_CLPX                               */
/* ------- CLP9 Bit Fields                          ------ */
#define ADC_CLP9_CLP9_MASK                       (0x7FU)                                             /*!< ADC0_CLP9: CLP9 Mask                    */
#define ADC_CLP9_CLP9_SHIFT                      (0U)                                                /*!< ADC0_CLP9: CLP9 Position                */
#define ADC_CLP9_CLP9(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLP9_CLP9_SHIFT))&ADC_CLP9_CLP9_MASK) /*!< ADC0_CLP9                               */
/* ------- CLPS_OFS Bit Fields                      ------ */
#define ADC_CLPS_OFS_CLPS_OFS_MASK               (0xFU)                                              /*!< ADC0_CLPS_OFS: CLPS_OFS Mask            */
#define ADC_CLPS_OFS_CLPS_OFS_SHIFT              (0U)                                                /*!< ADC0_CLPS_OFS: CLPS_OFS Position        */
#define ADC_CLPS_OFS_CLPS_OFS(x)                 (((uint32_t)(((uint32_t)(x))<<ADC_CLPS_OFS_CLPS_OFS_SHIFT))&ADC_CLPS_OFS_CLPS_OFS_MASK) /*!< ADC0_CLPS_OFS                           */
/* ------- CLP3_OFS Bit Fields                      ------ */
#define ADC_CLP3_OFS_CLP3_OFS_MASK               (0xFU)                                              /*!< ADC0_CLP3_OFS: CLP3_OFS Mask            */
#define ADC_CLP3_OFS_CLP3_OFS_SHIFT              (0U)                                                /*!< ADC0_CLP3_OFS: CLP3_OFS Position        */
#define ADC_CLP3_OFS_CLP3_OFS(x)                 (((uint32_t)(((uint32_t)(x))<<ADC_CLP3_OFS_CLP3_OFS_SHIFT))&ADC_CLP3_OFS_CLP3_OFS_MASK) /*!< ADC0_CLP3_OFS                           */
/* ------- CLP2_OFS Bit Fields                      ------ */
#define ADC_CLP2_OFS_CLP2_OFS_MASK               (0xFU)                                              /*!< ADC0_CLP2_OFS: CLP2_OFS Mask            */
#define ADC_CLP2_OFS_CLP2_OFS_SHIFT              (0U)                                                /*!< ADC0_CLP2_OFS: CLP2_OFS Position        */
#define ADC_CLP2_OFS_CLP2_OFS(x)                 (((uint32_t)(((uint32_t)(x))<<ADC_CLP2_OFS_CLP2_OFS_SHIFT))&ADC_CLP2_OFS_CLP2_OFS_MASK) /*!< ADC0_CLP2_OFS                           */
/* ------- CLP1_OFS Bit Fields                      ------ */
#define ADC_CLP1_OFS_CLP1_OFS_MASK               (0xFU)                                              /*!< ADC0_CLP1_OFS: CLP1_OFS Mask            */
#define ADC_CLP1_OFS_CLP1_OFS_SHIFT              (0U)                                                /*!< ADC0_CLP1_OFS: CLP1_OFS Position        */
#define ADC_CLP1_OFS_CLP1_OFS(x)                 (((uint32_t)(((uint32_t)(x))<<ADC_CLP1_OFS_CLP1_OFS_SHIFT))&ADC_CLP1_OFS_CLP1_OFS_MASK) /*!< ADC0_CLP1_OFS                           */
/* ------- CLP0_OFS Bit Fields                      ------ */
#define ADC_CLP0_OFS_CLP0_OFS_MASK               (0xFU)                                              /*!< ADC0_CLP0_OFS: CLP0_OFS Mask            */
#define ADC_CLP0_OFS_CLP0_OFS_SHIFT              (0U)                                                /*!< ADC0_CLP0_OFS: CLP0_OFS Position        */
#define ADC_CLP0_OFS_CLP0_OFS(x)                 (((uint32_t)(((uint32_t)(x))<<ADC_CLP0_OFS_CLP0_OFS_SHIFT))&ADC_CLP0_OFS_CLP0_OFS_MASK) /*!< ADC0_CLP0_OFS                           */
/* ------- CLPX_OFS Bit Fields                      ------ */
#define ADC_CLPX_OFS_CLPX_OFS_MASK               (0xFFFU)                                            /*!< ADC0_CLPX_OFS: CLPX_OFS Mask            */
#define ADC_CLPX_OFS_CLPX_OFS_SHIFT              (0U)                                                /*!< ADC0_CLPX_OFS: CLPX_OFS Position        */
#define ADC_CLPX_OFS_CLPX_OFS(x)                 (((uint32_t)(((uint32_t)(x))<<ADC_CLPX_OFS_CLPX_OFS_SHIFT))&ADC_CLPX_OFS_CLPX_OFS_MASK) /*!< ADC0_CLPX_OFS                           */
/* ------- CLP9_OFS Bit Fields                      ------ */
#define ADC_CLP9_OFS_CLP9_OFS_MASK               (0xFFFU)                                            /*!< ADC0_CLP9_OFS: CLP9_OFS Mask            */
#define ADC_CLP9_OFS_CLP9_OFS_SHIFT              (0U)                                                /*!< ADC0_CLP9_OFS: CLP9_OFS Position        */
#define ADC_CLP9_OFS_CLP9_OFS(x)                 (((uint32_t)(((uint32_t)(x))<<ADC_CLP9_OFS_CLP9_OFS_SHIFT))&ADC_CLP9_OFS_CLP9_OFS_MASK) /*!< ADC0_CLP9_OFS                           */
/**
 * @} */ /* End group ADC_Register_Masks_GROUP 
 */

/* ADC0 - Peripheral instance base addresses */
#define ADC0_BasePtr                   0x4003B000UL //!< Peripheral base address
#define ADC0                           ((ADC0_Type *) ADC0_BasePtr) //!< Freescale base pointer
#define ADC0_BASE_PTR                  (ADC0) //!< Freescale style base pointer
/**
 * @} */ /* End group ADC_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup ADC_Peripheral_access_layer_GROUP ADC Peripheral Access Layer
* @brief C Struct for ADC
* @{
*/

/* ================================================================================ */
/* ================           ADC1 (derived from ADC0)             ================ */
/* ================================================================================ */

/**
 * @brief Analog-to-Digital Converter
 */

/* ADC1 - Peripheral instance base addresses */
#define ADC1_BasePtr                   0x40027000UL //!< Peripheral base address
#define ADC1                           ((ADC0_Type *) ADC1_BasePtr) //!< Freescale base pointer
#define ADC1_BASE_PTR                  (ADC1) //!< Freescale style base pointer
/**
 * @} */ /* End group ADC_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup CMP_Peripheral_access_layer_GROUP CMP Peripheral Access Layer
* @brief C Struct for CMP
* @{
*/

/* ================================================================================ */
/* ================           CMP0 (file:CMP0_MKE15Z7)             ================ */
/* ================================================================================ */

/**
 * @brief Comparator
 */
/**
* @addtogroup CMP_structs_GROUP CMP struct
* @brief Struct for CMP
* @{
*/
typedef struct {                                /*       CMP0 Structure                                               */
   __IO uint32_t  C0;                           /**< 0000: CMP Control Register 0                                       */
   __IO uint32_t  C1;                           /**< 0004: CMP Control Register 1                                       */
   __IO uint32_t  C2;                           /**< 0008: CMP Control Register 2                                       */
} CMP0_Type;

/**
 * @} */ /* End group CMP_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'CMP0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup CMP_Register_Masks_GROUP CMP Register Masks
* @brief Register Masks for CMP
* @{
*/
/* ------- C0 Bit Fields                            ------ */
#define CMP_C0_HYSTCTR_MASK                      (0x3U)                                              /*!< CMP0_C0: HYSTCTR Mask                   */
#define CMP_C0_HYSTCTR_SHIFT                     (0U)                                                /*!< CMP0_C0: HYSTCTR Position               */
#define CMP_C0_HYSTCTR(x)                        (((uint32_t)(((uint32_t)(x))<<CMP_C0_HYSTCTR_SHIFT))&CMP_C0_HYSTCTR_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_OFFSET_MASK                       (0x4U)                                              /*!< CMP0_C0: OFFSET Mask                    */
#define CMP_C0_OFFSET_SHIFT                      (2U)                                                /*!< CMP0_C0: OFFSET Position                */
#define CMP_C0_OFFSET(x)                         (((uint32_t)(((uint32_t)(x))<<CMP_C0_OFFSET_SHIFT))&CMP_C0_OFFSET_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_FILTER_CNT_MASK                   (0x70U)                                             /*!< CMP0_C0: FILTER_CNT Mask                */
#define CMP_C0_FILTER_CNT_SHIFT                  (4U)                                                /*!< CMP0_C0: FILTER_CNT Position            */
#define CMP_C0_FILTER_CNT(x)                     (((uint32_t)(((uint32_t)(x))<<CMP_C0_FILTER_CNT_SHIFT))&CMP_C0_FILTER_CNT_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_EN_MASK                           (0x100U)                                            /*!< CMP0_C0: EN Mask                        */
#define CMP_C0_EN_SHIFT                          (8U)                                                /*!< CMP0_C0: EN Position                    */
#define CMP_C0_EN(x)                             (((uint32_t)(((uint32_t)(x))<<CMP_C0_EN_SHIFT))&CMP_C0_EN_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_OPE_MASK                          (0x200U)                                            /*!< CMP0_C0: OPE Mask                       */
#define CMP_C0_OPE_SHIFT                         (9U)                                                /*!< CMP0_C0: OPE Position                   */
#define CMP_C0_OPE(x)                            (((uint32_t)(((uint32_t)(x))<<CMP_C0_OPE_SHIFT))&CMP_C0_OPE_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_COS_MASK                          (0x400U)                                            /*!< CMP0_C0: COS Mask                       */
#define CMP_C0_COS_SHIFT                         (10U)                                               /*!< CMP0_C0: COS Position                   */
#define CMP_C0_COS(x)                            (((uint32_t)(((uint32_t)(x))<<CMP_C0_COS_SHIFT))&CMP_C0_COS_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_INVT_MASK                         (0x800U)                                            /*!< CMP0_C0: INVT Mask                      */
#define CMP_C0_INVT_SHIFT                        (11U)                                               /*!< CMP0_C0: INVT Position                  */
#define CMP_C0_INVT(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C0_INVT_SHIFT))&CMP_C0_INVT_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_PMODE_MASK                        (0x1000U)                                           /*!< CMP0_C0: PMODE Mask                     */
#define CMP_C0_PMODE_SHIFT                       (12U)                                               /*!< CMP0_C0: PMODE Position                 */
#define CMP_C0_PMODE(x)                          (((uint32_t)(((uint32_t)(x))<<CMP_C0_PMODE_SHIFT))&CMP_C0_PMODE_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_WE_MASK                           (0x4000U)                                           /*!< CMP0_C0: WE Mask                        */
#define CMP_C0_WE_SHIFT                          (14U)                                               /*!< CMP0_C0: WE Position                    */
#define CMP_C0_WE(x)                             (((uint32_t)(((uint32_t)(x))<<CMP_C0_WE_SHIFT))&CMP_C0_WE_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_SE_MASK                           (0x8000U)                                           /*!< CMP0_C0: SE Mask                        */
#define CMP_C0_SE_SHIFT                          (15U)                                               /*!< CMP0_C0: SE Position                    */
#define CMP_C0_SE(x)                             (((uint32_t)(((uint32_t)(x))<<CMP_C0_SE_SHIFT))&CMP_C0_SE_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_FPR_MASK                          (0xFF0000U)                                         /*!< CMP0_C0: FPR Mask                       */
#define CMP_C0_FPR_SHIFT                         (16U)                                               /*!< CMP0_C0: FPR Position                   */
#define CMP_C0_FPR(x)                            (((uint32_t)(((uint32_t)(x))<<CMP_C0_FPR_SHIFT))&CMP_C0_FPR_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_COUT_MASK                         (0x1000000U)                                        /*!< CMP0_C0: COUT Mask                      */
#define CMP_C0_COUT_SHIFT                        (24U)                                               /*!< CMP0_C0: COUT Position                  */
#define CMP_C0_COUT(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C0_COUT_SHIFT))&CMP_C0_COUT_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_CFF_MASK                          (0x2000000U)                                        /*!< CMP0_C0: CFF Mask                       */
#define CMP_C0_CFF_SHIFT                         (25U)                                               /*!< CMP0_C0: CFF Position                   */
#define CMP_C0_CFF(x)                            (((uint32_t)(((uint32_t)(x))<<CMP_C0_CFF_SHIFT))&CMP_C0_CFF_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_CFR_MASK                          (0x4000000U)                                        /*!< CMP0_C0: CFR Mask                       */
#define CMP_C0_CFR_SHIFT                         (26U)                                               /*!< CMP0_C0: CFR Position                   */
#define CMP_C0_CFR(x)                            (((uint32_t)(((uint32_t)(x))<<CMP_C0_CFR_SHIFT))&CMP_C0_CFR_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_IEF_MASK                          (0x8000000U)                                        /*!< CMP0_C0: IEF Mask                       */
#define CMP_C0_IEF_SHIFT                         (27U)                                               /*!< CMP0_C0: IEF Position                   */
#define CMP_C0_IEF(x)                            (((uint32_t)(((uint32_t)(x))<<CMP_C0_IEF_SHIFT))&CMP_C0_IEF_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_IER_MASK                          (0x10000000U)                                       /*!< CMP0_C0: IER Mask                       */
#define CMP_C0_IER_SHIFT                         (28U)                                               /*!< CMP0_C0: IER Position                   */
#define CMP_C0_IER(x)                            (((uint32_t)(((uint32_t)(x))<<CMP_C0_IER_SHIFT))&CMP_C0_IER_MASK) /*!< CMP0_C0                                 */
#define CMP_C0_DMAEN_MASK                        (0x40000000U)                                       /*!< CMP0_C0: DMAEN Mask                     */
#define CMP_C0_DMAEN_SHIFT                       (30U)                                               /*!< CMP0_C0: DMAEN Position                 */
#define CMP_C0_DMAEN(x)                          (((uint32_t)(((uint32_t)(x))<<CMP_C0_DMAEN_SHIFT))&CMP_C0_DMAEN_MASK) /*!< CMP0_C0                                 */
/* ------- C1 Bit Fields                            ------ */
#define CMP_C1_VOSEL_MASK                        (0xFFU)                                             /*!< CMP0_C1: VOSEL Mask                     */
#define CMP_C1_VOSEL_SHIFT                       (0U)                                                /*!< CMP0_C1: VOSEL Position                 */
#define CMP_C1_VOSEL(x)                          (((uint32_t)(((uint32_t)(x))<<CMP_C1_VOSEL_SHIFT))&CMP_C1_VOSEL_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_MSEL_MASK                         (0x700U)                                            /*!< CMP0_C1: MSEL Mask                      */
#define CMP_C1_MSEL_SHIFT                        (8U)                                                /*!< CMP0_C1: MSEL Position                  */
#define CMP_C1_MSEL(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C1_MSEL_SHIFT))&CMP_C1_MSEL_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_PSEL_MASK                         (0x3800U)                                           /*!< CMP0_C1: PSEL Mask                      */
#define CMP_C1_PSEL_SHIFT                        (11U)                                               /*!< CMP0_C1: PSEL Position                  */
#define CMP_C1_PSEL(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C1_PSEL_SHIFT))&CMP_C1_PSEL_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_VRSEL_MASK                        (0x4000U)                                           /*!< CMP0_C1: VRSEL Mask                     */
#define CMP_C1_VRSEL_SHIFT                       (14U)                                               /*!< CMP0_C1: VRSEL Position                 */
#define CMP_C1_VRSEL(x)                          (((uint32_t)(((uint32_t)(x))<<CMP_C1_VRSEL_SHIFT))&CMP_C1_VRSEL_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_DACEN_MASK                        (0x8000U)                                           /*!< CMP0_C1: DACEN Mask                     */
#define CMP_C1_DACEN_SHIFT                       (15U)                                               /*!< CMP0_C1: DACEN Position                 */
#define CMP_C1_DACEN(x)                          (((uint32_t)(((uint32_t)(x))<<CMP_C1_DACEN_SHIFT))&CMP_C1_DACEN_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_CHN0_MASK                         (0x10000U)                                          /*!< CMP0_C1: CHN0 Mask                      */
#define CMP_C1_CHN0_SHIFT                        (16U)                                               /*!< CMP0_C1: CHN0 Position                  */
#define CMP_C1_CHN0(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C1_CHN0_SHIFT))&CMP_C1_CHN0_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_CHN1_MASK                         (0x20000U)                                          /*!< CMP0_C1: CHN1 Mask                      */
#define CMP_C1_CHN1_SHIFT                        (17U)                                               /*!< CMP0_C1: CHN1 Position                  */
#define CMP_C1_CHN1(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C1_CHN1_SHIFT))&CMP_C1_CHN1_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_CHN2_MASK                         (0x40000U)                                          /*!< CMP0_C1: CHN2 Mask                      */
#define CMP_C1_CHN2_SHIFT                        (18U)                                               /*!< CMP0_C1: CHN2 Position                  */
#define CMP_C1_CHN2(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C1_CHN2_SHIFT))&CMP_C1_CHN2_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_CHN3_MASK                         (0x80000U)                                          /*!< CMP0_C1: CHN3 Mask                      */
#define CMP_C1_CHN3_SHIFT                        (19U)                                               /*!< CMP0_C1: CHN3 Position                  */
#define CMP_C1_CHN3(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C1_CHN3_SHIFT))&CMP_C1_CHN3_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_CHN4_MASK                         (0x100000U)                                         /*!< CMP0_C1: CHN4 Mask                      */
#define CMP_C1_CHN4_SHIFT                        (20U)                                               /*!< CMP0_C1: CHN4 Position                  */
#define CMP_C1_CHN4(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C1_CHN4_SHIFT))&CMP_C1_CHN4_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_CHN5_MASK                         (0x200000U)                                         /*!< CMP0_C1: CHN5 Mask                      */
#define CMP_C1_CHN5_SHIFT                        (21U)                                               /*!< CMP0_C1: CHN5 Position                  */
#define CMP_C1_CHN5(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C1_CHN5_SHIFT))&CMP_C1_CHN5_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_CHN6_MASK                         (0x400000U)                                         /*!< CMP0_C1: CHN6 Mask                      */
#define CMP_C1_CHN6_SHIFT                        (22U)                                               /*!< CMP0_C1: CHN6 Position                  */
#define CMP_C1_CHN6(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C1_CHN6_SHIFT))&CMP_C1_CHN6_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_CHN7_MASK                         (0x800000U)                                         /*!< CMP0_C1: CHN7 Mask                      */
#define CMP_C1_CHN7_SHIFT                        (23U)                                               /*!< CMP0_C1: CHN7 Position                  */
#define CMP_C1_CHN7(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C1_CHN7_SHIFT))&CMP_C1_CHN7_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_INNSEL_MASK                       (0x3000000U)                                        /*!< CMP0_C1: INNSEL Mask                    */
#define CMP_C1_INNSEL_SHIFT                      (24U)                                               /*!< CMP0_C1: INNSEL Position                */
#define CMP_C1_INNSEL(x)                         (((uint32_t)(((uint32_t)(x))<<CMP_C1_INNSEL_SHIFT))&CMP_C1_INNSEL_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_INPSEL_MASK                       (0x18000000U)                                       /*!< CMP0_C1: INPSEL Mask                    */
#define CMP_C1_INPSEL_SHIFT                      (27U)                                               /*!< CMP0_C1: INPSEL Position                */
#define CMP_C1_INPSEL(x)                         (((uint32_t)(((uint32_t)(x))<<CMP_C1_INPSEL_SHIFT))&CMP_C1_INPSEL_MASK) /*!< CMP0_C1                                 */
#define CMP_C1_DACOE_MASK                        (0x20000000U)                                       /*!< CMP0_C1: DACOE Mask                     */
#define CMP_C1_DACOE_SHIFT                       (29U)                                               /*!< CMP0_C1: DACOE Position                 */
#define CMP_C1_DACOE(x)                          (((uint32_t)(((uint32_t)(x))<<CMP_C1_DACOE_SHIFT))&CMP_C1_DACOE_MASK) /*!< CMP0_C1                                 */
/* ------- C2 Bit Fields                            ------ */
#define CMP_C2_ACOn_MASK                         (0xFFU)                                             /*!< CMP0_C2: ACOn Mask                      */
#define CMP_C2_ACOn_SHIFT                        (0U)                                                /*!< CMP0_C2: ACOn Position                  */
#define CMP_C2_ACOn(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C2_ACOn_SHIFT))&CMP_C2_ACOn_MASK) /*!< CMP0_C2                                 */
#define CMP_C2_INITMOD_MASK                      (0x3F00U)                                           /*!< CMP0_C2: INITMOD Mask                   */
#define CMP_C2_INITMOD_SHIFT                     (8U)                                                /*!< CMP0_C2: INITMOD Position               */
#define CMP_C2_INITMOD(x)                        (((uint32_t)(((uint32_t)(x))<<CMP_C2_INITMOD_SHIFT))&CMP_C2_INITMOD_MASK) /*!< CMP0_C2                                 */
#define CMP_C2_NSAM_MASK                         (0xC000U)                                           /*!< CMP0_C2: NSAM Mask                      */
#define CMP_C2_NSAM_SHIFT                        (14U)                                               /*!< CMP0_C2: NSAM Position                  */
#define CMP_C2_NSAM(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C2_NSAM_SHIFT))&CMP_C2_NSAM_MASK) /*!< CMP0_C2                                 */
#define CMP_C2_CH0F_MASK                         (0x10000U)                                          /*!< CMP0_C2: CH0F Mask                      */
#define CMP_C2_CH0F_SHIFT                        (16U)                                               /*!< CMP0_C2: CH0F Position                  */
#define CMP_C2_CH0F(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C2_CH0F_SHIFT))&CMP_C2_CH0F_MASK) /*!< CMP0_C2                                 */
#define CMP_C2_CH1F_MASK                         (0x20000U)                                          /*!< CMP0_C2: CH1F Mask                      */
#define CMP_C2_CH1F_SHIFT                        (17U)                                               /*!< CMP0_C2: CH1F Position                  */
#define CMP_C2_CH1F(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C2_CH1F_SHIFT))&CMP_C2_CH1F_MASK) /*!< CMP0_C2                                 */
#define CMP_C2_CH2F_MASK                         (0x40000U)                                          /*!< CMP0_C2: CH2F Mask                      */
#define CMP_C2_CH2F_SHIFT                        (18U)                                               /*!< CMP0_C2: CH2F Position                  */
#define CMP_C2_CH2F(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C2_CH2F_SHIFT))&CMP_C2_CH2F_MASK) /*!< CMP0_C2                                 */
#define CMP_C2_CH3F_MASK                         (0x80000U)                                          /*!< CMP0_C2: CH3F Mask                      */
#define CMP_C2_CH3F_SHIFT                        (19U)                                               /*!< CMP0_C2: CH3F Position                  */
#define CMP_C2_CH3F(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C2_CH3F_SHIFT))&CMP_C2_CH3F_MASK) /*!< CMP0_C2                                 */
#define CMP_C2_CH4F_MASK                         (0x100000U)                                         /*!< CMP0_C2: CH4F Mask                      */
#define CMP_C2_CH4F_SHIFT                        (20U)                                               /*!< CMP0_C2: CH4F Position                  */
#define CMP_C2_CH4F(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C2_CH4F_SHIFT))&CMP_C2_CH4F_MASK) /*!< CMP0_C2                                 */
#define CMP_C2_CH5F_MASK                         (0x200000U)                                         /*!< CMP0_C2: CH5F Mask                      */
#define CMP_C2_CH5F_SHIFT                        (21U)                                               /*!< CMP0_C2: CH5F Position                  */
#define CMP_C2_CH5F(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C2_CH5F_SHIFT))&CMP_C2_CH5F_MASK) /*!< CMP0_C2                                 */
#define CMP_C2_CH6F_MASK                         (0x400000U)                                         /*!< CMP0_C2: CH6F Mask                      */
#define CMP_C2_CH6F_SHIFT                        (22U)                                               /*!< CMP0_C2: CH6F Position                  */
#define CMP_C2_CH6F(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C2_CH6F_SHIFT))&CMP_C2_CH6F_MASK) /*!< CMP0_C2                                 */
#define CMP_C2_CH7F_MASK                         (0x800000U)                                         /*!< CMP0_C2: CH7F Mask                      */
#define CMP_C2_CH7F_SHIFT                        (23U)                                               /*!< CMP0_C2: CH7F Position                  */
#define CMP_C2_CH7F(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C2_CH7F_SHIFT))&CMP_C2_CH7F_MASK) /*!< CMP0_C2                                 */
#define CMP_C2_FXMXCH_MASK                       (0xE000000U)                                        /*!< CMP0_C2: FXMXCH Mask                    */
#define CMP_C2_FXMXCH_SHIFT                      (25U)                                               /*!< CMP0_C2: FXMXCH Position                */
#define CMP_C2_FXMXCH(x)                         (((uint32_t)(((uint32_t)(x))<<CMP_C2_FXMXCH_SHIFT))&CMP_C2_FXMXCH_MASK) /*!< CMP0_C2                                 */
#define CMP_C2_FXMP_MASK                         (0x20000000U)                                       /*!< CMP0_C2: FXMP Mask                      */
#define CMP_C2_FXMP_SHIFT                        (29U)                                               /*!< CMP0_C2: FXMP Position                  */
#define CMP_C2_FXMP(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C2_FXMP_SHIFT))&CMP_C2_FXMP_MASK) /*!< CMP0_C2                                 */
#define CMP_C2_RRIE_MASK                         (0x40000000U)                                       /*!< CMP0_C2: RRIE Mask                      */
#define CMP_C2_RRIE_SHIFT                        (30U)                                               /*!< CMP0_C2: RRIE Position                  */
#define CMP_C2_RRIE(x)                           (((uint32_t)(((uint32_t)(x))<<CMP_C2_RRIE_SHIFT))&CMP_C2_RRIE_MASK) /*!< CMP0_C2                                 */
#define CMP_C2_RRE_MASK                          (0x80000000U)                                       /*!< CMP0_C2: RRE Mask                       */
#define CMP_C2_RRE_SHIFT                         (31U)                                               /*!< CMP0_C2: RRE Position                   */
#define CMP_C2_RRE(x)                            (((uint32_t)(((uint32_t)(x))<<CMP_C2_RRE_SHIFT))&CMP_C2_RRE_MASK) /*!< CMP0_C2                                 */
/**
 * @} */ /* End group CMP_Register_Masks_GROUP 
 */

/* CMP0 - Peripheral instance base addresses */
#define CMP0_BasePtr                   0x40073000UL //!< Peripheral base address
#define CMP0                           ((CMP0_Type *) CMP0_BasePtr) //!< Freescale base pointer
#define CMP0_BASE_PTR                  (CMP0) //!< Freescale style base pointer
/**
 * @} */ /* End group CMP_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup CMP_Peripheral_access_layer_GROUP CMP Peripheral Access Layer
* @brief C Struct for CMP
* @{
*/

/* ================================================================================ */
/* ================           CMP1 (derived from CMP0)             ================ */
/* ================================================================================ */

/**
 * @brief Comparator
 */

/* CMP1 - Peripheral instance base addresses */
#define CMP1_BasePtr                   0x40074000UL //!< Peripheral base address
#define CMP1                           ((CMP0_Type *) CMP1_BasePtr) //!< Freescale base pointer
#define CMP1_BASE_PTR                  (CMP1) //!< Freescale style base pointer
/**
 * @} */ /* End group CMP_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup CRC_Peripheral_access_layer_GROUP CRC Peripheral Access Layer
* @brief C Struct for CRC
* @{
*/

/* ================================================================================ */
/* ================           CRC (file:CRC_0x40032000)            ================ */
/* ================================================================================ */

/**
 * @brief Cyclic Redundancy Check
 */
/**
* @addtogroup CRC_structs_GROUP CRC struct
* @brief Struct for CRC
* @{
*/
typedef struct {                                /*       CRC Structure                                                */
   union {                                      /**< 0000: (size=0004)                                                  */
      __IO uint32_t  DATA;                      /**< 0000: Data register                                                */
      struct {                                  /**< 0000: (size=0004)                                                  */
         union {                                /**< 0000: (size=0002)                                                  */
            __IO uint16_t  DATAL;               /**< 0000: DATAL register                                               */
            struct {                            /**< 0000: (size=0002)                                                  */
               __IO uint8_t   DATALL;           /**< 0000: DATALL register                                              */
               __IO uint8_t   DATALU;           /**< 0001: DATALU register                                              */
            };
         };
         union {                                /**< 0000: (size=0002)                                                  */
            __IO uint16_t  DATAH;               /**< 0002: DATAH register                                               */
            struct {                            /**< 0000: (size=0002)                                                  */
               __IO uint8_t   DATAHL;           /**< 0002: DATAHL register                                              */
               __IO uint8_t   DATAHU;           /**< 0003: DATAHU register                                              */
            };
         };
      };
   };
   union {                                      /**< 0000: (size=0004)                                                  */
      __IO uint32_t  GPOLY;                     /**< 0004: Polynomial register                                          */
      struct {                                  /**< 0000: (size=0004)                                                  */
         union {                                /**< 0000: (size=0002)                                                  */
            __IO uint16_t  GPOLYL;              /**< 0004: GPOLYL register                                              */
            struct {                            /**< 0000: (size=0002)                                                  */
               __IO uint8_t   GPOLYLL;          /**< 0004: GPOLYLL register                                             */
               __IO uint8_t   GPOLYLU;          /**< 0005: GPOLYLU register                                             */
            };
         };
         union {                                /**< 0000: (size=0002)                                                  */
            __IO uint16_t  GPOLYH;              /**< 0006: GPOLYH register                                              */
            struct {                            /**< 0000: (size=0002)                                                  */
               __IO uint8_t   GPOLYHL;          /**< 0006: GPOLYHL register                                             */
               __IO uint8_t   GPOLYHU;          /**< 0007: GPOLYHU register                                             */
            };
         };
      };
   };
   union {                                      /**< 0000: (size=0004)                                                  */
      __IO uint32_t  CTRL;                      /**< 0008: Control register                                             */
      struct {                                  /**< 0000: (size=0004)                                                  */
              uint8_t   RESERVED_6[3];         
         __IO uint8_t   CTRLHU;                 /**< 000B: Control register (byte access)                               */
      };
   };
} CRC_Type;

/**
 * @} */ /* End group CRC_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'CRC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup CRC_Register_Masks_GROUP CRC Register Masks
* @brief Register Masks for CRC
* @{
*/
/* ------- DATA Bit Fields                          ------ */
#define CRC_DATA_LL_MASK                         (0xFFU)                                             /*!< CRC_DATA: LL Mask                       */
#define CRC_DATA_LL_SHIFT                        (0U)                                                /*!< CRC_DATA: LL Position                   */
#define CRC_DATA_LL(x)                           (((uint32_t)(((uint32_t)(x))<<CRC_DATA_LL_SHIFT))&CRC_DATA_LL_MASK) /*!< CRC_DATA                                */
#define CRC_DATA_LU_MASK                         (0xFF00U)                                           /*!< CRC_DATA: LU Mask                       */
#define CRC_DATA_LU_SHIFT                        (8U)                                                /*!< CRC_DATA: LU Position                   */
#define CRC_DATA_LU(x)                           (((uint32_t)(((uint32_t)(x))<<CRC_DATA_LU_SHIFT))&CRC_DATA_LU_MASK) /*!< CRC_DATA                                */
#define CRC_DATA_HL_MASK                         (0xFF0000U)                                         /*!< CRC_DATA: HL Mask                       */
#define CRC_DATA_HL_SHIFT                        (16U)                                               /*!< CRC_DATA: HL Position                   */
#define CRC_DATA_HL(x)                           (((uint32_t)(((uint32_t)(x))<<CRC_DATA_HL_SHIFT))&CRC_DATA_HL_MASK) /*!< CRC_DATA                                */
#define CRC_DATA_HU_MASK                         (0xFF000000U)                                       /*!< CRC_DATA: HU Mask                       */
#define CRC_DATA_HU_SHIFT                        (24U)                                               /*!< CRC_DATA: HU Position                   */
#define CRC_DATA_HU(x)                           (((uint32_t)(((uint32_t)(x))<<CRC_DATA_HU_SHIFT))&CRC_DATA_HU_MASK) /*!< CRC_DATA                                */
/* ------- DATAL Bit Fields                         ------ */
#define CRC_DATAL_DATAL_MASK                     (0xFFFFU)                                           /*!< CRC_DATAL: DATAL Mask                   */
#define CRC_DATAL_DATAL_SHIFT                    (0U)                                                /*!< CRC_DATAL: DATAL Position               */
#define CRC_DATAL_DATAL(x)                       (((uint16_t)(((uint16_t)(x))<<CRC_DATAL_DATAL_SHIFT))&CRC_DATAL_DATAL_MASK) /*!< CRC_DATAL                               */
/* ------- DATALL Bit Fields                        ------ */
#define CRC_DATALL_DATALL_MASK                   (0xFFU)                                             /*!< CRC_DATALL: DATALL Mask                 */
#define CRC_DATALL_DATALL_SHIFT                  (0U)                                                /*!< CRC_DATALL: DATALL Position             */
#define CRC_DATALL_DATALL(x)                     (((uint8_t)(((uint8_t)(x))<<CRC_DATALL_DATALL_SHIFT))&CRC_DATALL_DATALL_MASK) /*!< CRC_DATALL                              */
/* ------- DATALU Bit Fields                        ------ */
#define CRC_DATALU_DATALU_MASK                   (0xFFU)                                             /*!< CRC_DATALU: DATALU Mask                 */
#define CRC_DATALU_DATALU_SHIFT                  (0U)                                                /*!< CRC_DATALU: DATALU Position             */
#define CRC_DATALU_DATALU(x)                     (((uint8_t)(((uint8_t)(x))<<CRC_DATALU_DATALU_SHIFT))&CRC_DATALU_DATALU_MASK) /*!< CRC_DATALU                              */
/* ------- DATAH Bit Fields                         ------ */
#define CRC_DATAH_DATAH_MASK                     (0xFFFFU)                                           /*!< CRC_DATAH: DATAH Mask                   */
#define CRC_DATAH_DATAH_SHIFT                    (0U)                                                /*!< CRC_DATAH: DATAH Position               */
#define CRC_DATAH_DATAH(x)                       (((uint16_t)(((uint16_t)(x))<<CRC_DATAH_DATAH_SHIFT))&CRC_DATAH_DATAH_MASK) /*!< CRC_DATAH                               */
/* ------- DATAHL Bit Fields                        ------ */
#define CRC_DATAHL_DATAHL_MASK                   (0xFFU)                                             /*!< CRC_DATAHL: DATAHL Mask                 */
#define CRC_DATAHL_DATAHL_SHIFT                  (0U)                                                /*!< CRC_DATAHL: DATAHL Position             */
#define CRC_DATAHL_DATAHL(x)                     (((uint8_t)(((uint8_t)(x))<<CRC_DATAHL_DATAHL_SHIFT))&CRC_DATAHL_DATAHL_MASK) /*!< CRC_DATAHL                              */
/* ------- DATAHU Bit Fields                        ------ */
#define CRC_DATAHU_DATAHU_MASK                   (0xFFU)                                             /*!< CRC_DATAHU: DATAHU Mask                 */
#define CRC_DATAHU_DATAHU_SHIFT                  (0U)                                                /*!< CRC_DATAHU: DATAHU Position             */
#define CRC_DATAHU_DATAHU(x)                     (((uint8_t)(((uint8_t)(x))<<CRC_DATAHU_DATAHU_SHIFT))&CRC_DATAHU_DATAHU_MASK) /*!< CRC_DATAHU                              */
/* ------- GPOLY Bit Fields                         ------ */
#define CRC_GPOLY_LOW_MASK                       (0xFFFFU)                                           /*!< CRC_GPOLY: LOW Mask                     */
#define CRC_GPOLY_LOW_SHIFT                      (0U)                                                /*!< CRC_GPOLY: LOW Position                 */
#define CRC_GPOLY_LOW(x)                         (((uint32_t)(((uint32_t)(x))<<CRC_GPOLY_LOW_SHIFT))&CRC_GPOLY_LOW_MASK) /*!< CRC_GPOLY                               */
#define CRC_GPOLY_HIGH_MASK                      (0xFFFF0000U)                                       /*!< CRC_GPOLY: HIGH Mask                    */
#define CRC_GPOLY_HIGH_SHIFT                     (16U)                                               /*!< CRC_GPOLY: HIGH Position                */
#define CRC_GPOLY_HIGH(x)                        (((uint32_t)(((uint32_t)(x))<<CRC_GPOLY_HIGH_SHIFT))&CRC_GPOLY_HIGH_MASK) /*!< CRC_GPOLY                               */
/* ------- GPOLYL Bit Fields                        ------ */
#define CRC_GPOLYL_GPOLYL_MASK                   (0xFFFFU)                                           /*!< CRC_GPOLYL: GPOLYL Mask                 */
#define CRC_GPOLYL_GPOLYL_SHIFT                  (0U)                                                /*!< CRC_GPOLYL: GPOLYL Position             */
#define CRC_GPOLYL_GPOLYL(x)                     (((uint16_t)(((uint16_t)(x))<<CRC_GPOLYL_GPOLYL_SHIFT))&CRC_GPOLYL_GPOLYL_MASK) /*!< CRC_GPOLYL                              */
/* ------- GPOLYLL Bit Fields                       ------ */
#define CRC_GPOLYLL_GPOLYLL_MASK                 (0xFFU)                                             /*!< CRC_GPOLYLL: GPOLYLL Mask               */
#define CRC_GPOLYLL_GPOLYLL_SHIFT                (0U)                                                /*!< CRC_GPOLYLL: GPOLYLL Position           */
#define CRC_GPOLYLL_GPOLYLL(x)                   (((uint8_t)(((uint8_t)(x))<<CRC_GPOLYLL_GPOLYLL_SHIFT))&CRC_GPOLYLL_GPOLYLL_MASK) /*!< CRC_GPOLYLL                             */
/* ------- GPOLYLU Bit Fields                       ------ */
#define CRC_GPOLYLU_GPOLYLU_MASK                 (0xFFU)                                             /*!< CRC_GPOLYLU: GPOLYLU Mask               */
#define CRC_GPOLYLU_GPOLYLU_SHIFT                (0U)                                                /*!< CRC_GPOLYLU: GPOLYLU Position           */
#define CRC_GPOLYLU_GPOLYLU(x)                   (((uint8_t)(((uint8_t)(x))<<CRC_GPOLYLU_GPOLYLU_SHIFT))&CRC_GPOLYLU_GPOLYLU_MASK) /*!< CRC_GPOLYLU                             */
/* ------- GPOLYH Bit Fields                        ------ */
#define CRC_GPOLYH_GPOLYH_MASK                   (0xFFFFU)                                           /*!< CRC_GPOLYH: GPOLYH Mask                 */
#define CRC_GPOLYH_GPOLYH_SHIFT                  (0U)                                                /*!< CRC_GPOLYH: GPOLYH Position             */
#define CRC_GPOLYH_GPOLYH(x)                     (((uint16_t)(((uint16_t)(x))<<CRC_GPOLYH_GPOLYH_SHIFT))&CRC_GPOLYH_GPOLYH_MASK) /*!< CRC_GPOLYH                              */
/* ------- GPOLYHL Bit Fields                       ------ */
#define CRC_GPOLYHL_GPOLYHL_MASK                 (0xFFU)                                             /*!< CRC_GPOLYHL: GPOLYHL Mask               */
#define CRC_GPOLYHL_GPOLYHL_SHIFT                (0U)                                                /*!< CRC_GPOLYHL: GPOLYHL Position           */
#define CRC_GPOLYHL_GPOLYHL(x)                   (((uint8_t)(((uint8_t)(x))<<CRC_GPOLYHL_GPOLYHL_SHIFT))&CRC_GPOLYHL_GPOLYHL_MASK) /*!< CRC_GPOLYHL                             */
/* ------- GPOLYHU Bit Fields                       ------ */
#define CRC_GPOLYHU_GPOLYHU_MASK                 (0xFFU)                                             /*!< CRC_GPOLYHU: GPOLYHU Mask               */
#define CRC_GPOLYHU_GPOLYHU_SHIFT                (0U)                                                /*!< CRC_GPOLYHU: GPOLYHU Position           */
#define CRC_GPOLYHU_GPOLYHU(x)                   (((uint8_t)(((uint8_t)(x))<<CRC_GPOLYHU_GPOLYHU_SHIFT))&CRC_GPOLYHU_GPOLYHU_MASK) /*!< CRC_GPOLYHU                             */
/* ------- CTRL Bit Fields                          ------ */
#define CRC_CTRL_TCRC_MASK                       (0x1000000U)                                        /*!< CRC_CTRL: TCRC Mask                     */
#define CRC_CTRL_TCRC_SHIFT                      (24U)                                               /*!< CRC_CTRL: TCRC Position                 */
#define CRC_CTRL_TCRC(x)                         (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_TCRC_SHIFT))&CRC_CTRL_TCRC_MASK) /*!< CRC_CTRL                                */
#define CRC_CTRL_WAS_MASK                        (0x2000000U)                                        /*!< CRC_CTRL: WAS Mask                      */
#define CRC_CTRL_WAS_SHIFT                       (25U)                                               /*!< CRC_CTRL: WAS Position                  */
#define CRC_CTRL_WAS(x)                          (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_WAS_SHIFT))&CRC_CTRL_WAS_MASK) /*!< CRC_CTRL                                */
#define CRC_CTRL_FXOR_MASK                       (0x4000000U)                                        /*!< CRC_CTRL: FXOR Mask                     */
#define CRC_CTRL_FXOR_SHIFT                      (26U)                                               /*!< CRC_CTRL: FXOR Position                 */
#define CRC_CTRL_FXOR(x)                         (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_FXOR_SHIFT))&CRC_CTRL_FXOR_MASK) /*!< CRC_CTRL                                */
#define CRC_CTRL_TOTR_MASK                       (0x30000000U)                                       /*!< CRC_CTRL: TOTR Mask                     */
#define CRC_CTRL_TOTR_SHIFT                      (28U)                                               /*!< CRC_CTRL: TOTR Position                 */
#define CRC_CTRL_TOTR(x)                         (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_TOTR_SHIFT))&CRC_CTRL_TOTR_MASK) /*!< CRC_CTRL                                */
#define CRC_CTRL_TOT_MASK                        (0xC0000000U)                                       /*!< CRC_CTRL: TOT Mask                      */
#define CRC_CTRL_TOT_SHIFT                       (30U)                                               /*!< CRC_CTRL: TOT Position                  */
#define CRC_CTRL_TOT(x)                          (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_TOT_SHIFT))&CRC_CTRL_TOT_MASK) /*!< CRC_CTRL                                */
/* ------- CTRLHU Bit Fields                        ------ */
#define CRC_CTRLHU_TCRC_MASK                     (0x1U)                                              /*!< CRC_CTRLHU: TCRC Mask                   */
#define CRC_CTRLHU_TCRC_SHIFT                    (0U)                                                /*!< CRC_CTRLHU: TCRC Position               */
#define CRC_CTRLHU_TCRC(x)                       (((uint8_t)(((uint8_t)(x))<<CRC_CTRLHU_TCRC_SHIFT))&CRC_CTRLHU_TCRC_MASK) /*!< CRC_CTRLHU                              */
#define CRC_CTRLHU_WAS_MASK                      (0x2U)                                              /*!< CRC_CTRLHU: WAS Mask                    */
#define CRC_CTRLHU_WAS_SHIFT                     (1U)                                                /*!< CRC_CTRLHU: WAS Position                */
#define CRC_CTRLHU_WAS(x)                        (((uint8_t)(((uint8_t)(x))<<CRC_CTRLHU_WAS_SHIFT))&CRC_CTRLHU_WAS_MASK) /*!< CRC_CTRLHU                              */
#define CRC_CTRLHU_FXOR_MASK                     (0x4U)                                              /*!< CRC_CTRLHU: FXOR Mask                   */
#define CRC_CTRLHU_FXOR_SHIFT                    (2U)                                                /*!< CRC_CTRLHU: FXOR Position               */
#define CRC_CTRLHU_FXOR(x)                       (((uint8_t)(((uint8_t)(x))<<CRC_CTRLHU_FXOR_SHIFT))&CRC_CTRLHU_FXOR_MASK) /*!< CRC_CTRLHU                              */
#define CRC_CTRLHU_TOTR_MASK                     (0x30U)                                             /*!< CRC_CTRLHU: TOTR Mask                   */
#define CRC_CTRLHU_TOTR_SHIFT                    (4U)                                                /*!< CRC_CTRLHU: TOTR Position               */
#define CRC_CTRLHU_TOTR(x)                       (((uint8_t)(((uint8_t)(x))<<CRC_CTRLHU_TOTR_SHIFT))&CRC_CTRLHU_TOTR_MASK) /*!< CRC_CTRLHU                              */
#define CRC_CTRLHU_TOT_MASK                      (0xC0U)                                             /*!< CRC_CTRLHU: TOT Mask                    */
#define CRC_CTRLHU_TOT_SHIFT                     (6U)                                                /*!< CRC_CTRLHU: TOT Position                */
#define CRC_CTRLHU_TOT(x)                        (((uint8_t)(((uint8_t)(x))<<CRC_CTRLHU_TOT_SHIFT))&CRC_CTRLHU_TOT_MASK) /*!< CRC_CTRLHU                              */
/**
 * @} */ /* End group CRC_Register_Masks_GROUP 
 */

/* CRC - Peripheral instance base addresses */
#define CRC_BasePtr                    0x40032000UL //!< Peripheral base address
#define CRC                            ((CRC_Type *) CRC_BasePtr) //!< Freescale base pointer
#define CRC_BASE_PTR                   (CRC) //!< Freescale style base pointer
/**
 * @} */ /* End group CRC_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup DMA_Peripheral_access_layer_GROUP DMA Peripheral Access Layer
* @brief C Struct for DMA
* @{
*/

/* ================================================================================ */
/* ================           DMA (file:DMA_MKE15Z7)               ================ */
/* ================================================================================ */

/**
 * @brief Enhanced direct memory access controller
 */
/**
* @addtogroup DMA_structs_GROUP DMA struct
* @brief Struct for DMA
* @{
*/
typedef struct {                                /*       DMA Structure                                                */
   __IO uint32_t  CR;                           /**< 0000: Control Register                                             */
   __I  uint32_t  ES;                           /**< 0004: Error Status Register                                        */
        uint8_t   RESERVED_0[4];               
   __IO uint32_t  ERQ;                          /**< 000C: Enable Request Register                                      */
        uint8_t   RESERVED_1[4];               
   __IO uint32_t  EEI;                          /**< 0014: Enable Error Interrupt Register                              */
   __O  uint8_t   CEEI;                         /**< 0018: Clear Enable Error Interrupt Register                        */
   __O  uint8_t   SEEI;                         /**< 0019: Set Enable Error Interrupt Register                          */
   __O  uint8_t   CERQ;                         /**< 001A: Clear Enable Request Register                                */
   __O  uint8_t   SERQ;                         /**< 001B: Set Enable Request Register                                  */
   __O  uint8_t   CDNE;                         /**< 001C: Clear DONE Status Bit Register                               */
   __O  uint8_t   SSRT;                         /**< 001D: Set START Bit Register                                       */
   __O  uint8_t   CERR;                         /**< 001E: Clear Error Register                                         */
   __O  uint8_t   CINT;                         /**< 001F: Clear Interrupt Request Register                             */
        uint8_t   RESERVED_2[4];               
   __IO uint32_t  INT;                          /**< 0024: Interrupt Request Register                                   */
        uint8_t   RESERVED_3[4];               
   __IO uint32_t  ERR;                          /**< 002C: Error Register                                               */
        uint8_t   RESERVED_4[4];               
   __I  uint32_t  HRS;                          /**< 0034: Hardware Request Status Register                             */
        uint8_t   RESERVED_5[12];              
   __IO uint32_t  EARS;                         /**< 0044: Enable Asynchronous Request in Stop Register                 */
        uint8_t   RESERVED_6[184];             
   __IO uint8_t   DCHPRI3;                      /**< 0100: Channel n Priority Register                                  */
   __IO uint8_t   DCHPRI2;                      /**< 0101: Channel n Priority Register                                  */
   __IO uint8_t   DCHPRI1;                      /**< 0102: Channel n Priority Register                                  */
   __IO uint8_t   DCHPRI0;                      /**< 0103: Channel n Priority Register                                  */
   __IO uint8_t   DCHPRI7;                      /**< 0104: Channel n Priority Register                                  */
   __IO uint8_t   DCHPRI6;                      /**< 0105: Channel n Priority Register                                  */
   __IO uint8_t   DCHPRI5;                      /**< 0106: Channel n Priority Register                                  */
   __IO uint8_t   DCHPRI4;                      /**< 0107: Channel n Priority Register                                  */
        uint8_t   RESERVED_7[3832];            
   struct {
      __IO uint32_t  SADDR;                     /**< 1000: TCD Source Address                                           */
      __IO uint16_t  SOFF;                      /**< 1004: TCD Signed Source Address Offset                             */
      __IO uint16_t  ATTR;                      /**< 1006: TCD Transfer Attributes                                      */
      union {                                   /**< 1000: (size=0004)                                                  */
         __IO uint32_t  NBYTES_MLNO;            /**< 1008: TCD Minor Byte Count (Minor Loop Mapping Disabled)           */
         __IO uint32_t  NBYTES_MLOFFNO;         /**< 1008: TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled) */
         __IO uint32_t  NBYTES_MLOFFYES;        /**< 1008: TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled) */
      };
      __IO uint32_t  SLAST;                     /**< 100C: TCD Last Source Address Adjustment                           */
      __IO uint32_t  DADDR;                     /**< 1010: TCD Destination Address                                      */
      __IO uint16_t  DOFF;                      /**< 1014: TCD Signed Destination Address Offset                        */
      union {                                   /**< 1000: (size=0002)                                                  */
         __IO uint16_t  CITER_ELINKNO;          /**< 1016: TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
         __IO uint16_t  CITER_ELINKYES;         /**< 1016: TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
      };
      __IO uint32_t  DLASTSGA;                  /**< 1018: TCD Last Destination Address Adjustment/Scatter Gather Address */
      __IO uint16_t  CSR;                       /**< 101C: TCD Control and Status                                       */
      union {                                   /**< 1000: (size=0002)                                                  */
         __IO uint16_t  BITER_ELINKNO;          /**< 101E: TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
         __IO uint16_t  BITER_ELINKYES;         /**< 101E: TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
      };
   } TCD[8];                                    /**< 1000: (cluster: size=0x0100, 256)                                  */
} DMA_Type;

/**
 * @} */ /* End group DMA_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'DMA' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup DMA_Register_Masks_GROUP DMA Register Masks
* @brief Register Masks for DMA
* @{
*/
/* ------- CR Bit Fields                            ------ */
#define DMA_CR_EDBG_MASK                         (0x2U)                                              /*!< DMA_CR: EDBG Mask                       */
#define DMA_CR_EDBG_SHIFT                        (1U)                                                /*!< DMA_CR: EDBG Position                   */
#define DMA_CR_EDBG(x)                           (((uint32_t)(((uint32_t)(x))<<DMA_CR_EDBG_SHIFT))&DMA_CR_EDBG_MASK) /*!< DMA_CR                                  */
#define DMA_CR_ERCA_MASK                         (0x4U)                                              /*!< DMA_CR: ERCA Mask                       */
#define DMA_CR_ERCA_SHIFT                        (2U)                                                /*!< DMA_CR: ERCA Position                   */
#define DMA_CR_ERCA(x)                           (((uint32_t)(((uint32_t)(x))<<DMA_CR_ERCA_SHIFT))&DMA_CR_ERCA_MASK) /*!< DMA_CR                                  */
#define DMA_CR_HOE_MASK                          (0x10U)                                             /*!< DMA_CR: HOE Mask                        */
#define DMA_CR_HOE_SHIFT                         (4U)                                                /*!< DMA_CR: HOE Position                    */
#define DMA_CR_HOE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_CR_HOE_SHIFT))&DMA_CR_HOE_MASK) /*!< DMA_CR                                  */
#define DMA_CR_HALT_MASK                         (0x20U)                                             /*!< DMA_CR: HALT Mask                       */
#define DMA_CR_HALT_SHIFT                        (5U)                                                /*!< DMA_CR: HALT Position                   */
#define DMA_CR_HALT(x)                           (((uint32_t)(((uint32_t)(x))<<DMA_CR_HALT_SHIFT))&DMA_CR_HALT_MASK) /*!< DMA_CR                                  */
#define DMA_CR_CLM_MASK                          (0x40U)                                             /*!< DMA_CR: CLM Mask                        */
#define DMA_CR_CLM_SHIFT                         (6U)                                                /*!< DMA_CR: CLM Position                    */
#define DMA_CR_CLM(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_CR_CLM_SHIFT))&DMA_CR_CLM_MASK) /*!< DMA_CR                                  */
#define DMA_CR_EMLM_MASK                         (0x80U)                                             /*!< DMA_CR: EMLM Mask                       */
#define DMA_CR_EMLM_SHIFT                        (7U)                                                /*!< DMA_CR: EMLM Position                   */
#define DMA_CR_EMLM(x)                           (((uint32_t)(((uint32_t)(x))<<DMA_CR_EMLM_SHIFT))&DMA_CR_EMLM_MASK) /*!< DMA_CR                                  */
#define DMA_CR_ECX_MASK                          (0x10000U)                                          /*!< DMA_CR: ECX Mask                        */
#define DMA_CR_ECX_SHIFT                         (16U)                                               /*!< DMA_CR: ECX Position                    */
#define DMA_CR_ECX(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_CR_ECX_SHIFT))&DMA_CR_ECX_MASK) /*!< DMA_CR                                  */
#define DMA_CR_CX_MASK                           (0x20000U)                                          /*!< DMA_CR: CX Mask                         */
#define DMA_CR_CX_SHIFT                          (17U)                                               /*!< DMA_CR: CX Position                     */
#define DMA_CR_CX(x)                             (((uint32_t)(((uint32_t)(x))<<DMA_CR_CX_SHIFT))&DMA_CR_CX_MASK) /*!< DMA_CR                                  */
#define DMA_CR_ACTIVE_MASK                       (0x80000000U)                                       /*!< DMA_CR: ACTIVE Mask                     */
#define DMA_CR_ACTIVE_SHIFT                      (31U)                                               /*!< DMA_CR: ACTIVE Position                 */
#define DMA_CR_ACTIVE(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_CR_ACTIVE_SHIFT))&DMA_CR_ACTIVE_MASK) /*!< DMA_CR                                  */
/* ------- ES Bit Fields                            ------ */
#define DMA_ES_DBE_MASK                          (0x1U)                                              /*!< DMA_ES: DBE Mask                        */
#define DMA_ES_DBE_SHIFT                         (0U)                                                /*!< DMA_ES: DBE Position                    */
#define DMA_ES_DBE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_DBE_SHIFT))&DMA_ES_DBE_MASK) /*!< DMA_ES                                  */
#define DMA_ES_SBE_MASK                          (0x2U)                                              /*!< DMA_ES: SBE Mask                        */
#define DMA_ES_SBE_SHIFT                         (1U)                                                /*!< DMA_ES: SBE Position                    */
#define DMA_ES_SBE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_SBE_SHIFT))&DMA_ES_SBE_MASK) /*!< DMA_ES                                  */
#define DMA_ES_SGE_MASK                          (0x4U)                                              /*!< DMA_ES: SGE Mask                        */
#define DMA_ES_SGE_SHIFT                         (2U)                                                /*!< DMA_ES: SGE Position                    */
#define DMA_ES_SGE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_SGE_SHIFT))&DMA_ES_SGE_MASK) /*!< DMA_ES                                  */
#define DMA_ES_NCE_MASK                          (0x8U)                                              /*!< DMA_ES: NCE Mask                        */
#define DMA_ES_NCE_SHIFT                         (3U)                                                /*!< DMA_ES: NCE Position                    */
#define DMA_ES_NCE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_NCE_SHIFT))&DMA_ES_NCE_MASK) /*!< DMA_ES                                  */
#define DMA_ES_DOE_MASK                          (0x10U)                                             /*!< DMA_ES: DOE Mask                        */
#define DMA_ES_DOE_SHIFT                         (4U)                                                /*!< DMA_ES: DOE Position                    */
#define DMA_ES_DOE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_DOE_SHIFT))&DMA_ES_DOE_MASK) /*!< DMA_ES                                  */
#define DMA_ES_DAE_MASK                          (0x20U)                                             /*!< DMA_ES: DAE Mask                        */
#define DMA_ES_DAE_SHIFT                         (5U)                                                /*!< DMA_ES: DAE Position                    */
#define DMA_ES_DAE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_DAE_SHIFT))&DMA_ES_DAE_MASK) /*!< DMA_ES                                  */
#define DMA_ES_SOE_MASK                          (0x40U)                                             /*!< DMA_ES: SOE Mask                        */
#define DMA_ES_SOE_SHIFT                         (6U)                                                /*!< DMA_ES: SOE Position                    */
#define DMA_ES_SOE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_SOE_SHIFT))&DMA_ES_SOE_MASK) /*!< DMA_ES                                  */
#define DMA_ES_SAE_MASK                          (0x80U)                                             /*!< DMA_ES: SAE Mask                        */
#define DMA_ES_SAE_SHIFT                         (7U)                                                /*!< DMA_ES: SAE Position                    */
#define DMA_ES_SAE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_SAE_SHIFT))&DMA_ES_SAE_MASK) /*!< DMA_ES                                  */
#define DMA_ES_ERRCHN_MASK                       (0x700U)                                            /*!< DMA_ES: ERRCHN Mask                     */
#define DMA_ES_ERRCHN_SHIFT                      (8U)                                                /*!< DMA_ES: ERRCHN Position                 */
#define DMA_ES_ERRCHN(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ES_ERRCHN_SHIFT))&DMA_ES_ERRCHN_MASK) /*!< DMA_ES                                  */
#define DMA_ES_CPE_MASK                          (0x4000U)                                           /*!< DMA_ES: CPE Mask                        */
#define DMA_ES_CPE_SHIFT                         (14U)                                               /*!< DMA_ES: CPE Position                    */
#define DMA_ES_CPE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_CPE_SHIFT))&DMA_ES_CPE_MASK) /*!< DMA_ES                                  */
#define DMA_ES_ECX_MASK                          (0x10000U)                                          /*!< DMA_ES: ECX Mask                        */
#define DMA_ES_ECX_SHIFT                         (16U)                                               /*!< DMA_ES: ECX Position                    */
#define DMA_ES_ECX(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_ECX_SHIFT))&DMA_ES_ECX_MASK) /*!< DMA_ES                                  */
#define DMA_ES_VLD_MASK                          (0x80000000U)                                       /*!< DMA_ES: VLD Mask                        */
#define DMA_ES_VLD_SHIFT                         (31U)                                               /*!< DMA_ES: VLD Position                    */
#define DMA_ES_VLD(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_VLD_SHIFT))&DMA_ES_VLD_MASK) /*!< DMA_ES                                  */
/* ------- ERQ Bit Fields                           ------ */
#define DMA_ERQ_ERQ0_MASK                        (0x1U)                                              /*!< DMA_ERQ: ERQ0 Mask                      */
#define DMA_ERQ_ERQ0_SHIFT                       (0U)                                                /*!< DMA_ERQ: ERQ0 Position                  */
#define DMA_ERQ_ERQ0(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ0_SHIFT))&DMA_ERQ_ERQ0_MASK) /*!< DMA_ERQ                                 */
#define DMA_ERQ_ERQ1_MASK                        (0x2U)                                              /*!< DMA_ERQ: ERQ1 Mask                      */
#define DMA_ERQ_ERQ1_SHIFT                       (1U)                                                /*!< DMA_ERQ: ERQ1 Position                  */
#define DMA_ERQ_ERQ1(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ1_SHIFT))&DMA_ERQ_ERQ1_MASK) /*!< DMA_ERQ                                 */
#define DMA_ERQ_ERQ2_MASK                        (0x4U)                                              /*!< DMA_ERQ: ERQ2 Mask                      */
#define DMA_ERQ_ERQ2_SHIFT                       (2U)                                                /*!< DMA_ERQ: ERQ2 Position                  */
#define DMA_ERQ_ERQ2(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ2_SHIFT))&DMA_ERQ_ERQ2_MASK) /*!< DMA_ERQ                                 */
#define DMA_ERQ_ERQ3_MASK                        (0x8U)                                              /*!< DMA_ERQ: ERQ3 Mask                      */
#define DMA_ERQ_ERQ3_SHIFT                       (3U)                                                /*!< DMA_ERQ: ERQ3 Position                  */
#define DMA_ERQ_ERQ3(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ3_SHIFT))&DMA_ERQ_ERQ3_MASK) /*!< DMA_ERQ                                 */
#define DMA_ERQ_ERQ4_MASK                        (0x10U)                                             /*!< DMA_ERQ: ERQ4 Mask                      */
#define DMA_ERQ_ERQ4_SHIFT                       (4U)                                                /*!< DMA_ERQ: ERQ4 Position                  */
#define DMA_ERQ_ERQ4(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ4_SHIFT))&DMA_ERQ_ERQ4_MASK) /*!< DMA_ERQ                                 */
#define DMA_ERQ_ERQ5_MASK                        (0x20U)                                             /*!< DMA_ERQ: ERQ5 Mask                      */
#define DMA_ERQ_ERQ5_SHIFT                       (5U)                                                /*!< DMA_ERQ: ERQ5 Position                  */
#define DMA_ERQ_ERQ5(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ5_SHIFT))&DMA_ERQ_ERQ5_MASK) /*!< DMA_ERQ                                 */
#define DMA_ERQ_ERQ6_MASK                        (0x40U)                                             /*!< DMA_ERQ: ERQ6 Mask                      */
#define DMA_ERQ_ERQ6_SHIFT                       (6U)                                                /*!< DMA_ERQ: ERQ6 Position                  */
#define DMA_ERQ_ERQ6(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ6_SHIFT))&DMA_ERQ_ERQ6_MASK) /*!< DMA_ERQ                                 */
#define DMA_ERQ_ERQ7_MASK                        (0x80U)                                             /*!< DMA_ERQ: ERQ7 Mask                      */
#define DMA_ERQ_ERQ7_SHIFT                       (7U)                                                /*!< DMA_ERQ: ERQ7 Position                  */
#define DMA_ERQ_ERQ7(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ7_SHIFT))&DMA_ERQ_ERQ7_MASK) /*!< DMA_ERQ                                 */
/* ------- EEI Bit Fields                           ------ */
#define DMA_EEI_EEI0_MASK                        (0x1U)                                              /*!< DMA_EEI: EEI0 Mask                      */
#define DMA_EEI_EEI0_SHIFT                       (0U)                                                /*!< DMA_EEI: EEI0 Position                  */
#define DMA_EEI_EEI0(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI0_SHIFT))&DMA_EEI_EEI0_MASK) /*!< DMA_EEI                                 */
#define DMA_EEI_EEI1_MASK                        (0x2U)                                              /*!< DMA_EEI: EEI1 Mask                      */
#define DMA_EEI_EEI1_SHIFT                       (1U)                                                /*!< DMA_EEI: EEI1 Position                  */
#define DMA_EEI_EEI1(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI1_SHIFT))&DMA_EEI_EEI1_MASK) /*!< DMA_EEI                                 */
#define DMA_EEI_EEI2_MASK                        (0x4U)                                              /*!< DMA_EEI: EEI2 Mask                      */
#define DMA_EEI_EEI2_SHIFT                       (2U)                                                /*!< DMA_EEI: EEI2 Position                  */
#define DMA_EEI_EEI2(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI2_SHIFT))&DMA_EEI_EEI2_MASK) /*!< DMA_EEI                                 */
#define DMA_EEI_EEI3_MASK                        (0x8U)                                              /*!< DMA_EEI: EEI3 Mask                      */
#define DMA_EEI_EEI3_SHIFT                       (3U)                                                /*!< DMA_EEI: EEI3 Position                  */
#define DMA_EEI_EEI3(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI3_SHIFT))&DMA_EEI_EEI3_MASK) /*!< DMA_EEI                                 */
#define DMA_EEI_EEI4_MASK                        (0x10U)                                             /*!< DMA_EEI: EEI4 Mask                      */
#define DMA_EEI_EEI4_SHIFT                       (4U)                                                /*!< DMA_EEI: EEI4 Position                  */
#define DMA_EEI_EEI4(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI4_SHIFT))&DMA_EEI_EEI4_MASK) /*!< DMA_EEI                                 */
#define DMA_EEI_EEI5_MASK                        (0x20U)                                             /*!< DMA_EEI: EEI5 Mask                      */
#define DMA_EEI_EEI5_SHIFT                       (5U)                                                /*!< DMA_EEI: EEI5 Position                  */
#define DMA_EEI_EEI5(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI5_SHIFT))&DMA_EEI_EEI5_MASK) /*!< DMA_EEI                                 */
#define DMA_EEI_EEI6_MASK                        (0x40U)                                             /*!< DMA_EEI: EEI6 Mask                      */
#define DMA_EEI_EEI6_SHIFT                       (6U)                                                /*!< DMA_EEI: EEI6 Position                  */
#define DMA_EEI_EEI6(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI6_SHIFT))&DMA_EEI_EEI6_MASK) /*!< DMA_EEI                                 */
#define DMA_EEI_EEI7_MASK                        (0x80U)                                             /*!< DMA_EEI: EEI7 Mask                      */
#define DMA_EEI_EEI7_SHIFT                       (7U)                                                /*!< DMA_EEI: EEI7 Position                  */
#define DMA_EEI_EEI7(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI7_SHIFT))&DMA_EEI_EEI7_MASK) /*!< DMA_EEI                                 */
/* ------- CEEI Bit Fields                          ------ */
#define DMA_CEEI_CEEI_MASK                       (0x7U)                                              /*!< DMA_CEEI: CEEI Mask                     */
#define DMA_CEEI_CEEI_SHIFT                      (0U)                                                /*!< DMA_CEEI: CEEI Position                 */
#define DMA_CEEI_CEEI(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CEEI_CEEI_SHIFT))&DMA_CEEI_CEEI_MASK) /*!< DMA_CEEI                                */
#define DMA_CEEI_CAEE_MASK                       (0x40U)                                             /*!< DMA_CEEI: CAEE Mask                     */
#define DMA_CEEI_CAEE_SHIFT                      (6U)                                                /*!< DMA_CEEI: CAEE Position                 */
#define DMA_CEEI_CAEE(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CEEI_CAEE_SHIFT))&DMA_CEEI_CAEE_MASK) /*!< DMA_CEEI                                */
#define DMA_CEEI_NOP_MASK                        (0x80U)                                             /*!< DMA_CEEI: NOP Mask                      */
#define DMA_CEEI_NOP_SHIFT                       (7U)                                                /*!< DMA_CEEI: NOP Position                  */
#define DMA_CEEI_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_CEEI_NOP_SHIFT))&DMA_CEEI_NOP_MASK) /*!< DMA_CEEI                                */
/* ------- SEEI Bit Fields                          ------ */
#define DMA_SEEI_SEEI_MASK                       (0x7U)                                              /*!< DMA_SEEI: SEEI Mask                     */
#define DMA_SEEI_SEEI_SHIFT                      (0U)                                                /*!< DMA_SEEI: SEEI Position                 */
#define DMA_SEEI_SEEI(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SEEI_SEEI_SHIFT))&DMA_SEEI_SEEI_MASK) /*!< DMA_SEEI                                */
#define DMA_SEEI_SAEE_MASK                       (0x40U)                                             /*!< DMA_SEEI: SAEE Mask                     */
#define DMA_SEEI_SAEE_SHIFT                      (6U)                                                /*!< DMA_SEEI: SAEE Position                 */
#define DMA_SEEI_SAEE(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SEEI_SAEE_SHIFT))&DMA_SEEI_SAEE_MASK) /*!< DMA_SEEI                                */
#define DMA_SEEI_NOP_MASK                        (0x80U)                                             /*!< DMA_SEEI: NOP Mask                      */
#define DMA_SEEI_NOP_SHIFT                       (7U)                                                /*!< DMA_SEEI: NOP Position                  */
#define DMA_SEEI_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_SEEI_NOP_SHIFT))&DMA_SEEI_NOP_MASK) /*!< DMA_SEEI                                */
/* ------- CERQ Bit Fields                          ------ */
#define DMA_CERQ_CERQ_MASK                       (0x7U)                                              /*!< DMA_CERQ: CERQ Mask                     */
#define DMA_CERQ_CERQ_SHIFT                      (0U)                                                /*!< DMA_CERQ: CERQ Position                 */
#define DMA_CERQ_CERQ(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CERQ_CERQ_SHIFT))&DMA_CERQ_CERQ_MASK) /*!< DMA_CERQ                                */
#define DMA_CERQ_CAER_MASK                       (0x40U)                                             /*!< DMA_CERQ: CAER Mask                     */
#define DMA_CERQ_CAER_SHIFT                      (6U)                                                /*!< DMA_CERQ: CAER Position                 */
#define DMA_CERQ_CAER(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CERQ_CAER_SHIFT))&DMA_CERQ_CAER_MASK) /*!< DMA_CERQ                                */
#define DMA_CERQ_NOP_MASK                        (0x80U)                                             /*!< DMA_CERQ: NOP Mask                      */
#define DMA_CERQ_NOP_SHIFT                       (7U)                                                /*!< DMA_CERQ: NOP Position                  */
#define DMA_CERQ_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_CERQ_NOP_SHIFT))&DMA_CERQ_NOP_MASK) /*!< DMA_CERQ                                */
/* ------- SERQ Bit Fields                          ------ */
#define DMA_SERQ_SERQ_MASK                       (0x7U)                                              /*!< DMA_SERQ: SERQ Mask                     */
#define DMA_SERQ_SERQ_SHIFT                      (0U)                                                /*!< DMA_SERQ: SERQ Position                 */
#define DMA_SERQ_SERQ(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SERQ_SERQ_SHIFT))&DMA_SERQ_SERQ_MASK) /*!< DMA_SERQ                                */
#define DMA_SERQ_SAER_MASK                       (0x40U)                                             /*!< DMA_SERQ: SAER Mask                     */
#define DMA_SERQ_SAER_SHIFT                      (6U)                                                /*!< DMA_SERQ: SAER Position                 */
#define DMA_SERQ_SAER(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SERQ_SAER_SHIFT))&DMA_SERQ_SAER_MASK) /*!< DMA_SERQ                                */
#define DMA_SERQ_NOP_MASK                        (0x80U)                                             /*!< DMA_SERQ: NOP Mask                      */
#define DMA_SERQ_NOP_SHIFT                       (7U)                                                /*!< DMA_SERQ: NOP Position                  */
#define DMA_SERQ_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_SERQ_NOP_SHIFT))&DMA_SERQ_NOP_MASK) /*!< DMA_SERQ                                */
/* ------- CDNE Bit Fields                          ------ */
#define DMA_CDNE_CDNE_MASK                       (0x7U)                                              /*!< DMA_CDNE: CDNE Mask                     */
#define DMA_CDNE_CDNE_SHIFT                      (0U)                                                /*!< DMA_CDNE: CDNE Position                 */
#define DMA_CDNE_CDNE(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CDNE_CDNE_SHIFT))&DMA_CDNE_CDNE_MASK) /*!< DMA_CDNE                                */
#define DMA_CDNE_CADN_MASK                       (0x40U)                                             /*!< DMA_CDNE: CADN Mask                     */
#define DMA_CDNE_CADN_SHIFT                      (6U)                                                /*!< DMA_CDNE: CADN Position                 */
#define DMA_CDNE_CADN(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CDNE_CADN_SHIFT))&DMA_CDNE_CADN_MASK) /*!< DMA_CDNE                                */
#define DMA_CDNE_NOP_MASK                        (0x80U)                                             /*!< DMA_CDNE: NOP Mask                      */
#define DMA_CDNE_NOP_SHIFT                       (7U)                                                /*!< DMA_CDNE: NOP Position                  */
#define DMA_CDNE_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_CDNE_NOP_SHIFT))&DMA_CDNE_NOP_MASK) /*!< DMA_CDNE                                */
/* ------- SSRT Bit Fields                          ------ */
#define DMA_SSRT_SSRT_MASK                       (0x7U)                                              /*!< DMA_SSRT: SSRT Mask                     */
#define DMA_SSRT_SSRT_SHIFT                      (0U)                                                /*!< DMA_SSRT: SSRT Position                 */
#define DMA_SSRT_SSRT(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SSRT_SSRT_SHIFT))&DMA_SSRT_SSRT_MASK) /*!< DMA_SSRT                                */
#define DMA_SSRT_SAST_MASK                       (0x40U)                                             /*!< DMA_SSRT: SAST Mask                     */
#define DMA_SSRT_SAST_SHIFT                      (6U)                                                /*!< DMA_SSRT: SAST Position                 */
#define DMA_SSRT_SAST(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SSRT_SAST_SHIFT))&DMA_SSRT_SAST_MASK) /*!< DMA_SSRT                                */
#define DMA_SSRT_NOP_MASK                        (0x80U)                                             /*!< DMA_SSRT: NOP Mask                      */
#define DMA_SSRT_NOP_SHIFT                       (7U)                                                /*!< DMA_SSRT: NOP Position                  */
#define DMA_SSRT_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_SSRT_NOP_SHIFT))&DMA_SSRT_NOP_MASK) /*!< DMA_SSRT                                */
/* ------- CERR Bit Fields                          ------ */
#define DMA_CERR_CERR_MASK                       (0x7U)                                              /*!< DMA_CERR: CERR Mask                     */
#define DMA_CERR_CERR_SHIFT                      (0U)                                                /*!< DMA_CERR: CERR Position                 */
#define DMA_CERR_CERR(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CERR_CERR_SHIFT))&DMA_CERR_CERR_MASK) /*!< DMA_CERR                                */
#define DMA_CERR_CAEI_MASK                       (0x40U)                                             /*!< DMA_CERR: CAEI Mask                     */
#define DMA_CERR_CAEI_SHIFT                      (6U)                                                /*!< DMA_CERR: CAEI Position                 */
#define DMA_CERR_CAEI(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CERR_CAEI_SHIFT))&DMA_CERR_CAEI_MASK) /*!< DMA_CERR                                */
#define DMA_CERR_NOP_MASK                        (0x80U)                                             /*!< DMA_CERR: NOP Mask                      */
#define DMA_CERR_NOP_SHIFT                       (7U)                                                /*!< DMA_CERR: NOP Position                  */
#define DMA_CERR_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_CERR_NOP_SHIFT))&DMA_CERR_NOP_MASK) /*!< DMA_CERR                                */
/* ------- CINT Bit Fields                          ------ */
#define DMA_CINT_CINT_MASK                       (0x7U)                                              /*!< DMA_CINT: CINT Mask                     */
#define DMA_CINT_CINT_SHIFT                      (0U)                                                /*!< DMA_CINT: CINT Position                 */
#define DMA_CINT_CINT(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CINT_CINT_SHIFT))&DMA_CINT_CINT_MASK) /*!< DMA_CINT                                */
#define DMA_CINT_CAIR_MASK                       (0x40U)                                             /*!< DMA_CINT: CAIR Mask                     */
#define DMA_CINT_CAIR_SHIFT                      (6U)                                                /*!< DMA_CINT: CAIR Position                 */
#define DMA_CINT_CAIR(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CINT_CAIR_SHIFT))&DMA_CINT_CAIR_MASK) /*!< DMA_CINT                                */
#define DMA_CINT_NOP_MASK                        (0x80U)                                             /*!< DMA_CINT: NOP Mask                      */
#define DMA_CINT_NOP_SHIFT                       (7U)                                                /*!< DMA_CINT: NOP Position                  */
#define DMA_CINT_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_CINT_NOP_SHIFT))&DMA_CINT_NOP_MASK) /*!< DMA_CINT                                */
/* ------- INT Bit Fields                           ------ */
#define DMA_INT_INT0_MASK                        (0x1U)                                              /*!< DMA_INT: INT0 Mask                      */
#define DMA_INT_INT0_SHIFT                       (0U)                                                /*!< DMA_INT: INT0 Position                  */
#define DMA_INT_INT0(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT0_SHIFT))&DMA_INT_INT0_MASK) /*!< DMA_INT                                 */
#define DMA_INT_INT1_MASK                        (0x2U)                                              /*!< DMA_INT: INT1 Mask                      */
#define DMA_INT_INT1_SHIFT                       (1U)                                                /*!< DMA_INT: INT1 Position                  */
#define DMA_INT_INT1(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT1_SHIFT))&DMA_INT_INT1_MASK) /*!< DMA_INT                                 */
#define DMA_INT_INT2_MASK                        (0x4U)                                              /*!< DMA_INT: INT2 Mask                      */
#define DMA_INT_INT2_SHIFT                       (2U)                                                /*!< DMA_INT: INT2 Position                  */
#define DMA_INT_INT2(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT2_SHIFT))&DMA_INT_INT2_MASK) /*!< DMA_INT                                 */
#define DMA_INT_INT3_MASK                        (0x8U)                                              /*!< DMA_INT: INT3 Mask                      */
#define DMA_INT_INT3_SHIFT                       (3U)                                                /*!< DMA_INT: INT3 Position                  */
#define DMA_INT_INT3(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT3_SHIFT))&DMA_INT_INT3_MASK) /*!< DMA_INT                                 */
#define DMA_INT_INT4_MASK                        (0x10U)                                             /*!< DMA_INT: INT4 Mask                      */
#define DMA_INT_INT4_SHIFT                       (4U)                                                /*!< DMA_INT: INT4 Position                  */
#define DMA_INT_INT4(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT4_SHIFT))&DMA_INT_INT4_MASK) /*!< DMA_INT                                 */
#define DMA_INT_INT5_MASK                        (0x20U)                                             /*!< DMA_INT: INT5 Mask                      */
#define DMA_INT_INT5_SHIFT                       (5U)                                                /*!< DMA_INT: INT5 Position                  */
#define DMA_INT_INT5(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT5_SHIFT))&DMA_INT_INT5_MASK) /*!< DMA_INT                                 */
#define DMA_INT_INT6_MASK                        (0x40U)                                             /*!< DMA_INT: INT6 Mask                      */
#define DMA_INT_INT6_SHIFT                       (6U)                                                /*!< DMA_INT: INT6 Position                  */
#define DMA_INT_INT6(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT6_SHIFT))&DMA_INT_INT6_MASK) /*!< DMA_INT                                 */
#define DMA_INT_INT7_MASK                        (0x80U)                                             /*!< DMA_INT: INT7 Mask                      */
#define DMA_INT_INT7_SHIFT                       (7U)                                                /*!< DMA_INT: INT7 Position                  */
#define DMA_INT_INT7(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT7_SHIFT))&DMA_INT_INT7_MASK) /*!< DMA_INT                                 */
/* ------- ERR Bit Fields                           ------ */
#define DMA_ERR_ERR0_MASK                        (0x1U)                                              /*!< DMA_ERR: ERR0 Mask                      */
#define DMA_ERR_ERR0_SHIFT                       (0U)                                                /*!< DMA_ERR: ERR0 Position                  */
#define DMA_ERR_ERR0(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR0_SHIFT))&DMA_ERR_ERR0_MASK) /*!< DMA_ERR                                 */
#define DMA_ERR_ERR1_MASK                        (0x2U)                                              /*!< DMA_ERR: ERR1 Mask                      */
#define DMA_ERR_ERR1_SHIFT                       (1U)                                                /*!< DMA_ERR: ERR1 Position                  */
#define DMA_ERR_ERR1(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR1_SHIFT))&DMA_ERR_ERR1_MASK) /*!< DMA_ERR                                 */
#define DMA_ERR_ERR2_MASK                        (0x4U)                                              /*!< DMA_ERR: ERR2 Mask                      */
#define DMA_ERR_ERR2_SHIFT                       (2U)                                                /*!< DMA_ERR: ERR2 Position                  */
#define DMA_ERR_ERR2(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR2_SHIFT))&DMA_ERR_ERR2_MASK) /*!< DMA_ERR                                 */
#define DMA_ERR_ERR3_MASK                        (0x8U)                                              /*!< DMA_ERR: ERR3 Mask                      */
#define DMA_ERR_ERR3_SHIFT                       (3U)                                                /*!< DMA_ERR: ERR3 Position                  */
#define DMA_ERR_ERR3(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR3_SHIFT))&DMA_ERR_ERR3_MASK) /*!< DMA_ERR                                 */
#define DMA_ERR_ERR4_MASK                        (0x10U)                                             /*!< DMA_ERR: ERR4 Mask                      */
#define DMA_ERR_ERR4_SHIFT                       (4U)                                                /*!< DMA_ERR: ERR4 Position                  */
#define DMA_ERR_ERR4(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR4_SHIFT))&DMA_ERR_ERR4_MASK) /*!< DMA_ERR                                 */
#define DMA_ERR_ERR5_MASK                        (0x20U)                                             /*!< DMA_ERR: ERR5 Mask                      */
#define DMA_ERR_ERR5_SHIFT                       (5U)                                                /*!< DMA_ERR: ERR5 Position                  */
#define DMA_ERR_ERR5(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR5_SHIFT))&DMA_ERR_ERR5_MASK) /*!< DMA_ERR                                 */
#define DMA_ERR_ERR6_MASK                        (0x40U)                                             /*!< DMA_ERR: ERR6 Mask                      */
#define DMA_ERR_ERR6_SHIFT                       (6U)                                                /*!< DMA_ERR: ERR6 Position                  */
#define DMA_ERR_ERR6(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR6_SHIFT))&DMA_ERR_ERR6_MASK) /*!< DMA_ERR                                 */
#define DMA_ERR_ERR7_MASK                        (0x80U)                                             /*!< DMA_ERR: ERR7 Mask                      */
#define DMA_ERR_ERR7_SHIFT                       (7U)                                                /*!< DMA_ERR: ERR7 Position                  */
#define DMA_ERR_ERR7(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR7_SHIFT))&DMA_ERR_ERR7_MASK) /*!< DMA_ERR                                 */
/* ------- HRS Bit Fields                           ------ */
#define DMA_HRS_HRS0_MASK                        (0x1U)                                              /*!< DMA_HRS: HRS0 Mask                      */
#define DMA_HRS_HRS0_SHIFT                       (0U)                                                /*!< DMA_HRS: HRS0 Position                  */
#define DMA_HRS_HRS0(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS0_SHIFT))&DMA_HRS_HRS0_MASK) /*!< DMA_HRS                                 */
#define DMA_HRS_HRS1_MASK                        (0x2U)                                              /*!< DMA_HRS: HRS1 Mask                      */
#define DMA_HRS_HRS1_SHIFT                       (1U)                                                /*!< DMA_HRS: HRS1 Position                  */
#define DMA_HRS_HRS1(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS1_SHIFT))&DMA_HRS_HRS1_MASK) /*!< DMA_HRS                                 */
#define DMA_HRS_HRS2_MASK                        (0x4U)                                              /*!< DMA_HRS: HRS2 Mask                      */
#define DMA_HRS_HRS2_SHIFT                       (2U)                                                /*!< DMA_HRS: HRS2 Position                  */
#define DMA_HRS_HRS2(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS2_SHIFT))&DMA_HRS_HRS2_MASK) /*!< DMA_HRS                                 */
#define DMA_HRS_HRS3_MASK                        (0x8U)                                              /*!< DMA_HRS: HRS3 Mask                      */
#define DMA_HRS_HRS3_SHIFT                       (3U)                                                /*!< DMA_HRS: HRS3 Position                  */
#define DMA_HRS_HRS3(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS3_SHIFT))&DMA_HRS_HRS3_MASK) /*!< DMA_HRS                                 */
#define DMA_HRS_HRS4_MASK                        (0x10U)                                             /*!< DMA_HRS: HRS4 Mask                      */
#define DMA_HRS_HRS4_SHIFT                       (4U)                                                /*!< DMA_HRS: HRS4 Position                  */
#define DMA_HRS_HRS4(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS4_SHIFT))&DMA_HRS_HRS4_MASK) /*!< DMA_HRS                                 */
#define DMA_HRS_HRS5_MASK                        (0x20U)                                             /*!< DMA_HRS: HRS5 Mask                      */
#define DMA_HRS_HRS5_SHIFT                       (5U)                                                /*!< DMA_HRS: HRS5 Position                  */
#define DMA_HRS_HRS5(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS5_SHIFT))&DMA_HRS_HRS5_MASK) /*!< DMA_HRS                                 */
#define DMA_HRS_HRS6_MASK                        (0x40U)                                             /*!< DMA_HRS: HRS6 Mask                      */
#define DMA_HRS_HRS6_SHIFT                       (6U)                                                /*!< DMA_HRS: HRS6 Position                  */
#define DMA_HRS_HRS6(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS6_SHIFT))&DMA_HRS_HRS6_MASK) /*!< DMA_HRS                                 */
#define DMA_HRS_HRS7_MASK                        (0x80U)                                             /*!< DMA_HRS: HRS7 Mask                      */
#define DMA_HRS_HRS7_SHIFT                       (7U)                                                /*!< DMA_HRS: HRS7 Position                  */
#define DMA_HRS_HRS7(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS7_SHIFT))&DMA_HRS_HRS7_MASK) /*!< DMA_HRS                                 */
/* ------- EARS Bit Fields                          ------ */
#define DMA_EARS_EDREQ_0_MASK                    (0x1U)                                              /*!< DMA_EARS: EDREQ_0 Mask                  */
#define DMA_EARS_EDREQ_0_SHIFT                   (0U)                                                /*!< DMA_EARS: EDREQ_0 Position              */
#define DMA_EARS_EDREQ_0(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_0_SHIFT))&DMA_EARS_EDREQ_0_MASK) /*!< DMA_EARS                                */
#define DMA_EARS_EDREQ_1_MASK                    (0x2U)                                              /*!< DMA_EARS: EDREQ_1 Mask                  */
#define DMA_EARS_EDREQ_1_SHIFT                   (1U)                                                /*!< DMA_EARS: EDREQ_1 Position              */
#define DMA_EARS_EDREQ_1(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_1_SHIFT))&DMA_EARS_EDREQ_1_MASK) /*!< DMA_EARS                                */
#define DMA_EARS_EDREQ_2_MASK                    (0x4U)                                              /*!< DMA_EARS: EDREQ_2 Mask                  */
#define DMA_EARS_EDREQ_2_SHIFT                   (2U)                                                /*!< DMA_EARS: EDREQ_2 Position              */
#define DMA_EARS_EDREQ_2(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_2_SHIFT))&DMA_EARS_EDREQ_2_MASK) /*!< DMA_EARS                                */
#define DMA_EARS_EDREQ_3_MASK                    (0x8U)                                              /*!< DMA_EARS: EDREQ_3 Mask                  */
#define DMA_EARS_EDREQ_3_SHIFT                   (3U)                                                /*!< DMA_EARS: EDREQ_3 Position              */
#define DMA_EARS_EDREQ_3(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_3_SHIFT))&DMA_EARS_EDREQ_3_MASK) /*!< DMA_EARS                                */
#define DMA_EARS_EDREQ_4_MASK                    (0x10U)                                             /*!< DMA_EARS: EDREQ_4 Mask                  */
#define DMA_EARS_EDREQ_4_SHIFT                   (4U)                                                /*!< DMA_EARS: EDREQ_4 Position              */
#define DMA_EARS_EDREQ_4(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_4_SHIFT))&DMA_EARS_EDREQ_4_MASK) /*!< DMA_EARS                                */
#define DMA_EARS_EDREQ_5_MASK                    (0x20U)                                             /*!< DMA_EARS: EDREQ_5 Mask                  */
#define DMA_EARS_EDREQ_5_SHIFT                   (5U)                                                /*!< DMA_EARS: EDREQ_5 Position              */
#define DMA_EARS_EDREQ_5(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_5_SHIFT))&DMA_EARS_EDREQ_5_MASK) /*!< DMA_EARS                                */
#define DMA_EARS_EDREQ_6_MASK                    (0x40U)                                             /*!< DMA_EARS: EDREQ_6 Mask                  */
#define DMA_EARS_EDREQ_6_SHIFT                   (6U)                                                /*!< DMA_EARS: EDREQ_6 Position              */
#define DMA_EARS_EDREQ_6(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_6_SHIFT))&DMA_EARS_EDREQ_6_MASK) /*!< DMA_EARS                                */
#define DMA_EARS_EDREQ_7_MASK                    (0x80U)                                             /*!< DMA_EARS: EDREQ_7 Mask                  */
#define DMA_EARS_EDREQ_7_SHIFT                   (7U)                                                /*!< DMA_EARS: EDREQ_7 Position              */
#define DMA_EARS_EDREQ_7(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_7_SHIFT))&DMA_EARS_EDREQ_7_MASK) /*!< DMA_EARS                                */
/* ------- DCHPRI Bit Fields                        ------ */
#define DMA_DCHPRI_CHPRI_MASK                    (0x7U)                                              /*!< DMA_DCHPRI: CHPRI Mask                  */
#define DMA_DCHPRI_CHPRI_SHIFT                   (0U)                                                /*!< DMA_DCHPRI: CHPRI Position              */
#define DMA_DCHPRI_CHPRI(x)                      (((uint8_t)(((uint8_t)(x))<<DMA_DCHPRI_CHPRI_SHIFT))&DMA_DCHPRI_CHPRI_MASK) /*!< DMA_DCHPRI                              */
#define DMA_DCHPRI_DPA_MASK                      (0x40U)                                             /*!< DMA_DCHPRI: DPA Mask                    */
#define DMA_DCHPRI_DPA_SHIFT                     (6U)                                                /*!< DMA_DCHPRI: DPA Position                */
#define DMA_DCHPRI_DPA(x)                        (((uint8_t)(((uint8_t)(x))<<DMA_DCHPRI_DPA_SHIFT))&DMA_DCHPRI_DPA_MASK) /*!< DMA_DCHPRI                              */
#define DMA_DCHPRI_ECP_MASK                      (0x80U)                                             /*!< DMA_DCHPRI: ECP Mask                    */
#define DMA_DCHPRI_ECP_SHIFT                     (7U)                                                /*!< DMA_DCHPRI: ECP Position                */
#define DMA_DCHPRI_ECP(x)                        (((uint8_t)(((uint8_t)(x))<<DMA_DCHPRI_ECP_SHIFT))&DMA_DCHPRI_ECP_MASK) /*!< DMA_DCHPRI                              */
/* ------- SADDR Bit Fields                         ------ */
#define DMA_SADDR_SADDR_MASK                     (0xFFFFFFFFU)                                       /*!< DMA_SADDR: SADDR Mask                   */
#define DMA_SADDR_SADDR_SHIFT                    (0U)                                                /*!< DMA_SADDR: SADDR Position               */
#define DMA_SADDR_SADDR(x)                       (((uint32_t)(((uint32_t)(x))<<DMA_SADDR_SADDR_SHIFT))&DMA_SADDR_SADDR_MASK) /*!< DMA_SADDR                               */
/* ------- SOFF Bit Fields                          ------ */
#define DMA_SOFF_SOFF_MASK                       (0xFFFFU)                                           /*!< DMA_SOFF: SOFF Mask                     */
#define DMA_SOFF_SOFF_SHIFT                      (0U)                                                /*!< DMA_SOFF: SOFF Position                 */
#define DMA_SOFF_SOFF(x)                         (((uint16_t)(((uint16_t)(x))<<DMA_SOFF_SOFF_SHIFT))&DMA_SOFF_SOFF_MASK) /*!< DMA_SOFF                                */
/* ------- ATTR Bit Fields                          ------ */
#define DMA_ATTR_DSIZE_MASK                      (0x7U)                                              /*!< DMA_ATTR: DSIZE Mask                    */
#define DMA_ATTR_DSIZE_SHIFT                     (0U)                                                /*!< DMA_ATTR: DSIZE Position                */
#define DMA_ATTR_DSIZE(x)                        (((uint16_t)(((uint16_t)(x))<<DMA_ATTR_DSIZE_SHIFT))&DMA_ATTR_DSIZE_MASK) /*!< DMA_ATTR                                */
#define DMA_ATTR_DMOD_MASK                       (0xF8U)                                             /*!< DMA_ATTR: DMOD Mask                     */
#define DMA_ATTR_DMOD_SHIFT                      (3U)                                                /*!< DMA_ATTR: DMOD Position                 */
#define DMA_ATTR_DMOD(x)                         (((uint16_t)(((uint16_t)(x))<<DMA_ATTR_DMOD_SHIFT))&DMA_ATTR_DMOD_MASK) /*!< DMA_ATTR                                */
#define DMA_ATTR_SSIZE_MASK                      (0x700U)                                            /*!< DMA_ATTR: SSIZE Mask                    */
#define DMA_ATTR_SSIZE_SHIFT                     (8U)                                                /*!< DMA_ATTR: SSIZE Position                */
#define DMA_ATTR_SSIZE(x)                        (((uint16_t)(((uint16_t)(x))<<DMA_ATTR_SSIZE_SHIFT))&DMA_ATTR_SSIZE_MASK) /*!< DMA_ATTR                                */
#define DMA_ATTR_SMOD_MASK                       (0xF800U)                                           /*!< DMA_ATTR: SMOD Mask                     */
#define DMA_ATTR_SMOD_SHIFT                      (11U)                                               /*!< DMA_ATTR: SMOD Position                 */
#define DMA_ATTR_SMOD(x)                         (((uint16_t)(((uint16_t)(x))<<DMA_ATTR_SMOD_SHIFT))&DMA_ATTR_SMOD_MASK) /*!< DMA_ATTR                                */
/* ------- NBYTES_MLNO Bit Fields                   ------ */
#define DMA_NBYTES_MLNO_NBYTES_MASK              (0xFFFFFFFFU)                                       /*!< DMA_NBYTES_MLNO: NBYTES Mask            */
#define DMA_NBYTES_MLNO_NBYTES_SHIFT             (0U)                                                /*!< DMA_NBYTES_MLNO: NBYTES Position        */
#define DMA_NBYTES_MLNO_NBYTES(x)                (((uint32_t)(((uint32_t)(x))<<DMA_NBYTES_MLNO_NBYTES_SHIFT))&DMA_NBYTES_MLNO_NBYTES_MASK) /*!< DMA_NBYTES_MLNO                         */
/* ------- NBYTES_MLOFFNO Bit Fields                ------ */
#define DMA_NBYTES_MLOFFNO_NBYTES_MASK           (0x3FFFFFFFU)                                       /*!< DMA_NBYTES_MLOFFNO: NBYTES Mask         */
#define DMA_NBYTES_MLOFFNO_NBYTES_SHIFT          (0U)                                                /*!< DMA_NBYTES_MLOFFNO: NBYTES Position     */
#define DMA_NBYTES_MLOFFNO_NBYTES(x)             (((uint32_t)(((uint32_t)(x))<<DMA_NBYTES_MLOFFNO_NBYTES_SHIFT))&DMA_NBYTES_MLOFFNO_NBYTES_MASK) /*!< DMA_NBYTES_MLOFFNO                      */
#define DMA_NBYTES_MLOFFNO_DMLOE_MASK            (0x40000000U)                                       /*!< DMA_NBYTES_MLOFFNO: DMLOE Mask          */
#define DMA_NBYTES_MLOFFNO_DMLOE_SHIFT           (30U)                                               /*!< DMA_NBYTES_MLOFFNO: DMLOE Position      */
#define DMA_NBYTES_MLOFFNO_DMLOE(x)              (((uint32_t)(((uint32_t)(x))<<DMA_NBYTES_MLOFFNO_DMLOE_SHIFT))&DMA_NBYTES_MLOFFNO_DMLOE_MASK) /*!< DMA_NBYTES_MLOFFNO                      */
#define DMA_NBYTES_MLOFFNO_SMLOE_MASK            (0x80000000U)                                       /*!< DMA_NBYTES_MLOFFNO: SMLOE Mask          */
#define DMA_NBYTES_MLOFFNO_SMLOE_SHIFT           (31U)                                               /*!< DMA_NBYTES_MLOFFNO: SMLOE Position      */
#define DMA_NBYTES_MLOFFNO_SMLOE(x)              (((uint32_t)(((uint32_t)(x))<<DMA_NBYTES_MLOFFNO_SMLOE_SHIFT))&DMA_NBYTES_MLOFFNO_SMLOE_MASK) /*!< DMA_NBYTES_MLOFFNO                      */
/* ------- NBYTES_MLOFFYES Bit Fields               ------ */
#define DMA_NBYTES_MLOFFYES_NBYTES_MASK          (0x3FFU)                                            /*!< DMA_NBYTES_MLOFFYES: NBYTES Mask        */
#define DMA_NBYTES_MLOFFYES_NBYTES_SHIFT         (0U)                                                /*!< DMA_NBYTES_MLOFFYES: NBYTES Position    */
#define DMA_NBYTES_MLOFFYES_NBYTES(x)            (((uint32_t)(((uint32_t)(x))<<DMA_NBYTES_MLOFFYES_NBYTES_SHIFT))&DMA_NBYTES_MLOFFYES_NBYTES_MASK) /*!< DMA_NBYTES_MLOFFYES                     */
#define DMA_NBYTES_MLOFFYES_MLOFF_MASK           (0x3FFFFC00U)                                       /*!< DMA_NBYTES_MLOFFYES: MLOFF Mask         */
#define DMA_NBYTES_MLOFFYES_MLOFF_SHIFT          (10U)                                               /*!< DMA_NBYTES_MLOFFYES: MLOFF Position     */
#define DMA_NBYTES_MLOFFYES_MLOFF(x)             (((uint32_t)(((uint32_t)(x))<<DMA_NBYTES_MLOFFYES_MLOFF_SHIFT))&DMA_NBYTES_MLOFFYES_MLOFF_MASK) /*!< DMA_NBYTES_MLOFFYES                     */
#define DMA_NBYTES_MLOFFYES_DMLOE_MASK           (0x40000000U)                                       /*!< DMA_NBYTES_MLOFFYES: DMLOE Mask         */
#define DMA_NBYTES_MLOFFYES_DMLOE_SHIFT          (30U)                                               /*!< DMA_NBYTES_MLOFFYES: DMLOE Position     */
#define DMA_NBYTES_MLOFFYES_DMLOE(x)             (((uint32_t)(((uint32_t)(x))<<DMA_NBYTES_MLOFFYES_DMLOE_SHIFT))&DMA_NBYTES_MLOFFYES_DMLOE_MASK) /*!< DMA_NBYTES_MLOFFYES                     */
#define DMA_NBYTES_MLOFFYES_SMLOE_MASK           (0x80000000U)                                       /*!< DMA_NBYTES_MLOFFYES: SMLOE Mask         */
#define DMA_NBYTES_MLOFFYES_SMLOE_SHIFT          (31U)                                               /*!< DMA_NBYTES_MLOFFYES: SMLOE Position     */
#define DMA_NBYTES_MLOFFYES_SMLOE(x)             (((uint32_t)(((uint32_t)(x))<<DMA_NBYTES_MLOFFYES_SMLOE_SHIFT))&DMA_NBYTES_MLOFFYES_SMLOE_MASK) /*!< DMA_NBYTES_MLOFFYES                     */
/* ------- SLAST Bit Fields                         ------ */
#define DMA_SLAST_SLAST_MASK                     (0xFFFFFFFFU)                                       /*!< DMA_SLAST: SLAST Mask                   */
#define DMA_SLAST_SLAST_SHIFT                    (0U)                                                /*!< DMA_SLAST: SLAST Position               */
#define DMA_SLAST_SLAST(x)                       (((uint32_t)(((uint32_t)(x))<<DMA_SLAST_SLAST_SHIFT))&DMA_SLAST_SLAST_MASK) /*!< DMA_SLAST                               */
/* ------- DADDR Bit Fields                         ------ */
#define DMA_DADDR_DADDR_MASK                     (0xFFFFFFFFU)                                       /*!< DMA_DADDR: DADDR Mask                   */
#define DMA_DADDR_DADDR_SHIFT                    (0U)                                                /*!< DMA_DADDR: DADDR Position               */
#define DMA_DADDR_DADDR(x)                       (((uint32_t)(((uint32_t)(x))<<DMA_DADDR_DADDR_SHIFT))&DMA_DADDR_DADDR_MASK) /*!< DMA_DADDR                               */
/* ------- DOFF Bit Fields                          ------ */
#define DMA_DOFF_DOFF_MASK                       (0xFFFFU)                                           /*!< DMA_DOFF: DOFF Mask                     */
#define DMA_DOFF_DOFF_SHIFT                      (0U)                                                /*!< DMA_DOFF: DOFF Position                 */
#define DMA_DOFF_DOFF(x)                         (((uint16_t)(((uint16_t)(x))<<DMA_DOFF_DOFF_SHIFT))&DMA_DOFF_DOFF_MASK) /*!< DMA_DOFF                                */
/* ------- CITER_ELINKNO Bit Fields                 ------ */
#define DMA_CITER_ELINKNO_CITER_MASK             (0x7FFFU)                                           /*!< DMA_CITER_ELINKNO: CITER Mask           */
#define DMA_CITER_ELINKNO_CITER_SHIFT            (0U)                                                /*!< DMA_CITER_ELINKNO: CITER Position       */
#define DMA_CITER_ELINKNO_CITER(x)               (((uint16_t)(((uint16_t)(x))<<DMA_CITER_ELINKNO_CITER_SHIFT))&DMA_CITER_ELINKNO_CITER_MASK) /*!< DMA_CITER_ELINKNO                       */
#define DMA_CITER_ELINKNO_ELINK_MASK             (0x8000U)                                           /*!< DMA_CITER_ELINKNO: ELINK Mask           */
#define DMA_CITER_ELINKNO_ELINK_SHIFT            (15U)                                               /*!< DMA_CITER_ELINKNO: ELINK Position       */
#define DMA_CITER_ELINKNO_ELINK(x)               (((uint16_t)(((uint16_t)(x))<<DMA_CITER_ELINKNO_ELINK_SHIFT))&DMA_CITER_ELINKNO_ELINK_MASK) /*!< DMA_CITER_ELINKNO                       */
/* ------- CITER_ELINKYES Bit Fields                ------ */
#define DMA_CITER_ELINKYES_CITER_MASK            (0x1FFU)                                            /*!< DMA_CITER_ELINKYES: CITER Mask          */
#define DMA_CITER_ELINKYES_CITER_SHIFT           (0U)                                                /*!< DMA_CITER_ELINKYES: CITER Position      */
#define DMA_CITER_ELINKYES_CITER(x)              (((uint16_t)(((uint16_t)(x))<<DMA_CITER_ELINKYES_CITER_SHIFT))&DMA_CITER_ELINKYES_CITER_MASK) /*!< DMA_CITER_ELINKYES                      */
#define DMA_CITER_ELINKYES_LINKCH_MASK           (0xE00U)                                            /*!< DMA_CITER_ELINKYES: LINKCH Mask         */
#define DMA_CITER_ELINKYES_LINKCH_SHIFT          (9U)                                                /*!< DMA_CITER_ELINKYES: LINKCH Position     */
#define DMA_CITER_ELINKYES_LINKCH(x)             (((uint16_t)(((uint16_t)(x))<<DMA_CITER_ELINKYES_LINKCH_SHIFT))&DMA_CITER_ELINKYES_LINKCH_MASK) /*!< DMA_CITER_ELINKYES                      */
#define DMA_CITER_ELINKYES_ELINK_MASK            (0x8000U)                                           /*!< DMA_CITER_ELINKYES: ELINK Mask          */
#define DMA_CITER_ELINKYES_ELINK_SHIFT           (15U)                                               /*!< DMA_CITER_ELINKYES: ELINK Position      */
#define DMA_CITER_ELINKYES_ELINK(x)              (((uint16_t)(((uint16_t)(x))<<DMA_CITER_ELINKYES_ELINK_SHIFT))&DMA_CITER_ELINKYES_ELINK_MASK) /*!< DMA_CITER_ELINKYES                      */
/* ------- DLASTSGA Bit Fields                      ------ */
#define DMA_DLASTSGA_DLASTSGA_MASK               (0xFFFFFFFFU)                                       /*!< DMA_DLASTSGA: DLASTSGA Mask             */
#define DMA_DLASTSGA_DLASTSGA_SHIFT              (0U)                                                /*!< DMA_DLASTSGA: DLASTSGA Position         */
#define DMA_DLASTSGA_DLASTSGA(x)                 (((uint32_t)(((uint32_t)(x))<<DMA_DLASTSGA_DLASTSGA_SHIFT))&DMA_DLASTSGA_DLASTSGA_MASK) /*!< DMA_DLASTSGA                            */
/* ------- CSR Bit Fields                           ------ */
#define DMA_CSR_START_MASK                       (0x1U)                                              /*!< DMA_CSR: START Mask                     */
#define DMA_CSR_START_SHIFT                      (0U)                                                /*!< DMA_CSR: START Position                 */
#define DMA_CSR_START(x)                         (((uint16_t)(((uint16_t)(x))<<DMA_CSR_START_SHIFT))&DMA_CSR_START_MASK) /*!< DMA_CSR                                 */
#define DMA_CSR_INTMAJOR_MASK                    (0x2U)                                              /*!< DMA_CSR: INTMAJOR Mask                  */
#define DMA_CSR_INTMAJOR_SHIFT                   (1U)                                                /*!< DMA_CSR: INTMAJOR Position              */
#define DMA_CSR_INTMAJOR(x)                      (((uint16_t)(((uint16_t)(x))<<DMA_CSR_INTMAJOR_SHIFT))&DMA_CSR_INTMAJOR_MASK) /*!< DMA_CSR                                 */
#define DMA_CSR_INTHALF_MASK                     (0x4U)                                              /*!< DMA_CSR: INTHALF Mask                   */
#define DMA_CSR_INTHALF_SHIFT                    (2U)                                                /*!< DMA_CSR: INTHALF Position               */
#define DMA_CSR_INTHALF(x)                       (((uint16_t)(((uint16_t)(x))<<DMA_CSR_INTHALF_SHIFT))&DMA_CSR_INTHALF_MASK) /*!< DMA_CSR                                 */
#define DMA_CSR_DREQ_MASK                        (0x8U)                                              /*!< DMA_CSR: DREQ Mask                      */
#define DMA_CSR_DREQ_SHIFT                       (3U)                                                /*!< DMA_CSR: DREQ Position                  */
#define DMA_CSR_DREQ(x)                          (((uint16_t)(((uint16_t)(x))<<DMA_CSR_DREQ_SHIFT))&DMA_CSR_DREQ_MASK) /*!< DMA_CSR                                 */
#define DMA_CSR_ESG_MASK                         (0x10U)                                             /*!< DMA_CSR: ESG Mask                       */
#define DMA_CSR_ESG_SHIFT                        (4U)                                                /*!< DMA_CSR: ESG Position                   */
#define DMA_CSR_ESG(x)                           (((uint16_t)(((uint16_t)(x))<<DMA_CSR_ESG_SHIFT))&DMA_CSR_ESG_MASK) /*!< DMA_CSR                                 */
#define DMA_CSR_MAJORELINK_MASK                  (0x20U)                                             /*!< DMA_CSR: MAJORELINK Mask                */
#define DMA_CSR_MAJORELINK_SHIFT                 (5U)                                                /*!< DMA_CSR: MAJORELINK Position            */
#define DMA_CSR_MAJORELINK(x)                    (((uint16_t)(((uint16_t)(x))<<DMA_CSR_MAJORELINK_SHIFT))&DMA_CSR_MAJORELINK_MASK) /*!< DMA_CSR                                 */
#define DMA_CSR_ACTIVE_MASK                      (0x40U)                                             /*!< DMA_CSR: ACTIVE Mask                    */
#define DMA_CSR_ACTIVE_SHIFT                     (6U)                                                /*!< DMA_CSR: ACTIVE Position                */
#define DMA_CSR_ACTIVE(x)                        (((uint16_t)(((uint16_t)(x))<<DMA_CSR_ACTIVE_SHIFT))&DMA_CSR_ACTIVE_MASK) /*!< DMA_CSR                                 */
#define DMA_CSR_DONE_MASK                        (0x80U)                                             /*!< DMA_CSR: DONE Mask                      */
#define DMA_CSR_DONE_SHIFT                       (7U)                                                /*!< DMA_CSR: DONE Position                  */
#define DMA_CSR_DONE(x)                          (((uint16_t)(((uint16_t)(x))<<DMA_CSR_DONE_SHIFT))&DMA_CSR_DONE_MASK) /*!< DMA_CSR                                 */
#define DMA_CSR_MAJORLINKCH_MASK                 (0x700U)                                            /*!< DMA_CSR: MAJORLINKCH Mask               */
#define DMA_CSR_MAJORLINKCH_SHIFT                (8U)                                                /*!< DMA_CSR: MAJORLINKCH Position           */
#define DMA_CSR_MAJORLINKCH(x)                   (((uint16_t)(((uint16_t)(x))<<DMA_CSR_MAJORLINKCH_SHIFT))&DMA_CSR_MAJORLINKCH_MASK) /*!< DMA_CSR                                 */
#define DMA_CSR_BWC_MASK                         (0xC000U)                                           /*!< DMA_CSR: BWC Mask                       */
#define DMA_CSR_BWC_SHIFT                        (14U)                                               /*!< DMA_CSR: BWC Position                   */
#define DMA_CSR_BWC(x)                           (((uint16_t)(((uint16_t)(x))<<DMA_CSR_BWC_SHIFT))&DMA_CSR_BWC_MASK) /*!< DMA_CSR                                 */
/* ------- BITER_ELINKNO Bit Fields                 ------ */
#define DMA_BITER_ELINKNO_BITER_MASK             (0x7FFFU)                                           /*!< DMA_BITER_ELINKNO: BITER Mask           */
#define DMA_BITER_ELINKNO_BITER_SHIFT            (0U)                                                /*!< DMA_BITER_ELINKNO: BITER Position       */
#define DMA_BITER_ELINKNO_BITER(x)               (((uint16_t)(((uint16_t)(x))<<DMA_BITER_ELINKNO_BITER_SHIFT))&DMA_BITER_ELINKNO_BITER_MASK) /*!< DMA_BITER_ELINKNO                       */
#define DMA_BITER_ELINKNO_ELINK_MASK             (0x8000U)                                           /*!< DMA_BITER_ELINKNO: ELINK Mask           */
#define DMA_BITER_ELINKNO_ELINK_SHIFT            (15U)                                               /*!< DMA_BITER_ELINKNO: ELINK Position       */
#define DMA_BITER_ELINKNO_ELINK(x)               (((uint16_t)(((uint16_t)(x))<<DMA_BITER_ELINKNO_ELINK_SHIFT))&DMA_BITER_ELINKNO_ELINK_MASK) /*!< DMA_BITER_ELINKNO                       */
/* ------- BITER_ELINKYES Bit Fields                ------ */
#define DMA_BITER_ELINKYES_BITER_MASK            (0x1FFU)                                            /*!< DMA_BITER_ELINKYES: BITER Mask          */
#define DMA_BITER_ELINKYES_BITER_SHIFT           (0U)                                                /*!< DMA_BITER_ELINKYES: BITER Position      */
#define DMA_BITER_ELINKYES_BITER(x)              (((uint16_t)(((uint16_t)(x))<<DMA_BITER_ELINKYES_BITER_SHIFT))&DMA_BITER_ELINKYES_BITER_MASK) /*!< DMA_BITER_ELINKYES                      */
#define DMA_BITER_ELINKYES_LINKCH_MASK           (0xE00U)                                            /*!< DMA_BITER_ELINKYES: LINKCH Mask         */
#define DMA_BITER_ELINKYES_LINKCH_SHIFT          (9U)                                                /*!< DMA_BITER_ELINKYES: LINKCH Position     */
#define DMA_BITER_ELINKYES_LINKCH(x)             (((uint16_t)(((uint16_t)(x))<<DMA_BITER_ELINKYES_LINKCH_SHIFT))&DMA_BITER_ELINKYES_LINKCH_MASK) /*!< DMA_BITER_ELINKYES                      */
#define DMA_BITER_ELINKYES_ELINK_MASK            (0x8000U)                                           /*!< DMA_BITER_ELINKYES: ELINK Mask          */
#define DMA_BITER_ELINKYES_ELINK_SHIFT           (15U)                                               /*!< DMA_BITER_ELINKYES: ELINK Position      */
#define DMA_BITER_ELINKYES_ELINK(x)              (((uint16_t)(((uint16_t)(x))<<DMA_BITER_ELINKYES_ELINK_SHIFT))&DMA_BITER_ELINKYES_ELINK_MASK) /*!< DMA_BITER_ELINKYES                      */
/**
 * @} */ /* End group DMA_Register_Masks_GROUP 
 */

/* DMA - Peripheral instance base addresses */
#define DMA_BasePtr                    0x40008000UL //!< Peripheral base address
#define DMA                            ((DMA_Type *) DMA_BasePtr) //!< Freescale base pointer
#define DMA_BASE_PTR                   (DMA) //!< Freescale style base pointer
/**
 * @} */ /* End group DMA_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup DMAMUX_Peripheral_access_layer_GROUP DMAMUX Peripheral Access Layer
* @brief C Struct for DMAMUX
* @{
*/

/* ================================================================================ */
/* ================           DMAMUX (file:DMAMUX_MKE15Z7)         ================ */
/* ================================================================================ */

/**
 * @brief DMA channel multiplexor
 */
/**
* @addtogroup DMAMUX_structs_GROUP DMAMUX struct
* @brief Struct for DMAMUX
* @{
*/
typedef struct {                                /*       DMAMUX Structure                                             */
   __IO uint8_t   CHCFG[8];                     /**< 0000: Channel Configuration register                               */
} DMAMUX_Type;

/**
 * @} */ /* End group DMAMUX_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'DMAMUX' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup DMAMUX_Register_Masks_GROUP DMAMUX Register Masks
* @brief Register Masks for DMAMUX
* @{
*/
/* ------- CHCFG Bit Fields                         ------ */
#define DMAMUX_CHCFG_SOURCE_MASK                 (0x3FU)                                             /*!< DMAMUX_CHCFG: SOURCE Mask               */
#define DMAMUX_CHCFG_SOURCE_SHIFT                (0U)                                                /*!< DMAMUX_CHCFG: SOURCE Position           */
#define DMAMUX_CHCFG_SOURCE(x)                   (((uint8_t)(((uint8_t)(x))<<DMAMUX_CHCFG_SOURCE_SHIFT))&DMAMUX_CHCFG_SOURCE_MASK) /*!< DMAMUX_CHCFG                            */
#define DMAMUX_CHCFG_TRIG_MASK                   (0x40U)                                             /*!< DMAMUX_CHCFG: TRIG Mask                 */
#define DMAMUX_CHCFG_TRIG_SHIFT                  (6U)                                                /*!< DMAMUX_CHCFG: TRIG Position             */
#define DMAMUX_CHCFG_TRIG(x)                     (((uint8_t)(((uint8_t)(x))<<DMAMUX_CHCFG_TRIG_SHIFT))&DMAMUX_CHCFG_TRIG_MASK) /*!< DMAMUX_CHCFG                            */
#define DMAMUX_CHCFG_ENBL_MASK                   (0x80U)                                             /*!< DMAMUX_CHCFG: ENBL Mask                 */
#define DMAMUX_CHCFG_ENBL_SHIFT                  (7U)                                                /*!< DMAMUX_CHCFG: ENBL Position             */
#define DMAMUX_CHCFG_ENBL(x)                     (((uint8_t)(((uint8_t)(x))<<DMAMUX_CHCFG_ENBL_SHIFT))&DMAMUX_CHCFG_ENBL_MASK) /*!< DMAMUX_CHCFG                            */
/**
 * @} */ /* End group DMAMUX_Register_Masks_GROUP 
 */

/* DMAMUX - Peripheral instance base addresses */
#define DMAMUX_BasePtr                 0x40021000UL //!< Peripheral base address
#define DMAMUX                         ((DMAMUX_Type *) DMAMUX_BasePtr) //!< Freescale base pointer
#define DMAMUX_BASE_PTR                (DMAMUX) //!< Freescale style base pointer
/**
 * @} */ /* End group DMAMUX_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup EWM_Peripheral_access_layer_GROUP EWM Peripheral Access Layer
* @brief C Struct for EWM
* @{
*/

/* ================================================================================ */
/* ================           EWM (file:EWM_MKE16F16)              ================ */
/* ================================================================================ */

/**
 * @brief External Watchdog Monitor
 */
/**
* @addtogroup EWM_structs_GROUP EWM struct
* @brief Struct for EWM
* @{
*/
typedef struct {                                /*       EWM Structure                                                */
   __IO uint8_t   CTRL;                         /**< 0000: Control Register                                             */
   __O  uint8_t   SERV;                         /**< 0001: Service Register                                             */
   __IO uint8_t   CMPL;                         /**< 0002: Compare Low Register                                         */
   __IO uint8_t   CMPH;                         /**< 0003: Compare High Register                                        */
        uint8_t   RESERVED_0;                  
   __IO uint8_t   CLKPRESCALER;                 /**< 0005: Clock Prescaler Register                                     */
} EWM_Type;

/**
 * @} */ /* End group EWM_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'EWM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup EWM_Register_Masks_GROUP EWM Register Masks
* @brief Register Masks for EWM
* @{
*/
/* ------- CTRL Bit Fields                          ------ */
#define EWM_CTRL_EWMEN_MASK                      (0x1U)                                              /*!< EWM_CTRL: EWMEN Mask                    */
#define EWM_CTRL_EWMEN_SHIFT                     (0U)                                                /*!< EWM_CTRL: EWMEN Position                */
#define EWM_CTRL_EWMEN(x)                        (((uint8_t)(((uint8_t)(x))<<EWM_CTRL_EWMEN_SHIFT))&EWM_CTRL_EWMEN_MASK) /*!< EWM_CTRL                                */
#define EWM_CTRL_ASSIN_MASK                      (0x2U)                                              /*!< EWM_CTRL: ASSIN Mask                    */
#define EWM_CTRL_ASSIN_SHIFT                     (1U)                                                /*!< EWM_CTRL: ASSIN Position                */
#define EWM_CTRL_ASSIN(x)                        (((uint8_t)(((uint8_t)(x))<<EWM_CTRL_ASSIN_SHIFT))&EWM_CTRL_ASSIN_MASK) /*!< EWM_CTRL                                */
#define EWM_CTRL_INEN_MASK                       (0x4U)                                              /*!< EWM_CTRL: INEN Mask                     */
#define EWM_CTRL_INEN_SHIFT                      (2U)                                                /*!< EWM_CTRL: INEN Position                 */
#define EWM_CTRL_INEN(x)                         (((uint8_t)(((uint8_t)(x))<<EWM_CTRL_INEN_SHIFT))&EWM_CTRL_INEN_MASK) /*!< EWM_CTRL                                */
#define EWM_CTRL_INTEN_MASK                      (0x8U)                                              /*!< EWM_CTRL: INTEN Mask                    */
#define EWM_CTRL_INTEN_SHIFT                     (3U)                                                /*!< EWM_CTRL: INTEN Position                */
#define EWM_CTRL_INTEN(x)                        (((uint8_t)(((uint8_t)(x))<<EWM_CTRL_INTEN_SHIFT))&EWM_CTRL_INTEN_MASK) /*!< EWM_CTRL                                */
/* ------- SERV Bit Fields                          ------ */
#define EWM_SERV_SERVICE_MASK                    (0xFFU)                                             /*!< EWM_SERV: SERVICE Mask                  */
#define EWM_SERV_SERVICE_SHIFT                   (0U)                                                /*!< EWM_SERV: SERVICE Position              */
#define EWM_SERV_SERVICE(x)                      (((uint8_t)(((uint8_t)(x))<<EWM_SERV_SERVICE_SHIFT))&EWM_SERV_SERVICE_MASK) /*!< EWM_SERV                                */
/* ------- CMPL Bit Fields                          ------ */
#define EWM_CMPL_COMPAREL_MASK                   (0xFFU)                                             /*!< EWM_CMPL: COMPAREL Mask                 */
#define EWM_CMPL_COMPAREL_SHIFT                  (0U)                                                /*!< EWM_CMPL: COMPAREL Position             */
#define EWM_CMPL_COMPAREL(x)                     (((uint8_t)(((uint8_t)(x))<<EWM_CMPL_COMPAREL_SHIFT))&EWM_CMPL_COMPAREL_MASK) /*!< EWM_CMPL                                */
/* ------- CMPH Bit Fields                          ------ */
#define EWM_CMPH_COMPAREH_MASK                   (0xFFU)                                             /*!< EWM_CMPH: COMPAREH Mask                 */
#define EWM_CMPH_COMPAREH_SHIFT                  (0U)                                                /*!< EWM_CMPH: COMPAREH Position             */
#define EWM_CMPH_COMPAREH(x)                     (((uint8_t)(((uint8_t)(x))<<EWM_CMPH_COMPAREH_SHIFT))&EWM_CMPH_COMPAREH_MASK) /*!< EWM_CMPH                                */
/* ------- CLKPRESCALER Bit Fields                  ------ */
#define EWM_CLKPRESCALER_CLK_DIV_MASK            (0xFFU)                                             /*!< EWM_CLKPRESCALER: CLK_DIV Mask          */
#define EWM_CLKPRESCALER_CLK_DIV_SHIFT           (0U)                                                /*!< EWM_CLKPRESCALER: CLK_DIV Position      */
#define EWM_CLKPRESCALER_CLK_DIV(x)              (((uint8_t)(((uint8_t)(x))<<EWM_CLKPRESCALER_CLK_DIV_SHIFT))&EWM_CLKPRESCALER_CLK_DIV_MASK) /*!< EWM_CLKPRESCALER                        */
/**
 * @} */ /* End group EWM_Register_Masks_GROUP 
 */

/* EWM - Peripheral instance base addresses */
#define EWM_BasePtr                    0x40061000UL //!< Peripheral base address
#define EWM                            ((EWM_Type *) EWM_BasePtr) //!< Freescale base pointer
#define EWM_BASE_PTR                   (EWM) //!< Freescale style base pointer
/**
 * @} */ /* End group EWM_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup FLEXIO_Peripheral_access_layer_GROUP FLEXIO Peripheral Access Layer
* @brief C Struct for FLEXIO
* @{
*/

/* ================================================================================ */
/* ================           FLEXIO (file:FLEXIO_MKE15Z7)         ================ */
/* ================================================================================ */

/**
 * @brief Flexible I/O - universal I/O module for communication (UART, SPI, I2C, I2S) and PWM purposes
 */
/**
* @addtogroup FLEXIO_structs_GROUP FLEXIO struct
* @brief Struct for FLEXIO
* @{
*/
typedef struct {                                /*       FLEXIO Structure                                             */
   __I  uint32_t  VERID;                        /**< 0000: Version ID Register                                          */
   __I  uint32_t  PARAM;                        /**< 0004: Parameter Register                                           */
   __IO uint32_t  CTRL;                         /**< 0008: FlexIO Control Register                                      */
   __I  uint32_t  PIN;                          /**< 000C: Pin State Register                                           */
   __IO uint32_t  SHIFTSTAT;                    /**< 0010: Shifter Status Register                                      */
   __IO uint32_t  SHIFTERR;                     /**< 0014: Shifter Error Register                                       */
   __IO uint32_t  TIMSTAT;                      /**< 0018: Timer Status Register                                        */
        uint8_t   RESERVED_0[4];               
   __IO uint32_t  SHIFTSIEN;                    /**< 0020: Shifter Status Interrupt Enable                              */
   __IO uint32_t  SHIFTEIEN;                    /**< 0024: Shifter Error Interrupt Enable                               */
   __IO uint32_t  TIMIEN;                       /**< 0028: Timer Interrupt Enable Register                              */
        uint8_t   RESERVED_1[4];               
   __IO uint32_t  SHIFTSDEN;                    /**< 0030: Shifter Status DMA Enable                                    */
        uint8_t   RESERVED_2[76];              
   __IO uint32_t  SHIFTCTL[4];                  /**< 0080: Shifter Control N Register                                   */
        uint8_t   RESERVED_3[112];             
   __IO uint32_t  SHIFTCFG[4];                  /**< 0100: Shifter Configuration N Register                             */
        uint8_t   RESERVED_4[240];             
   __IO uint32_t  SHIFTBUF[4];                  /**< 0200: Shifter Buffer N Register                                    */
        uint8_t   RESERVED_5[112];             
   __IO uint32_t  SHIFTBUFBIS[4];               /**< 0280: Shifter Buffer N Bit Swapped Register                        */
        uint8_t   RESERVED_6[112];             
   __IO uint32_t  SHIFTBUFBYS[4];               /**< 0300: Shifter Buffer N Byte Swapped Register                       */
        uint8_t   RESERVED_7[112];             
   __IO uint32_t  SHIFTBUFBBS[4];               /**< 0380: Shifter Buffer N Bit Byte Swapped Register                   */
        uint8_t   RESERVED_8[112];             
   __IO uint32_t  TIMCTL[4];                    /**< 0400: Timer Control N Register                                     */
        uint8_t   RESERVED_9[112];             
   __IO uint32_t  TIMCFG[4];                    /**< 0480: Timer Configuration N Register                               */
        uint8_t   RESERVED_10[112];            
   __IO uint32_t  TIMCMP[4];                    /**< 0500: Timer Compare N Register                                     */
} FLEXIO_Type;

/**
 * @} */ /* End group FLEXIO_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'FLEXIO' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup FLEXIO_Register_Masks_GROUP FLEXIO Register Masks
* @brief Register Masks for FLEXIO
* @{
*/
/* ------- VERID Bit Fields                         ------ */
#define FLEXIO_VERID_FEATURE_MASK                (0xFFFFU)                                           /*!< FLEXIO_VERID: FEATURE Mask              */
#define FLEXIO_VERID_FEATURE_SHIFT               (0U)                                                /*!< FLEXIO_VERID: FEATURE Position          */
#define FLEXIO_VERID_FEATURE(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_VERID_FEATURE_SHIFT))&FLEXIO_VERID_FEATURE_MASK) /*!< FLEXIO_VERID                            */
#define FLEXIO_VERID_MINOR_MASK                  (0xFF0000U)                                         /*!< FLEXIO_VERID: MINOR Mask                */
#define FLEXIO_VERID_MINOR_SHIFT                 (16U)                                               /*!< FLEXIO_VERID: MINOR Position            */
#define FLEXIO_VERID_MINOR(x)                    (((uint32_t)(((uint32_t)(x))<<FLEXIO_VERID_MINOR_SHIFT))&FLEXIO_VERID_MINOR_MASK) /*!< FLEXIO_VERID                            */
#define FLEXIO_VERID_MAJOR_MASK                  (0xFF000000U)                                       /*!< FLEXIO_VERID: MAJOR Mask                */
#define FLEXIO_VERID_MAJOR_SHIFT                 (24U)                                               /*!< FLEXIO_VERID: MAJOR Position            */
#define FLEXIO_VERID_MAJOR(x)                    (((uint32_t)(((uint32_t)(x))<<FLEXIO_VERID_MAJOR_SHIFT))&FLEXIO_VERID_MAJOR_MASK) /*!< FLEXIO_VERID                            */
/* ------- PARAM Bit Fields                         ------ */
#define FLEXIO_PARAM_SHIFTER_MASK                (0xFFU)                                             /*!< FLEXIO_PARAM: SHIFTER Mask              */
#define FLEXIO_PARAM_SHIFTER_SHIFT               (0U)                                                /*!< FLEXIO_PARAM: SHIFTER Position          */
#define FLEXIO_PARAM_SHIFTER(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_PARAM_SHIFTER_SHIFT))&FLEXIO_PARAM_SHIFTER_MASK) /*!< FLEXIO_PARAM                            */
#define FLEXIO_PARAM_TIMER_MASK                  (0xFF00U)                                           /*!< FLEXIO_PARAM: TIMER Mask                */
#define FLEXIO_PARAM_TIMER_SHIFT                 (8U)                                                /*!< FLEXIO_PARAM: TIMER Position            */
#define FLEXIO_PARAM_TIMER(x)                    (((uint32_t)(((uint32_t)(x))<<FLEXIO_PARAM_TIMER_SHIFT))&FLEXIO_PARAM_TIMER_MASK) /*!< FLEXIO_PARAM                            */
#define FLEXIO_PARAM_PIN_MASK                    (0xFF0000U)                                         /*!< FLEXIO_PARAM: PIN Mask                  */
#define FLEXIO_PARAM_PIN_SHIFT                   (16U)                                               /*!< FLEXIO_PARAM: PIN Position              */
#define FLEXIO_PARAM_PIN(x)                      (((uint32_t)(((uint32_t)(x))<<FLEXIO_PARAM_PIN_SHIFT))&FLEXIO_PARAM_PIN_MASK) /*!< FLEXIO_PARAM                            */
#define FLEXIO_PARAM_TRIGGER_MASK                (0xFF000000U)                                       /*!< FLEXIO_PARAM: TRIGGER Mask              */
#define FLEXIO_PARAM_TRIGGER_SHIFT               (24U)                                               /*!< FLEXIO_PARAM: TRIGGER Position          */
#define FLEXIO_PARAM_TRIGGER(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_PARAM_TRIGGER_SHIFT))&FLEXIO_PARAM_TRIGGER_MASK) /*!< FLEXIO_PARAM                            */
/* ------- CTRL Bit Fields                          ------ */
#define FLEXIO_CTRL_FLEXEN_MASK                  (0x1U)                                              /*!< FLEXIO_CTRL: FLEXEN Mask                */
#define FLEXIO_CTRL_FLEXEN_SHIFT                 (0U)                                                /*!< FLEXIO_CTRL: FLEXEN Position            */
#define FLEXIO_CTRL_FLEXEN(x)                    (((uint32_t)(((uint32_t)(x))<<FLEXIO_CTRL_FLEXEN_SHIFT))&FLEXIO_CTRL_FLEXEN_MASK) /*!< FLEXIO_CTRL                             */
#define FLEXIO_CTRL_SWRST_MASK                   (0x2U)                                              /*!< FLEXIO_CTRL: SWRST Mask                 */
#define FLEXIO_CTRL_SWRST_SHIFT                  (1U)                                                /*!< FLEXIO_CTRL: SWRST Position             */
#define FLEXIO_CTRL_SWRST(x)                     (((uint32_t)(((uint32_t)(x))<<FLEXIO_CTRL_SWRST_SHIFT))&FLEXIO_CTRL_SWRST_MASK) /*!< FLEXIO_CTRL                             */
#define FLEXIO_CTRL_FASTACC_MASK                 (0x4U)                                              /*!< FLEXIO_CTRL: FASTACC Mask               */
#define FLEXIO_CTRL_FASTACC_SHIFT                (2U)                                                /*!< FLEXIO_CTRL: FASTACC Position           */
#define FLEXIO_CTRL_FASTACC(x)                   (((uint32_t)(((uint32_t)(x))<<FLEXIO_CTRL_FASTACC_SHIFT))&FLEXIO_CTRL_FASTACC_MASK) /*!< FLEXIO_CTRL                             */
#define FLEXIO_CTRL_DBGE_MASK                    (0x40000000U)                                       /*!< FLEXIO_CTRL: DBGE Mask                  */
#define FLEXIO_CTRL_DBGE_SHIFT                   (30U)                                               /*!< FLEXIO_CTRL: DBGE Position              */
#define FLEXIO_CTRL_DBGE(x)                      (((uint32_t)(((uint32_t)(x))<<FLEXIO_CTRL_DBGE_SHIFT))&FLEXIO_CTRL_DBGE_MASK) /*!< FLEXIO_CTRL                             */
#define FLEXIO_CTRL_DOZEN_MASK                   (0x80000000U)                                       /*!< FLEXIO_CTRL: DOZEN Mask                 */
#define FLEXIO_CTRL_DOZEN_SHIFT                  (31U)                                               /*!< FLEXIO_CTRL: DOZEN Position             */
#define FLEXIO_CTRL_DOZEN(x)                     (((uint32_t)(((uint32_t)(x))<<FLEXIO_CTRL_DOZEN_SHIFT))&FLEXIO_CTRL_DOZEN_MASK) /*!< FLEXIO_CTRL                             */
/* ------- PIN Bit Fields                           ------ */
#define FLEXIO_PIN_PDI_MASK                      (0xFFU)                                             /*!< FLEXIO_PIN: PDI Mask                    */
#define FLEXIO_PIN_PDI_SHIFT                     (0U)                                                /*!< FLEXIO_PIN: PDI Position                */
#define FLEXIO_PIN_PDI(x)                        (((uint32_t)(((uint32_t)(x))<<FLEXIO_PIN_PDI_SHIFT))&FLEXIO_PIN_PDI_MASK) /*!< FLEXIO_PIN                              */
/* ------- SHIFTSTAT Bit Fields                     ------ */
#define FLEXIO_SHIFTSTAT_SSF_MASK                (0xFU)                                              /*!< FLEXIO_SHIFTSTAT: SSF Mask              */
#define FLEXIO_SHIFTSTAT_SSF_SHIFT               (0U)                                                /*!< FLEXIO_SHIFTSTAT: SSF Position          */
#define FLEXIO_SHIFTSTAT_SSF(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTSTAT_SSF_SHIFT))&FLEXIO_SHIFTSTAT_SSF_MASK) /*!< FLEXIO_SHIFTSTAT                        */
/* ------- SHIFTERR Bit Fields                      ------ */
#define FLEXIO_SHIFTERR_SEF_MASK                 (0xFU)                                              /*!< FLEXIO_SHIFTERR: SEF Mask               */
#define FLEXIO_SHIFTERR_SEF_SHIFT                (0U)                                                /*!< FLEXIO_SHIFTERR: SEF Position           */
#define FLEXIO_SHIFTERR_SEF(x)                   (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTERR_SEF_SHIFT))&FLEXIO_SHIFTERR_SEF_MASK) /*!< FLEXIO_SHIFTERR                         */
/* ------- TIMSTAT Bit Fields                       ------ */
#define FLEXIO_TIMSTAT_TSF_MASK                  (0xFU)                                              /*!< FLEXIO_TIMSTAT: TSF Mask                */
#define FLEXIO_TIMSTAT_TSF_SHIFT                 (0U)                                                /*!< FLEXIO_TIMSTAT: TSF Position            */
#define FLEXIO_TIMSTAT_TSF(x)                    (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMSTAT_TSF_SHIFT))&FLEXIO_TIMSTAT_TSF_MASK) /*!< FLEXIO_TIMSTAT                          */
/* ------- SHIFTSIEN Bit Fields                     ------ */
#define FLEXIO_SHIFTSIEN_SSIE_MASK               (0xFU)                                              /*!< FLEXIO_SHIFTSIEN: SSIE Mask             */
#define FLEXIO_SHIFTSIEN_SSIE_SHIFT              (0U)                                                /*!< FLEXIO_SHIFTSIEN: SSIE Position         */
#define FLEXIO_SHIFTSIEN_SSIE(x)                 (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTSIEN_SSIE_SHIFT))&FLEXIO_SHIFTSIEN_SSIE_MASK) /*!< FLEXIO_SHIFTSIEN                        */
/* ------- SHIFTEIEN Bit Fields                     ------ */
#define FLEXIO_SHIFTEIEN_SEIE_MASK               (0xFU)                                              /*!< FLEXIO_SHIFTEIEN: SEIE Mask             */
#define FLEXIO_SHIFTEIEN_SEIE_SHIFT              (0U)                                                /*!< FLEXIO_SHIFTEIEN: SEIE Position         */
#define FLEXIO_SHIFTEIEN_SEIE(x)                 (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTEIEN_SEIE_SHIFT))&FLEXIO_SHIFTEIEN_SEIE_MASK) /*!< FLEXIO_SHIFTEIEN                        */
/* ------- TIMIEN Bit Fields                        ------ */
#define FLEXIO_TIMIEN_TEIE_MASK                  (0xFU)                                              /*!< FLEXIO_TIMIEN: TEIE Mask                */
#define FLEXIO_TIMIEN_TEIE_SHIFT                 (0U)                                                /*!< FLEXIO_TIMIEN: TEIE Position            */
#define FLEXIO_TIMIEN_TEIE(x)                    (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMIEN_TEIE_SHIFT))&FLEXIO_TIMIEN_TEIE_MASK) /*!< FLEXIO_TIMIEN                           */
/* ------- SHIFTSDEN Bit Fields                     ------ */
#define FLEXIO_SHIFTSDEN_SSDE_MASK               (0xFU)                                              /*!< FLEXIO_SHIFTSDEN: SSDE Mask             */
#define FLEXIO_SHIFTSDEN_SSDE_SHIFT              (0U)                                                /*!< FLEXIO_SHIFTSDEN: SSDE Position         */
#define FLEXIO_SHIFTSDEN_SSDE(x)                 (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTSDEN_SSDE_SHIFT))&FLEXIO_SHIFTSDEN_SSDE_MASK) /*!< FLEXIO_SHIFTSDEN                        */
/* ------- SHIFTCTL Bit Fields                      ------ */
#define FLEXIO_SHIFTCTL_SMOD_MASK                (0x7U)                                              /*!< FLEXIO_SHIFTCTL: SMOD Mask              */
#define FLEXIO_SHIFTCTL_SMOD_SHIFT               (0U)                                                /*!< FLEXIO_SHIFTCTL: SMOD Position          */
#define FLEXIO_SHIFTCTL_SMOD(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCTL_SMOD_SHIFT))&FLEXIO_SHIFTCTL_SMOD_MASK) /*!< FLEXIO_SHIFTCTL                         */
#define FLEXIO_SHIFTCTL_PINPOL_MASK              (0x80U)                                             /*!< FLEXIO_SHIFTCTL: PINPOL Mask            */
#define FLEXIO_SHIFTCTL_PINPOL_SHIFT             (7U)                                                /*!< FLEXIO_SHIFTCTL: PINPOL Position        */
#define FLEXIO_SHIFTCTL_PINPOL(x)                (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCTL_PINPOL_SHIFT))&FLEXIO_SHIFTCTL_PINPOL_MASK) /*!< FLEXIO_SHIFTCTL                         */
#define FLEXIO_SHIFTCTL_PINSEL_MASK              (0x700U)                                            /*!< FLEXIO_SHIFTCTL: PINSEL Mask            */
#define FLEXIO_SHIFTCTL_PINSEL_SHIFT             (8U)                                                /*!< FLEXIO_SHIFTCTL: PINSEL Position        */
#define FLEXIO_SHIFTCTL_PINSEL(x)                (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCTL_PINSEL_SHIFT))&FLEXIO_SHIFTCTL_PINSEL_MASK) /*!< FLEXIO_SHIFTCTL                         */
#define FLEXIO_SHIFTCTL_PINCFG_MASK              (0x30000U)                                          /*!< FLEXIO_SHIFTCTL: PINCFG Mask            */
#define FLEXIO_SHIFTCTL_PINCFG_SHIFT             (16U)                                               /*!< FLEXIO_SHIFTCTL: PINCFG Position        */
#define FLEXIO_SHIFTCTL_PINCFG(x)                (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCTL_PINCFG_SHIFT))&FLEXIO_SHIFTCTL_PINCFG_MASK) /*!< FLEXIO_SHIFTCTL                         */
#define FLEXIO_SHIFTCTL_TIMPOL_MASK              (0x800000U)                                         /*!< FLEXIO_SHIFTCTL: TIMPOL Mask            */
#define FLEXIO_SHIFTCTL_TIMPOL_SHIFT             (23U)                                               /*!< FLEXIO_SHIFTCTL: TIMPOL Position        */
#define FLEXIO_SHIFTCTL_TIMPOL(x)                (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCTL_TIMPOL_SHIFT))&FLEXIO_SHIFTCTL_TIMPOL_MASK) /*!< FLEXIO_SHIFTCTL                         */
#define FLEXIO_SHIFTCTL_TIMSEL_MASK              (0x3000000U)                                        /*!< FLEXIO_SHIFTCTL: TIMSEL Mask            */
#define FLEXIO_SHIFTCTL_TIMSEL_SHIFT             (24U)                                               /*!< FLEXIO_SHIFTCTL: TIMSEL Position        */
#define FLEXIO_SHIFTCTL_TIMSEL(x)                (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCTL_TIMSEL_SHIFT))&FLEXIO_SHIFTCTL_TIMSEL_MASK) /*!< FLEXIO_SHIFTCTL                         */
/* ------- SHIFTCFG Bit Fields                      ------ */
#define FLEXIO_SHIFTCFG_SSTART_MASK              (0x3U)                                              /*!< FLEXIO_SHIFTCFG: SSTART Mask            */
#define FLEXIO_SHIFTCFG_SSTART_SHIFT             (0U)                                                /*!< FLEXIO_SHIFTCFG: SSTART Position        */
#define FLEXIO_SHIFTCFG_SSTART(x)                (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCFG_SSTART_SHIFT))&FLEXIO_SHIFTCFG_SSTART_MASK) /*!< FLEXIO_SHIFTCFG                         */
#define FLEXIO_SHIFTCFG_SSTOP_MASK               (0x30U)                                             /*!< FLEXIO_SHIFTCFG: SSTOP Mask             */
#define FLEXIO_SHIFTCFG_SSTOP_SHIFT              (4U)                                                /*!< FLEXIO_SHIFTCFG: SSTOP Position         */
#define FLEXIO_SHIFTCFG_SSTOP(x)                 (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCFG_SSTOP_SHIFT))&FLEXIO_SHIFTCFG_SSTOP_MASK) /*!< FLEXIO_SHIFTCFG                         */
#define FLEXIO_SHIFTCFG_INSRC_MASK               (0x100U)                                            /*!< FLEXIO_SHIFTCFG: INSRC Mask             */
#define FLEXIO_SHIFTCFG_INSRC_SHIFT              (8U)                                                /*!< FLEXIO_SHIFTCFG: INSRC Position         */
#define FLEXIO_SHIFTCFG_INSRC(x)                 (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCFG_INSRC_SHIFT))&FLEXIO_SHIFTCFG_INSRC_MASK) /*!< FLEXIO_SHIFTCFG                         */
/* ------- SHIFTBUF Bit Fields                      ------ */
#define FLEXIO_SHIFTBUF_SHIFTBUF_MASK            (0xFFFFFFFFU)                                       /*!< FLEXIO_SHIFTBUF: SHIFTBUF Mask          */
#define FLEXIO_SHIFTBUF_SHIFTBUF_SHIFT           (0U)                                                /*!< FLEXIO_SHIFTBUF: SHIFTBUF Position      */
#define FLEXIO_SHIFTBUF_SHIFTBUF(x)              (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTBUF_SHIFTBUF_SHIFT))&FLEXIO_SHIFTBUF_SHIFTBUF_MASK) /*!< FLEXIO_SHIFTBUF                         */
/* ------- SHIFTBUFBIS Bit Fields                   ------ */
#define FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS_MASK      (0xFFFFFFFFU)                                       /*!< FLEXIO_SHIFTBUFBIS: SHIFTBUFBIS Mask    */
#define FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS_SHIFT     (0U)                                                /*!< FLEXIO_SHIFTBUFBIS: SHIFTBUFBIS Position*/
#define FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS(x)        (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS_SHIFT))&FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS_MASK) /*!< FLEXIO_SHIFTBUFBIS                      */
/* ------- SHIFTBUFBYS Bit Fields                   ------ */
#define FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS_MASK      (0xFFFFFFFFU)                                       /*!< FLEXIO_SHIFTBUFBYS: SHIFTBUFBYS Mask    */
#define FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS_SHIFT     (0U)                                                /*!< FLEXIO_SHIFTBUFBYS: SHIFTBUFBYS Position*/
#define FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS(x)        (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS_SHIFT))&FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS_MASK) /*!< FLEXIO_SHIFTBUFBYS                      */
/* ------- SHIFTBUFBBS Bit Fields                   ------ */
#define FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS_MASK      (0xFFFFFFFFU)                                       /*!< FLEXIO_SHIFTBUFBBS: SHIFTBUFBBS Mask    */
#define FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS_SHIFT     (0U)                                                /*!< FLEXIO_SHIFTBUFBBS: SHIFTBUFBBS Position*/
#define FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS(x)        (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS_SHIFT))&FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS_MASK) /*!< FLEXIO_SHIFTBUFBBS                      */
/* ------- TIMCTL Bit Fields                        ------ */
#define FLEXIO_TIMCTL_TIMOD_MASK                 (0x3U)                                              /*!< FLEXIO_TIMCTL: TIMOD Mask               */
#define FLEXIO_TIMCTL_TIMOD_SHIFT                (0U)                                                /*!< FLEXIO_TIMCTL: TIMOD Position           */
#define FLEXIO_TIMCTL_TIMOD(x)                   (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCTL_TIMOD_SHIFT))&FLEXIO_TIMCTL_TIMOD_MASK) /*!< FLEXIO_TIMCTL                           */
#define FLEXIO_TIMCTL_PINPOL_MASK                (0x80U)                                             /*!< FLEXIO_TIMCTL: PINPOL Mask              */
#define FLEXIO_TIMCTL_PINPOL_SHIFT               (7U)                                                /*!< FLEXIO_TIMCTL: PINPOL Position          */
#define FLEXIO_TIMCTL_PINPOL(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCTL_PINPOL_SHIFT))&FLEXIO_TIMCTL_PINPOL_MASK) /*!< FLEXIO_TIMCTL                           */
#define FLEXIO_TIMCTL_PINSEL_MASK                (0x700U)                                            /*!< FLEXIO_TIMCTL: PINSEL Mask              */
#define FLEXIO_TIMCTL_PINSEL_SHIFT               (8U)                                                /*!< FLEXIO_TIMCTL: PINSEL Position          */
#define FLEXIO_TIMCTL_PINSEL(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCTL_PINSEL_SHIFT))&FLEXIO_TIMCTL_PINSEL_MASK) /*!< FLEXIO_TIMCTL                           */
#define FLEXIO_TIMCTL_PINCFG_MASK                (0x30000U)                                          /*!< FLEXIO_TIMCTL: PINCFG Mask              */
#define FLEXIO_TIMCTL_PINCFG_SHIFT               (16U)                                               /*!< FLEXIO_TIMCTL: PINCFG Position          */
#define FLEXIO_TIMCTL_PINCFG(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCTL_PINCFG_SHIFT))&FLEXIO_TIMCTL_PINCFG_MASK) /*!< FLEXIO_TIMCTL                           */
#define FLEXIO_TIMCTL_TRGSRC_MASK                (0x400000U)                                         /*!< FLEXIO_TIMCTL: TRGSRC Mask              */
#define FLEXIO_TIMCTL_TRGSRC_SHIFT               (22U)                                               /*!< FLEXIO_TIMCTL: TRGSRC Position          */
#define FLEXIO_TIMCTL_TRGSRC(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCTL_TRGSRC_SHIFT))&FLEXIO_TIMCTL_TRGSRC_MASK) /*!< FLEXIO_TIMCTL                           */
#define FLEXIO_TIMCTL_TRGPOL_MASK                (0x800000U)                                         /*!< FLEXIO_TIMCTL: TRGPOL Mask              */
#define FLEXIO_TIMCTL_TRGPOL_SHIFT               (23U)                                               /*!< FLEXIO_TIMCTL: TRGPOL Position          */
#define FLEXIO_TIMCTL_TRGPOL(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCTL_TRGPOL_SHIFT))&FLEXIO_TIMCTL_TRGPOL_MASK) /*!< FLEXIO_TIMCTL                           */
#define FLEXIO_TIMCTL_TRGSEL_MASK                (0xF000000U)                                        /*!< FLEXIO_TIMCTL: TRGSEL Mask              */
#define FLEXIO_TIMCTL_TRGSEL_SHIFT               (24U)                                               /*!< FLEXIO_TIMCTL: TRGSEL Position          */
#define FLEXIO_TIMCTL_TRGSEL(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCTL_TRGSEL_SHIFT))&FLEXIO_TIMCTL_TRGSEL_MASK) /*!< FLEXIO_TIMCTL                           */
/* ------- TIMCFG Bit Fields                        ------ */
#define FLEXIO_TIMCFG_TSTART_MASK                (0x2U)                                              /*!< FLEXIO_TIMCFG: TSTART Mask              */
#define FLEXIO_TIMCFG_TSTART_SHIFT               (1U)                                                /*!< FLEXIO_TIMCFG: TSTART Position          */
#define FLEXIO_TIMCFG_TSTART(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCFG_TSTART_SHIFT))&FLEXIO_TIMCFG_TSTART_MASK) /*!< FLEXIO_TIMCFG                           */
#define FLEXIO_TIMCFG_TSTOP_MASK                 (0x30U)                                             /*!< FLEXIO_TIMCFG: TSTOP Mask               */
#define FLEXIO_TIMCFG_TSTOP_SHIFT                (4U)                                                /*!< FLEXIO_TIMCFG: TSTOP Position           */
#define FLEXIO_TIMCFG_TSTOP(x)                   (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCFG_TSTOP_SHIFT))&FLEXIO_TIMCFG_TSTOP_MASK) /*!< FLEXIO_TIMCFG                           */
#define FLEXIO_TIMCFG_TIMENA_MASK                (0x700U)                                            /*!< FLEXIO_TIMCFG: TIMENA Mask              */
#define FLEXIO_TIMCFG_TIMENA_SHIFT               (8U)                                                /*!< FLEXIO_TIMCFG: TIMENA Position          */
#define FLEXIO_TIMCFG_TIMENA(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCFG_TIMENA_SHIFT))&FLEXIO_TIMCFG_TIMENA_MASK) /*!< FLEXIO_TIMCFG                           */
#define FLEXIO_TIMCFG_TIMDIS_MASK                (0x7000U)                                           /*!< FLEXIO_TIMCFG: TIMDIS Mask              */
#define FLEXIO_TIMCFG_TIMDIS_SHIFT               (12U)                                               /*!< FLEXIO_TIMCFG: TIMDIS Position          */
#define FLEXIO_TIMCFG_TIMDIS(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCFG_TIMDIS_SHIFT))&FLEXIO_TIMCFG_TIMDIS_MASK) /*!< FLEXIO_TIMCFG                           */
#define FLEXIO_TIMCFG_TIMRST_MASK                (0x70000U)                                          /*!< FLEXIO_TIMCFG: TIMRST Mask              */
#define FLEXIO_TIMCFG_TIMRST_SHIFT               (16U)                                               /*!< FLEXIO_TIMCFG: TIMRST Position          */
#define FLEXIO_TIMCFG_TIMRST(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCFG_TIMRST_SHIFT))&FLEXIO_TIMCFG_TIMRST_MASK) /*!< FLEXIO_TIMCFG                           */
#define FLEXIO_TIMCFG_TIMDEC_MASK                (0x300000U)                                         /*!< FLEXIO_TIMCFG: TIMDEC Mask              */
#define FLEXIO_TIMCFG_TIMDEC_SHIFT               (20U)                                               /*!< FLEXIO_TIMCFG: TIMDEC Position          */
#define FLEXIO_TIMCFG_TIMDEC(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCFG_TIMDEC_SHIFT))&FLEXIO_TIMCFG_TIMDEC_MASK) /*!< FLEXIO_TIMCFG                           */
#define FLEXIO_TIMCFG_TIMOUT_MASK                (0x3000000U)                                        /*!< FLEXIO_TIMCFG: TIMOUT Mask              */
#define FLEXIO_TIMCFG_TIMOUT_SHIFT               (24U)                                               /*!< FLEXIO_TIMCFG: TIMOUT Position          */
#define FLEXIO_TIMCFG_TIMOUT(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCFG_TIMOUT_SHIFT))&FLEXIO_TIMCFG_TIMOUT_MASK) /*!< FLEXIO_TIMCFG                           */
/* ------- TIMCMP Bit Fields                        ------ */
#define FLEXIO_TIMCMP_CMP_MASK                   (0xFFFFU)                                           /*!< FLEXIO_TIMCMP: CMP Mask                 */
#define FLEXIO_TIMCMP_CMP_SHIFT                  (0U)                                                /*!< FLEXIO_TIMCMP: CMP Position             */
#define FLEXIO_TIMCMP_CMP(x)                     (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCMP_CMP_SHIFT))&FLEXIO_TIMCMP_CMP_MASK) /*!< FLEXIO_TIMCMP                           */
/**
 * @} */ /* End group FLEXIO_Register_Masks_GROUP 
 */

/* FLEXIO - Peripheral instance base addresses */
#define FLEXIO_BasePtr                 0x4005A000UL //!< Peripheral base address
#define FLEXIO                         ((FLEXIO_Type *) FLEXIO_BasePtr) //!< Freescale base pointer
#define FLEXIO_BASE_PTR                (FLEXIO) //!< Freescale style base pointer
/**
 * @} */ /* End group FLEXIO_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup FTFE_Peripheral_access_layer_GROUP FTFE Peripheral Access Layer
* @brief C Struct for FTFE
* @{
*/

/* ================================================================================ */
/* ================           FTFE (file:FTFE_MKE15Z7)             ================ */
/* ================================================================================ */

/**
 * @brief Flash Memory Interface
 */
/**
* @addtogroup FTFE_structs_GROUP FTFE struct
* @brief Struct for FTFE
* @{
*/
typedef struct {                                /*       FTFE Structure                                               */
   __IO uint8_t   FSTAT;                        /**< 0000: Flash Status Register                                        */
   __IO uint8_t   FCNFG;                        /**< 0001: Flash Configuration Register                                 */
   __I  uint8_t   FSEC;                         /**< 0002: Flash Security Register                                      */
   __I  uint8_t   FOPT;                         /**< 0003: Flash Option Register                                        */
   __IO uint8_t   FCCOB3;                       /**< 0004: Flash Common Command Object                                  */
   __IO uint8_t   FCCOB2;                       /**< 0005: Flash Common Command Object                                  */
   __IO uint8_t   FCCOB1;                       /**< 0006: Flash Common Command Object                                  */
   __IO uint8_t   FCCOB0;                       /**< 0007: Flash Common Command Object                                  */
   __IO uint8_t   FCCOB7;                       /**< 0008: Flash Common Command Object                                  */
   __IO uint8_t   FCCOB6;                       /**< 0009: Flash Common Command Object                                  */
   __IO uint8_t   FCCOB5;                       /**< 000A: Flash Common Command Object                                  */
   __IO uint8_t   FCCOB4;                       /**< 000B: Flash Common Command Object                                  */
   __IO uint8_t   FCCOBB;                       /**< 000C: Flash Common Command Object                                  */
   __IO uint8_t   FCCOBA;                       /**< 000D: Flash Common Command Object                                  */
   __IO uint8_t   FCCOB9;                       /**< 000E: Flash Common Command Object                                  */
   __IO uint8_t   FCCOB8;                       /**< 000F: Flash Common Command Object                                  */
   __IO uint8_t   FPROT3;                       /**< 0010: Program Flash Protection                                     */
   __IO uint8_t   FPROT2;                       /**< 0011: Program Flash Protection                                     */
   __IO uint8_t   FPROT1;                       /**< 0012: Program Flash Protection                                     */
   __IO uint8_t   FPROT0;                       /**< 0013: Program Flash Protection                                     */
        uint8_t   RESERVED_0[2];               
   __IO uint8_t   FEPROT;                       /**< 0016: EEPROM Protection Register                                   */
   __IO uint8_t   FDPROT;                       /**< 0017: Data Flash Protection Register                               */
   __I  uint8_t   XACCH3;                       /**< 0018: Execute-only Access                                          */
   __I  uint8_t   XACCH2;                       /**< 0019: Execute-only Access                                          */
   __I  uint8_t   XACCH1;                       /**< 001A: Execute-only Access                                          */
   __I  uint8_t   XACCH0;                       /**< 001B: Execute-only Access                                          */
   __I  uint8_t   XACCL3;                       /**< 001C: Execute-only Access                                          */
   __I  uint8_t   XACCL2;                       /**< 001D: Execute-only Access                                          */
   __I  uint8_t   XACCL1;                       /**< 001E: Execute-only Access                                          */
   __I  uint8_t   XACCL0;                       /**< 001F: Execute-only Access                                          */
   __I  uint8_t   SACCH3;                       /**< 0020: Supervisor-only Access                                       */
   __I  uint8_t   SACCH2;                       /**< 0021: Supervisor-only Access                                       */
   __I  uint8_t   SACCH1;                       /**< 0022: Supervisor-only Access                                       */
   __I  uint8_t   SACCH0;                       /**< 0023: Supervisor-only Access                                       */
   __I  uint8_t   SACCL3;                       /**< 0024: Supervisor-only Access                                       */
   __I  uint8_t   SACCL2;                       /**< 0025: Supervisor-only Access                                       */
   __I  uint8_t   SACCL1;                       /**< 0026: Supervisor-only Access                                       */
   __I  uint8_t   SACCL0;                       /**< 0027: Supervisor-only Access                                       */
   __I  uint8_t   FACSS;                        /**< 0028: Flash Access Segment Size Register                           */
        uint8_t   RESERVED_1[2];               
   __I  uint8_t   FACSN;                        /**< 002B: Flash Access Segment Number Register                         */
} FTFE_Type;

/**
 * @} */ /* End group FTFE_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'FTFE' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup FTFE_Register_Masks_GROUP FTFE Register Masks
* @brief Register Masks for FTFE
* @{
*/
/* ------- FSTAT Bit Fields                         ------ */
#define FTFE_FSTAT_MGSTAT0_MASK                  (0x1U)                                              /*!< FTFE_FSTAT: MGSTAT0 Mask                */
#define FTFE_FSTAT_MGSTAT0_SHIFT                 (0U)                                                /*!< FTFE_FSTAT: MGSTAT0 Position            */
#define FTFE_FSTAT_MGSTAT0(x)                    (((uint8_t)(((uint8_t)(x))<<FTFE_FSTAT_MGSTAT0_SHIFT))&FTFE_FSTAT_MGSTAT0_MASK) /*!< FTFE_FSTAT                              */
#define FTFE_FSTAT_FPVIOL_MASK                   (0x10U)                                             /*!< FTFE_FSTAT: FPVIOL Mask                 */
#define FTFE_FSTAT_FPVIOL_SHIFT                  (4U)                                                /*!< FTFE_FSTAT: FPVIOL Position             */
#define FTFE_FSTAT_FPVIOL(x)                     (((uint8_t)(((uint8_t)(x))<<FTFE_FSTAT_FPVIOL_SHIFT))&FTFE_FSTAT_FPVIOL_MASK) /*!< FTFE_FSTAT                              */
#define FTFE_FSTAT_ACCERR_MASK                   (0x20U)                                             /*!< FTFE_FSTAT: ACCERR Mask                 */
#define FTFE_FSTAT_ACCERR_SHIFT                  (5U)                                                /*!< FTFE_FSTAT: ACCERR Position             */
#define FTFE_FSTAT_ACCERR(x)                     (((uint8_t)(((uint8_t)(x))<<FTFE_FSTAT_ACCERR_SHIFT))&FTFE_FSTAT_ACCERR_MASK) /*!< FTFE_FSTAT                              */
#define FTFE_FSTAT_RDCOLERR_MASK                 (0x40U)                                             /*!< FTFE_FSTAT: RDCOLERR Mask               */
#define FTFE_FSTAT_RDCOLERR_SHIFT                (6U)                                                /*!< FTFE_FSTAT: RDCOLERR Position           */
#define FTFE_FSTAT_RDCOLERR(x)                   (((uint8_t)(((uint8_t)(x))<<FTFE_FSTAT_RDCOLERR_SHIFT))&FTFE_FSTAT_RDCOLERR_MASK) /*!< FTFE_FSTAT                              */
#define FTFE_FSTAT_CCIF_MASK                     (0x80U)                                             /*!< FTFE_FSTAT: CCIF Mask                   */
#define FTFE_FSTAT_CCIF_SHIFT                    (7U)                                                /*!< FTFE_FSTAT: CCIF Position               */
#define FTFE_FSTAT_CCIF(x)                       (((uint8_t)(((uint8_t)(x))<<FTFE_FSTAT_CCIF_SHIFT))&FTFE_FSTAT_CCIF_MASK) /*!< FTFE_FSTAT                              */
/* ------- FCNFG Bit Fields                         ------ */
#define FTFE_FCNFG_EEERDY_MASK                   (0x1U)                                              /*!< FTFE_FCNFG: EEERDY Mask                 */
#define FTFE_FCNFG_EEERDY_SHIFT                  (0U)                                                /*!< FTFE_FCNFG: EEERDY Position             */
#define FTFE_FCNFG_EEERDY(x)                     (((uint8_t)(((uint8_t)(x))<<FTFE_FCNFG_EEERDY_SHIFT))&FTFE_FCNFG_EEERDY_MASK) /*!< FTFE_FCNFG                              */
#define FTFE_FCNFG_RAMRDY_MASK                   (0x2U)                                              /*!< FTFE_FCNFG: RAMRDY Mask                 */
#define FTFE_FCNFG_RAMRDY_SHIFT                  (1U)                                                /*!< FTFE_FCNFG: RAMRDY Position             */
#define FTFE_FCNFG_RAMRDY(x)                     (((uint8_t)(((uint8_t)(x))<<FTFE_FCNFG_RAMRDY_SHIFT))&FTFE_FCNFG_RAMRDY_MASK) /*!< FTFE_FCNFG                              */
#define FTFE_FCNFG_PFLSH_MASK                    (0x4U)                                              /*!< FTFE_FCNFG: PFLSH Mask                  */
#define FTFE_FCNFG_PFLSH_SHIFT                   (2U)                                                /*!< FTFE_FCNFG: PFLSH Position              */
#define FTFE_FCNFG_PFLSH(x)                      (((uint8_t)(((uint8_t)(x))<<FTFE_FCNFG_PFLSH_SHIFT))&FTFE_FCNFG_PFLSH_MASK) /*!< FTFE_FCNFG                              */
#define FTFE_FCNFG_DFDF_MASK                     (0x8U)                                              /*!< FTFE_FCNFG: DFDF Mask                   */
#define FTFE_FCNFG_DFDF_SHIFT                    (3U)                                                /*!< FTFE_FCNFG: DFDF Position               */
#define FTFE_FCNFG_DFDF(x)                       (((uint8_t)(((uint8_t)(x))<<FTFE_FCNFG_DFDF_SHIFT))&FTFE_FCNFG_DFDF_MASK) /*!< FTFE_FCNFG                              */
#define FTFE_FCNFG_ERSSUSP_MASK                  (0x10U)                                             /*!< FTFE_FCNFG: ERSSUSP Mask                */
#define FTFE_FCNFG_ERSSUSP_SHIFT                 (4U)                                                /*!< FTFE_FCNFG: ERSSUSP Position            */
#define FTFE_FCNFG_ERSSUSP(x)                    (((uint8_t)(((uint8_t)(x))<<FTFE_FCNFG_ERSSUSP_SHIFT))&FTFE_FCNFG_ERSSUSP_MASK) /*!< FTFE_FCNFG                              */
#define FTFE_FCNFG_ERSAREQ_MASK                  (0x20U)                                             /*!< FTFE_FCNFG: ERSAREQ Mask                */
#define FTFE_FCNFG_ERSAREQ_SHIFT                 (5U)                                                /*!< FTFE_FCNFG: ERSAREQ Position            */
#define FTFE_FCNFG_ERSAREQ(x)                    (((uint8_t)(((uint8_t)(x))<<FTFE_FCNFG_ERSAREQ_SHIFT))&FTFE_FCNFG_ERSAREQ_MASK) /*!< FTFE_FCNFG                              */
#define FTFE_FCNFG_RDCOLLIE_MASK                 (0x40U)                                             /*!< FTFE_FCNFG: RDCOLLIE Mask               */
#define FTFE_FCNFG_RDCOLLIE_SHIFT                (6U)                                                /*!< FTFE_FCNFG: RDCOLLIE Position           */
#define FTFE_FCNFG_RDCOLLIE(x)                   (((uint8_t)(((uint8_t)(x))<<FTFE_FCNFG_RDCOLLIE_SHIFT))&FTFE_FCNFG_RDCOLLIE_MASK) /*!< FTFE_FCNFG                              */
#define FTFE_FCNFG_CCIE_MASK                     (0x80U)                                             /*!< FTFE_FCNFG: CCIE Mask                   */
#define FTFE_FCNFG_CCIE_SHIFT                    (7U)                                                /*!< FTFE_FCNFG: CCIE Position               */
#define FTFE_FCNFG_CCIE(x)                       (((uint8_t)(((uint8_t)(x))<<FTFE_FCNFG_CCIE_SHIFT))&FTFE_FCNFG_CCIE_MASK) /*!< FTFE_FCNFG                              */
/* ------- FSEC Bit Fields                          ------ */
#define FTFE_FSEC_SEC_MASK                       (0x3U)                                              /*!< FTFE_FSEC: SEC Mask                     */
#define FTFE_FSEC_SEC_SHIFT                      (0U)                                                /*!< FTFE_FSEC: SEC Position                 */
#define FTFE_FSEC_SEC(x)                         (((uint8_t)(((uint8_t)(x))<<FTFE_FSEC_SEC_SHIFT))&FTFE_FSEC_SEC_MASK) /*!< FTFE_FSEC                               */
#define FTFE_FSEC_FSLACC_MASK                    (0xCU)                                              /*!< FTFE_FSEC: FSLACC Mask                  */
#define FTFE_FSEC_FSLACC_SHIFT                   (2U)                                                /*!< FTFE_FSEC: FSLACC Position              */
#define FTFE_FSEC_FSLACC(x)                      (((uint8_t)(((uint8_t)(x))<<FTFE_FSEC_FSLACC_SHIFT))&FTFE_FSEC_FSLACC_MASK) /*!< FTFE_FSEC                               */
#define FTFE_FSEC_MEEN_MASK                      (0x30U)                                             /*!< FTFE_FSEC: MEEN Mask                    */
#define FTFE_FSEC_MEEN_SHIFT                     (4U)                                                /*!< FTFE_FSEC: MEEN Position                */
#define FTFE_FSEC_MEEN(x)                        (((uint8_t)(((uint8_t)(x))<<FTFE_FSEC_MEEN_SHIFT))&FTFE_FSEC_MEEN_MASK) /*!< FTFE_FSEC                               */
#define FTFE_FSEC_KEYEN_MASK                     (0xC0U)                                             /*!< FTFE_FSEC: KEYEN Mask                   */
#define FTFE_FSEC_KEYEN_SHIFT                    (6U)                                                /*!< FTFE_FSEC: KEYEN Position               */
#define FTFE_FSEC_KEYEN(x)                       (((uint8_t)(((uint8_t)(x))<<FTFE_FSEC_KEYEN_SHIFT))&FTFE_FSEC_KEYEN_MASK) /*!< FTFE_FSEC                               */
/* ------- FOPT Bit Fields                          ------ */
#define FTFE_FOPT_OPT_MASK                       (0xFFU)                                             /*!< FTFE_FOPT: OPT Mask                     */
#define FTFE_FOPT_OPT_SHIFT                      (0U)                                                /*!< FTFE_FOPT: OPT Position                 */
#define FTFE_FOPT_OPT(x)                         (((uint8_t)(((uint8_t)(x))<<FTFE_FOPT_OPT_SHIFT))&FTFE_FOPT_OPT_MASK) /*!< FTFE_FOPT                               */
/* ------- FCCOB Bit Fields                         ------ */
#define FTFE_FCCOB_CCOBn_MASK                    (0xFFU)                                             /*!< FTFE_FCCOB: CCOBn Mask                  */
#define FTFE_FCCOB_CCOBn_SHIFT                   (0U)                                                /*!< FTFE_FCCOB: CCOBn Position              */
#define FTFE_FCCOB_CCOBn(x)                      (((uint8_t)(((uint8_t)(x))<<FTFE_FCCOB_CCOBn_SHIFT))&FTFE_FCCOB_CCOBn_MASK) /*!< FTFE_FCCOB                              */
/* ------- FPROT Bit Fields                         ------ */
#define FTFE_FPROT_PROT_MASK                     (0xFFU)                                             /*!< FTFE_FPROT: PROT Mask                   */
#define FTFE_FPROT_PROT_SHIFT                    (0U)                                                /*!< FTFE_FPROT: PROT Position               */
#define FTFE_FPROT_PROT(x)                       (((uint8_t)(((uint8_t)(x))<<FTFE_FPROT_PROT_SHIFT))&FTFE_FPROT_PROT_MASK) /*!< FTFE_FPROT                              */
/* ------- FEPROT Bit Fields                        ------ */
#define FTFE_FEPROT_EPROT_MASK                   (0xFFU)                                             /*!< FTFE_FEPROT: EPROT Mask                 */
#define FTFE_FEPROT_EPROT_SHIFT                  (0U)                                                /*!< FTFE_FEPROT: EPROT Position             */
#define FTFE_FEPROT_EPROT(x)                     (((uint8_t)(((uint8_t)(x))<<FTFE_FEPROT_EPROT_SHIFT))&FTFE_FEPROT_EPROT_MASK) /*!< FTFE_FEPROT                             */
/* ------- FDPROT Bit Fields                        ------ */
#define FTFE_FDPROT_DPROT_MASK                   (0xFFU)                                             /*!< FTFE_FDPROT: DPROT Mask                 */
#define FTFE_FDPROT_DPROT_SHIFT                  (0U)                                                /*!< FTFE_FDPROT: DPROT Position             */
#define FTFE_FDPROT_DPROT(x)                     (((uint8_t)(((uint8_t)(x))<<FTFE_FDPROT_DPROT_SHIFT))&FTFE_FDPROT_DPROT_MASK) /*!< FTFE_FDPROT                             */
/* ------- XACCH Bit Fields                         ------ */
#define FTFE_XACCH_XA_MASK                       (0xFFU)                                             /*!< FTFE_XACCH: XA Mask                     */
#define FTFE_XACCH_XA_SHIFT                      (0U)                                                /*!< FTFE_XACCH: XA Position                 */
#define FTFE_XACCH_XA(x)                         (((uint8_t)(((uint8_t)(x))<<FTFE_XACCH_XA_SHIFT))&FTFE_XACCH_XA_MASK) /*!< FTFE_XACCH                              */
/* ------- XACCL Bit Fields                         ------ */
#define FTFE_XACCL_XA_MASK                       (0xFFU)                                             /*!< FTFE_XACCL: XA Mask                     */
#define FTFE_XACCL_XA_SHIFT                      (0U)                                                /*!< FTFE_XACCL: XA Position                 */
#define FTFE_XACCL_XA(x)                         (((uint8_t)(((uint8_t)(x))<<FTFE_XACCL_XA_SHIFT))&FTFE_XACCL_XA_MASK) /*!< FTFE_XACCL                              */
/* ------- SACCH Bit Fields                         ------ */
#define FTFE_SACCH_SA_MASK                       (0xFFU)                                             /*!< FTFE_SACCH: SA Mask                     */
#define FTFE_SACCH_SA_SHIFT                      (0U)                                                /*!< FTFE_SACCH: SA Position                 */
#define FTFE_SACCH_SA(x)                         (((uint8_t)(((uint8_t)(x))<<FTFE_SACCH_SA_SHIFT))&FTFE_SACCH_SA_MASK) /*!< FTFE_SACCH                              */
/* ------- SACCL Bit Fields                         ------ */
#define FTFE_SACCL_SA_MASK                       (0xFFU)                                             /*!< FTFE_SACCL: SA Mask                     */
#define FTFE_SACCL_SA_SHIFT                      (0U)                                                /*!< FTFE_SACCL: SA Position                 */
#define FTFE_SACCL_SA(x)                         (((uint8_t)(((uint8_t)(x))<<FTFE_SACCL_SA_SHIFT))&FTFE_SACCL_SA_MASK) /*!< FTFE_SACCL                              */
/* ------- FACSS Bit Fields                         ------ */
#define FTFE_FACSS_SGSIZE_MASK                   (0xFFU)                                             /*!< FTFE_FACSS: SGSIZE Mask                 */
#define FTFE_FACSS_SGSIZE_SHIFT                  (0U)                                                /*!< FTFE_FACSS: SGSIZE Position             */
#define FTFE_FACSS_SGSIZE(x)                     (((uint8_t)(((uint8_t)(x))<<FTFE_FACSS_SGSIZE_SHIFT))&FTFE_FACSS_SGSIZE_MASK) /*!< FTFE_FACSS                              */
/* ------- FACSN Bit Fields                         ------ */
#define FTFE_FACSN_NUMSG_MASK                    (0xFFU)                                             /*!< FTFE_FACSN: NUMSG Mask                  */
#define FTFE_FACSN_NUMSG_SHIFT                   (0U)                                                /*!< FTFE_FACSN: NUMSG Position              */
#define FTFE_FACSN_NUMSG(x)                      (((uint8_t)(((uint8_t)(x))<<FTFE_FACSN_NUMSG_SHIFT))&FTFE_FACSN_NUMSG_MASK) /*!< FTFE_FACSN                              */
/**
 * @} */ /* End group FTFE_Register_Masks_GROUP 
 */

/* FTFE - Peripheral instance base addresses */
#define FTFE_BasePtr                   0x40020000UL //!< Peripheral base address
#define FTFE                           ((FTFE_Type *) FTFE_BasePtr) //!< Freescale base pointer
#define FTFE_BASE_PTR                  (FTFE) //!< Freescale style base pointer
/**
 * @} */ /* End group FTFE_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup FTM_Peripheral_access_layer_GROUP FTM Peripheral Access Layer
* @brief C Struct for FTM
* @{
*/

/* ================================================================================ */
/* ================           FTM0 (file:FTM0_MKE15Z7)             ================ */
/* ================================================================================ */

/**
 * @brief FlexTimer Module
 */
/**
* @addtogroup FTM_structs_GROUP FTM struct
* @brief Struct for FTM
* @{
*/
typedef struct {                                /*       FTM0 Structure                                               */
   __IO uint32_t  SC;                           /**< 0000: Status And Control                                           */
   __IO uint32_t  CNT;                          /**< 0004: Counter                                                      */
   __IO uint32_t  MOD;                          /**< 0008: Modulo                                                       */
   struct {
      __IO uint32_t  CnSC;                      /**< 000C: Channel (n) Status And Control                               */
      __IO uint32_t  CnV;                       /**< 0010: Channel (n) Value                                            */
   } CONTROLS[8];                               /**< 000C: (cluster: size=0x0040, 64)                                   */
   __IO uint32_t  CNTIN;                        /**< 004C: Counter Initial Value                                        */
   __IO uint32_t  STATUS;                       /**< 0050: Capture And Compare Status                                   */
   __IO uint32_t  MODE;                         /**< 0054: Features Mode Selection                                      */
   __IO uint32_t  SYNC;                         /**< 0058: Synchronization                                              */
   __IO uint32_t  OUTINIT;                      /**< 005C: Initial State For Channels Output                            */
   __IO uint32_t  OUTMASK;                      /**< 0060: Output Mask                                                  */
   __IO uint32_t  COMBINE;                      /**< 0064: Function For Linked Channels                                 */
   __IO uint32_t  DEADTIME;                     /**< 0068: Deadtime Configuration                                       */
   __IO uint32_t  EXTTRIG;                      /**< 006C: FTM External Trigger                                         */
   __IO uint32_t  POL;                          /**< 0070: Channels Polarity                                            */
   __IO uint32_t  FMS;                          /**< 0074: Fault Mode Status                                            */
   __IO uint32_t  FILTER;                       /**< 0078: Input Capture Filter Control                                 */
   __IO uint32_t  FLTCTRL;                      /**< 007C: Fault Control                                                */
   __IO uint32_t  QDCTRL;                       /**< 0080: Quadrature Decoder Control And Status                        */
   __IO uint32_t  CONF;                         /**< 0084: Configuration                                                */
   __IO uint32_t  FLTPOL;                       /**< 0088: FTM Fault Input Polarity                                     */
   __IO uint32_t  SYNCONF;                      /**< 008C: Synchronization Configuration                                */
   __IO uint32_t  INVCTRL;                      /**< 0090: FTM Inverting Control                                        */
   __IO uint32_t  SWOCTRL;                      /**< 0094: FTM Software Output Control                                  */
   __IO uint32_t  PWMLOAD;                      /**< 0098: FTM PWM Load                                                 */
   __IO uint32_t  HCR;                          /**< 009C: Half Cycle Register                                          */
        uint8_t   RESERVED_1[352];             
   __IO uint32_t  MOD_MIRROR;                   /**< 0200: Mirror of Modulo Value                                       */
   __IO uint32_t  C0V_MIRROR;                   /**< 0204: Mirror of Channel (n) Match Value                            */
   __IO uint32_t  C1V_MIRROR;                   /**< 0208: Mirror of Channel (n) Match Value                            */
   __IO uint32_t  C2V_MIRROR;                   /**< 020C: Mirror of Channel (n) Match Value                            */
   __IO uint32_t  C3V_MIRROR;                   /**< 0210: Mirror of Channel (n) Match Value                            */
   __IO uint32_t  C4V_MIRROR;                   /**< 0214: Mirror of Channel (n) Match Value                            */
   __IO uint32_t  C5V_MIRROR;                   /**< 0218: Mirror of Channel (n) Match Value                            */
   __IO uint32_t  C6V_MIRROR;                   /**< 021C: Mirror of Channel (n) Match Value                            */
   __IO uint32_t  C7V_MIRROR;                   /**< 0220: Mirror of Channel (n) Match Value                            */
} FTM0_Type;

/**
 * @} */ /* End group FTM_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'FTM0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup FTM_Register_Masks_GROUP FTM Register Masks
* @brief Register Masks for FTM
* @{
*/
/* ------- SC Bit Fields                            ------ */
#define FTM_SC_PS_MASK                           (0x7U)                                              /*!< FTM0_SC: PS Mask                        */
#define FTM_SC_PS_SHIFT                          (0U)                                                /*!< FTM0_SC: PS Position                    */
#define FTM_SC_PS(x)                             (((uint32_t)(((uint32_t)(x))<<FTM_SC_PS_SHIFT))&FTM_SC_PS_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_CLKS_MASK                         (0x18U)                                             /*!< FTM0_SC: CLKS Mask                      */
#define FTM_SC_CLKS_SHIFT                        (3U)                                                /*!< FTM0_SC: CLKS Position                  */
#define FTM_SC_CLKS(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_SC_CLKS_SHIFT))&FTM_SC_CLKS_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_CPWMS_MASK                        (0x20U)                                             /*!< FTM0_SC: CPWMS Mask                     */
#define FTM_SC_CPWMS_SHIFT                       (5U)                                                /*!< FTM0_SC: CPWMS Position                 */
#define FTM_SC_CPWMS(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_SC_CPWMS_SHIFT))&FTM_SC_CPWMS_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_RIE_MASK                          (0x40U)                                             /*!< FTM0_SC: RIE Mask                       */
#define FTM_SC_RIE_SHIFT                         (6U)                                                /*!< FTM0_SC: RIE Position                   */
#define FTM_SC_RIE(x)                            (((uint32_t)(((uint32_t)(x))<<FTM_SC_RIE_SHIFT))&FTM_SC_RIE_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_RF_MASK                           (0x80U)                                             /*!< FTM0_SC: RF Mask                        */
#define FTM_SC_RF_SHIFT                          (7U)                                                /*!< FTM0_SC: RF Position                    */
#define FTM_SC_RF(x)                             (((uint32_t)(((uint32_t)(x))<<FTM_SC_RF_SHIFT))&FTM_SC_RF_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_TOIE_MASK                         (0x100U)                                            /*!< FTM0_SC: TOIE Mask                      */
#define FTM_SC_TOIE_SHIFT                        (8U)                                                /*!< FTM0_SC: TOIE Position                  */
#define FTM_SC_TOIE(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_SC_TOIE_SHIFT))&FTM_SC_TOIE_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_TOF_MASK                          (0x200U)                                            /*!< FTM0_SC: TOF Mask                       */
#define FTM_SC_TOF_SHIFT                         (9U)                                                /*!< FTM0_SC: TOF Position                   */
#define FTM_SC_TOF(x)                            (((uint32_t)(((uint32_t)(x))<<FTM_SC_TOF_SHIFT))&FTM_SC_TOF_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_PWMEN0_MASK                       (0x10000U)                                          /*!< FTM0_SC: PWMEN0 Mask                    */
#define FTM_SC_PWMEN0_SHIFT                      (16U)                                               /*!< FTM0_SC: PWMEN0 Position                */
#define FTM_SC_PWMEN0(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN0_SHIFT))&FTM_SC_PWMEN0_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_PWMEN1_MASK                       (0x20000U)                                          /*!< FTM0_SC: PWMEN1 Mask                    */
#define FTM_SC_PWMEN1_SHIFT                      (17U)                                               /*!< FTM0_SC: PWMEN1 Position                */
#define FTM_SC_PWMEN1(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN1_SHIFT))&FTM_SC_PWMEN1_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_PWMEN2_MASK                       (0x40000U)                                          /*!< FTM0_SC: PWMEN2 Mask                    */
#define FTM_SC_PWMEN2_SHIFT                      (18U)                                               /*!< FTM0_SC: PWMEN2 Position                */
#define FTM_SC_PWMEN2(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN2_SHIFT))&FTM_SC_PWMEN2_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_PWMEN3_MASK                       (0x80000U)                                          /*!< FTM0_SC: PWMEN3 Mask                    */
#define FTM_SC_PWMEN3_SHIFT                      (19U)                                               /*!< FTM0_SC: PWMEN3 Position                */
#define FTM_SC_PWMEN3(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN3_SHIFT))&FTM_SC_PWMEN3_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_PWMEN4_MASK                       (0x100000U)                                         /*!< FTM0_SC: PWMEN4 Mask                    */
#define FTM_SC_PWMEN4_SHIFT                      (20U)                                               /*!< FTM0_SC: PWMEN4 Position                */
#define FTM_SC_PWMEN4(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN4_SHIFT))&FTM_SC_PWMEN4_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_PWMEN5_MASK                       (0x200000U)                                         /*!< FTM0_SC: PWMEN5 Mask                    */
#define FTM_SC_PWMEN5_SHIFT                      (21U)                                               /*!< FTM0_SC: PWMEN5 Position                */
#define FTM_SC_PWMEN5(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN5_SHIFT))&FTM_SC_PWMEN5_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_PWMEN6_MASK                       (0x400000U)                                         /*!< FTM0_SC: PWMEN6 Mask                    */
#define FTM_SC_PWMEN6_SHIFT                      (22U)                                               /*!< FTM0_SC: PWMEN6 Position                */
#define FTM_SC_PWMEN6(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN6_SHIFT))&FTM_SC_PWMEN6_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_PWMEN7_MASK                       (0x800000U)                                         /*!< FTM0_SC: PWMEN7 Mask                    */
#define FTM_SC_PWMEN7_SHIFT                      (23U)                                               /*!< FTM0_SC: PWMEN7 Position                */
#define FTM_SC_PWMEN7(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN7_SHIFT))&FTM_SC_PWMEN7_MASK) /*!< FTM0_SC                                 */
/* ------- CNT Bit Fields                           ------ */
#define FTM_CNT_COUNT_MASK                       (0xFFFFU)                                           /*!< FTM0_CNT: COUNT Mask                    */
#define FTM_CNT_COUNT_SHIFT                      (0U)                                                /*!< FTM0_CNT: COUNT Position                */
#define FTM_CNT_COUNT(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CNT_COUNT_SHIFT))&FTM_CNT_COUNT_MASK) /*!< FTM0_CNT                                */
/* ------- MOD Bit Fields                           ------ */
#define FTM_MOD_MOD_MASK                         (0xFFFFU)                                           /*!< FTM0_MOD: MOD Mask                      */
#define FTM_MOD_MOD_SHIFT                        (0U)                                                /*!< FTM0_MOD: MOD Position                  */
#define FTM_MOD_MOD(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_MOD_MOD_SHIFT))&FTM_MOD_MOD_MASK) /*!< FTM0_MOD                                */
/* ------- CnSC Bit Fields                          ------ */
#define FTM_CnSC_DMA_MASK                        (0x1U)                                              /*!< FTM0_CnSC: DMA Mask                     */
#define FTM_CnSC_DMA_SHIFT                       (0U)                                                /*!< FTM0_CnSC: DMA Position                 */
#define FTM_CnSC_DMA(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_DMA_SHIFT))&FTM_CnSC_DMA_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_ICRST_MASK                      (0x2U)                                              /*!< FTM0_CnSC: ICRST Mask                   */
#define FTM_CnSC_ICRST_SHIFT                     (1U)                                                /*!< FTM0_CnSC: ICRST Position               */
#define FTM_CnSC_ICRST(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_ICRST_SHIFT))&FTM_CnSC_ICRST_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_ELSA_MASK                       (0x4U)                                              /*!< FTM0_CnSC: ELSA Mask                    */
#define FTM_CnSC_ELSA_SHIFT                      (2U)                                                /*!< FTM0_CnSC: ELSA Position                */
#define FTM_CnSC_ELSA(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_ELSA_SHIFT))&FTM_CnSC_ELSA_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_ELSB_MASK                       (0x8U)                                              /*!< FTM0_CnSC: ELSB Mask                    */
#define FTM_CnSC_ELSB_SHIFT                      (3U)                                                /*!< FTM0_CnSC: ELSB Position                */
#define FTM_CnSC_ELSB(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_ELSB_SHIFT))&FTM_CnSC_ELSB_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_MSA_MASK                        (0x10U)                                             /*!< FTM0_CnSC: MSA Mask                     */
#define FTM_CnSC_MSA_SHIFT                       (4U)                                                /*!< FTM0_CnSC: MSA Position                 */
#define FTM_CnSC_MSA(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_MSA_SHIFT))&FTM_CnSC_MSA_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_MSB_MASK                        (0x20U)                                             /*!< FTM0_CnSC: MSB Mask                     */
#define FTM_CnSC_MSB_SHIFT                       (5U)                                                /*!< FTM0_CnSC: MSB Position                 */
#define FTM_CnSC_MSB(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_MSB_SHIFT))&FTM_CnSC_MSB_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_CHIE_MASK                       (0x40U)                                             /*!< FTM0_CnSC: CHIE Mask                    */
#define FTM_CnSC_CHIE_SHIFT                      (6U)                                                /*!< FTM0_CnSC: CHIE Position                */
#define FTM_CnSC_CHIE(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_CHIE_SHIFT))&FTM_CnSC_CHIE_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_CHF_MASK                        (0x80U)                                             /*!< FTM0_CnSC: CHF Mask                     */
#define FTM_CnSC_CHF_SHIFT                       (7U)                                                /*!< FTM0_CnSC: CHF Position                 */
#define FTM_CnSC_CHF(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_CHF_SHIFT))&FTM_CnSC_CHF_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_TRIGMODE_MASK                   (0x100U)                                            /*!< FTM0_CnSC: TRIGMODE Mask                */
#define FTM_CnSC_TRIGMODE_SHIFT                  (8U)                                                /*!< FTM0_CnSC: TRIGMODE Position            */
#define FTM_CnSC_TRIGMODE(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_TRIGMODE_SHIFT))&FTM_CnSC_TRIGMODE_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_CHIS_MASK                       (0x200U)                                            /*!< FTM0_CnSC: CHIS Mask                    */
#define FTM_CnSC_CHIS_SHIFT                      (9U)                                                /*!< FTM0_CnSC: CHIS Position                */
#define FTM_CnSC_CHIS(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_CHIS_SHIFT))&FTM_CnSC_CHIS_MASK) /*!< FTM0_CnSC                               */
/* ------- CnV Bit Fields                           ------ */
#define FTM_CnV_VAL_MASK                         (0xFFFFU)                                           /*!< FTM0_CnV: VAL Mask                      */
#define FTM_CnV_VAL_SHIFT                        (0U)                                                /*!< FTM0_CnV: VAL Position                  */
#define FTM_CnV_VAL(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_CnV_VAL_SHIFT))&FTM_CnV_VAL_MASK) /*!< FTM0_CnV                                */
/* ------- CNTIN Bit Fields                         ------ */
#define FTM_CNTIN_INIT_MASK                      (0xFFFFU)                                           /*!< FTM0_CNTIN: INIT Mask                   */
#define FTM_CNTIN_INIT_SHIFT                     (0U)                                                /*!< FTM0_CNTIN: INIT Position               */
#define FTM_CNTIN_INIT(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_CNTIN_INIT_SHIFT))&FTM_CNTIN_INIT_MASK) /*!< FTM0_CNTIN                              */
/* ------- STATUS Bit Fields                        ------ */
#define FTM_STATUS_CH0F_MASK                     (0x1U)                                              /*!< FTM0_STATUS: CH0F Mask                  */
#define FTM_STATUS_CH0F_SHIFT                    (0U)                                                /*!< FTM0_STATUS: CH0F Position              */
#define FTM_STATUS_CH0F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH0F_SHIFT))&FTM_STATUS_CH0F_MASK) /*!< FTM0_STATUS                             */
#define FTM_STATUS_CH1F_MASK                     (0x2U)                                              /*!< FTM0_STATUS: CH1F Mask                  */
#define FTM_STATUS_CH1F_SHIFT                    (1U)                                                /*!< FTM0_STATUS: CH1F Position              */
#define FTM_STATUS_CH1F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH1F_SHIFT))&FTM_STATUS_CH1F_MASK) /*!< FTM0_STATUS                             */
#define FTM_STATUS_CH2F_MASK                     (0x4U)                                              /*!< FTM0_STATUS: CH2F Mask                  */
#define FTM_STATUS_CH2F_SHIFT                    (2U)                                                /*!< FTM0_STATUS: CH2F Position              */
#define FTM_STATUS_CH2F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH2F_SHIFT))&FTM_STATUS_CH2F_MASK) /*!< FTM0_STATUS                             */
#define FTM_STATUS_CH3F_MASK                     (0x8U)                                              /*!< FTM0_STATUS: CH3F Mask                  */
#define FTM_STATUS_CH3F_SHIFT                    (3U)                                                /*!< FTM0_STATUS: CH3F Position              */
#define FTM_STATUS_CH3F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH3F_SHIFT))&FTM_STATUS_CH3F_MASK) /*!< FTM0_STATUS                             */
#define FTM_STATUS_CH4F_MASK                     (0x10U)                                             /*!< FTM0_STATUS: CH4F Mask                  */
#define FTM_STATUS_CH4F_SHIFT                    (4U)                                                /*!< FTM0_STATUS: CH4F Position              */
#define FTM_STATUS_CH4F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH4F_SHIFT))&FTM_STATUS_CH4F_MASK) /*!< FTM0_STATUS                             */
#define FTM_STATUS_CH5F_MASK                     (0x20U)                                             /*!< FTM0_STATUS: CH5F Mask                  */
#define FTM_STATUS_CH5F_SHIFT                    (5U)                                                /*!< FTM0_STATUS: CH5F Position              */
#define FTM_STATUS_CH5F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH5F_SHIFT))&FTM_STATUS_CH5F_MASK) /*!< FTM0_STATUS                             */
#define FTM_STATUS_CH6F_MASK                     (0x40U)                                             /*!< FTM0_STATUS: CH6F Mask                  */
#define FTM_STATUS_CH6F_SHIFT                    (6U)                                                /*!< FTM0_STATUS: CH6F Position              */
#define FTM_STATUS_CH6F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH6F_SHIFT))&FTM_STATUS_CH6F_MASK) /*!< FTM0_STATUS                             */
#define FTM_STATUS_CH7F_MASK                     (0x80U)                                             /*!< FTM0_STATUS: CH7F Mask                  */
#define FTM_STATUS_CH7F_SHIFT                    (7U)                                                /*!< FTM0_STATUS: CH7F Position              */
#define FTM_STATUS_CH7F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH7F_SHIFT))&FTM_STATUS_CH7F_MASK) /*!< FTM0_STATUS                             */
/* ------- MODE Bit Fields                          ------ */
#define FTM_MODE_FTMEN_MASK                      (0x1U)                                              /*!< FTM0_MODE: FTMEN Mask                   */
#define FTM_MODE_FTMEN_SHIFT                     (0U)                                                /*!< FTM0_MODE: FTMEN Position               */
#define FTM_MODE_FTMEN(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_MODE_FTMEN_SHIFT))&FTM_MODE_FTMEN_MASK) /*!< FTM0_MODE                               */
#define FTM_MODE_INIT_MASK                       (0x2U)                                              /*!< FTM0_MODE: INIT Mask                    */
#define FTM_MODE_INIT_SHIFT                      (1U)                                                /*!< FTM0_MODE: INIT Position                */
#define FTM_MODE_INIT(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_MODE_INIT_SHIFT))&FTM_MODE_INIT_MASK) /*!< FTM0_MODE                               */
#define FTM_MODE_WPDIS_MASK                      (0x4U)                                              /*!< FTM0_MODE: WPDIS Mask                   */
#define FTM_MODE_WPDIS_SHIFT                     (2U)                                                /*!< FTM0_MODE: WPDIS Position               */
#define FTM_MODE_WPDIS(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_MODE_WPDIS_SHIFT))&FTM_MODE_WPDIS_MASK) /*!< FTM0_MODE                               */
#define FTM_MODE_PWMSYNC_MASK                    (0x8U)                                              /*!< FTM0_MODE: PWMSYNC Mask                 */
#define FTM_MODE_PWMSYNC_SHIFT                   (3U)                                                /*!< FTM0_MODE: PWMSYNC Position             */
#define FTM_MODE_PWMSYNC(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_MODE_PWMSYNC_SHIFT))&FTM_MODE_PWMSYNC_MASK) /*!< FTM0_MODE                               */
#define FTM_MODE_CAPTEST_MASK                    (0x10U)                                             /*!< FTM0_MODE: CAPTEST Mask                 */
#define FTM_MODE_CAPTEST_SHIFT                   (4U)                                                /*!< FTM0_MODE: CAPTEST Position             */
#define FTM_MODE_CAPTEST(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_MODE_CAPTEST_SHIFT))&FTM_MODE_CAPTEST_MASK) /*!< FTM0_MODE                               */
#define FTM_MODE_FAULTM_MASK                     (0x60U)                                             /*!< FTM0_MODE: FAULTM Mask                  */
#define FTM_MODE_FAULTM_SHIFT                    (5U)                                                /*!< FTM0_MODE: FAULTM Position              */
#define FTM_MODE_FAULTM(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_MODE_FAULTM_SHIFT))&FTM_MODE_FAULTM_MASK) /*!< FTM0_MODE                               */
#define FTM_MODE_FAULTIE_MASK                    (0x80U)                                             /*!< FTM0_MODE: FAULTIE Mask                 */
#define FTM_MODE_FAULTIE_SHIFT                   (7U)                                                /*!< FTM0_MODE: FAULTIE Position             */
#define FTM_MODE_FAULTIE(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_MODE_FAULTIE_SHIFT))&FTM_MODE_FAULTIE_MASK) /*!< FTM0_MODE                               */
/* ------- SYNC Bit Fields                          ------ */
#define FTM_SYNC_CNTMIN_MASK                     (0x1U)                                              /*!< FTM0_SYNC: CNTMIN Mask                  */
#define FTM_SYNC_CNTMIN_SHIFT                    (0U)                                                /*!< FTM0_SYNC: CNTMIN Position              */
#define FTM_SYNC_CNTMIN(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_CNTMIN_SHIFT))&FTM_SYNC_CNTMIN_MASK) /*!< FTM0_SYNC                               */
#define FTM_SYNC_CNTMAX_MASK                     (0x2U)                                              /*!< FTM0_SYNC: CNTMAX Mask                  */
#define FTM_SYNC_CNTMAX_SHIFT                    (1U)                                                /*!< FTM0_SYNC: CNTMAX Position              */
#define FTM_SYNC_CNTMAX(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_CNTMAX_SHIFT))&FTM_SYNC_CNTMAX_MASK) /*!< FTM0_SYNC                               */
#define FTM_SYNC_REINIT_MASK                     (0x4U)                                              /*!< FTM0_SYNC: REINIT Mask                  */
#define FTM_SYNC_REINIT_SHIFT                    (2U)                                                /*!< FTM0_SYNC: REINIT Position              */
#define FTM_SYNC_REINIT(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_REINIT_SHIFT))&FTM_SYNC_REINIT_MASK) /*!< FTM0_SYNC                               */
#define FTM_SYNC_SYNCHOM_MASK                    (0x8U)                                              /*!< FTM0_SYNC: SYNCHOM Mask                 */
#define FTM_SYNC_SYNCHOM_SHIFT                   (3U)                                                /*!< FTM0_SYNC: SYNCHOM Position             */
#define FTM_SYNC_SYNCHOM(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_SYNCHOM_SHIFT))&FTM_SYNC_SYNCHOM_MASK) /*!< FTM0_SYNC                               */
#define FTM_SYNC_TRIG0_MASK                      (0x10U)                                             /*!< FTM0_SYNC: TRIG0 Mask                   */
#define FTM_SYNC_TRIG0_SHIFT                     (4U)                                                /*!< FTM0_SYNC: TRIG0 Position               */
#define FTM_SYNC_TRIG0(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_TRIG0_SHIFT))&FTM_SYNC_TRIG0_MASK) /*!< FTM0_SYNC                               */
#define FTM_SYNC_TRIG1_MASK                      (0x20U)                                             /*!< FTM0_SYNC: TRIG1 Mask                   */
#define FTM_SYNC_TRIG1_SHIFT                     (5U)                                                /*!< FTM0_SYNC: TRIG1 Position               */
#define FTM_SYNC_TRIG1(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_TRIG1_SHIFT))&FTM_SYNC_TRIG1_MASK) /*!< FTM0_SYNC                               */
#define FTM_SYNC_TRIG2_MASK                      (0x40U)                                             /*!< FTM0_SYNC: TRIG2 Mask                   */
#define FTM_SYNC_TRIG2_SHIFT                     (6U)                                                /*!< FTM0_SYNC: TRIG2 Position               */
#define FTM_SYNC_TRIG2(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_TRIG2_SHIFT))&FTM_SYNC_TRIG2_MASK) /*!< FTM0_SYNC                               */
#define FTM_SYNC_SWSYNC_MASK                     (0x80U)                                             /*!< FTM0_SYNC: SWSYNC Mask                  */
#define FTM_SYNC_SWSYNC_SHIFT                    (7U)                                                /*!< FTM0_SYNC: SWSYNC Position              */
#define FTM_SYNC_SWSYNC(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_SWSYNC_SHIFT))&FTM_SYNC_SWSYNC_MASK) /*!< FTM0_SYNC                               */
/* ------- OUTINIT Bit Fields                       ------ */
#define FTM_OUTINIT_CH0OI_MASK                   (0x1U)                                              /*!< FTM0_OUTINIT: CH0OI Mask                */
#define FTM_OUTINIT_CH0OI_SHIFT                  (0U)                                                /*!< FTM0_OUTINIT: CH0OI Position            */
#define FTM_OUTINIT_CH0OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH0OI_SHIFT))&FTM_OUTINIT_CH0OI_MASK) /*!< FTM0_OUTINIT                            */
#define FTM_OUTINIT_CH1OI_MASK                   (0x2U)                                              /*!< FTM0_OUTINIT: CH1OI Mask                */
#define FTM_OUTINIT_CH1OI_SHIFT                  (1U)                                                /*!< FTM0_OUTINIT: CH1OI Position            */
#define FTM_OUTINIT_CH1OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH1OI_SHIFT))&FTM_OUTINIT_CH1OI_MASK) /*!< FTM0_OUTINIT                            */
#define FTM_OUTINIT_CH2OI_MASK                   (0x4U)                                              /*!< FTM0_OUTINIT: CH2OI Mask                */
#define FTM_OUTINIT_CH2OI_SHIFT                  (2U)                                                /*!< FTM0_OUTINIT: CH2OI Position            */
#define FTM_OUTINIT_CH2OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH2OI_SHIFT))&FTM_OUTINIT_CH2OI_MASK) /*!< FTM0_OUTINIT                            */
#define FTM_OUTINIT_CH3OI_MASK                   (0x8U)                                              /*!< FTM0_OUTINIT: CH3OI Mask                */
#define FTM_OUTINIT_CH3OI_SHIFT                  (3U)                                                /*!< FTM0_OUTINIT: CH3OI Position            */
#define FTM_OUTINIT_CH3OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH3OI_SHIFT))&FTM_OUTINIT_CH3OI_MASK) /*!< FTM0_OUTINIT                            */
#define FTM_OUTINIT_CH4OI_MASK                   (0x10U)                                             /*!< FTM0_OUTINIT: CH4OI Mask                */
#define FTM_OUTINIT_CH4OI_SHIFT                  (4U)                                                /*!< FTM0_OUTINIT: CH4OI Position            */
#define FTM_OUTINIT_CH4OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH4OI_SHIFT))&FTM_OUTINIT_CH4OI_MASK) /*!< FTM0_OUTINIT                            */
#define FTM_OUTINIT_CH5OI_MASK                   (0x20U)                                             /*!< FTM0_OUTINIT: CH5OI Mask                */
#define FTM_OUTINIT_CH5OI_SHIFT                  (5U)                                                /*!< FTM0_OUTINIT: CH5OI Position            */
#define FTM_OUTINIT_CH5OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH5OI_SHIFT))&FTM_OUTINIT_CH5OI_MASK) /*!< FTM0_OUTINIT                            */
#define FTM_OUTINIT_CH6OI_MASK                   (0x40U)                                             /*!< FTM0_OUTINIT: CH6OI Mask                */
#define FTM_OUTINIT_CH6OI_SHIFT                  (6U)                                                /*!< FTM0_OUTINIT: CH6OI Position            */
#define FTM_OUTINIT_CH6OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH6OI_SHIFT))&FTM_OUTINIT_CH6OI_MASK) /*!< FTM0_OUTINIT                            */
#define FTM_OUTINIT_CH7OI_MASK                   (0x80U)                                             /*!< FTM0_OUTINIT: CH7OI Mask                */
#define FTM_OUTINIT_CH7OI_SHIFT                  (7U)                                                /*!< FTM0_OUTINIT: CH7OI Position            */
#define FTM_OUTINIT_CH7OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH7OI_SHIFT))&FTM_OUTINIT_CH7OI_MASK) /*!< FTM0_OUTINIT                            */
/* ------- OUTMASK Bit Fields                       ------ */
#define FTM_OUTMASK_CH0OM_MASK                   (0x1U)                                              /*!< FTM0_OUTMASK: CH0OM Mask                */
#define FTM_OUTMASK_CH0OM_SHIFT                  (0U)                                                /*!< FTM0_OUTMASK: CH0OM Position            */
#define FTM_OUTMASK_CH0OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH0OM_SHIFT))&FTM_OUTMASK_CH0OM_MASK) /*!< FTM0_OUTMASK                            */
#define FTM_OUTMASK_CH1OM_MASK                   (0x2U)                                              /*!< FTM0_OUTMASK: CH1OM Mask                */
#define FTM_OUTMASK_CH1OM_SHIFT                  (1U)                                                /*!< FTM0_OUTMASK: CH1OM Position            */
#define FTM_OUTMASK_CH1OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH1OM_SHIFT))&FTM_OUTMASK_CH1OM_MASK) /*!< FTM0_OUTMASK                            */
#define FTM_OUTMASK_CH2OM_MASK                   (0x4U)                                              /*!< FTM0_OUTMASK: CH2OM Mask                */
#define FTM_OUTMASK_CH2OM_SHIFT                  (2U)                                                /*!< FTM0_OUTMASK: CH2OM Position            */
#define FTM_OUTMASK_CH2OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH2OM_SHIFT))&FTM_OUTMASK_CH2OM_MASK) /*!< FTM0_OUTMASK                            */
#define FTM_OUTMASK_CH3OM_MASK                   (0x8U)                                              /*!< FTM0_OUTMASK: CH3OM Mask                */
#define FTM_OUTMASK_CH3OM_SHIFT                  (3U)                                                /*!< FTM0_OUTMASK: CH3OM Position            */
#define FTM_OUTMASK_CH3OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH3OM_SHIFT))&FTM_OUTMASK_CH3OM_MASK) /*!< FTM0_OUTMASK                            */
#define FTM_OUTMASK_CH4OM_MASK                   (0x10U)                                             /*!< FTM0_OUTMASK: CH4OM Mask                */
#define FTM_OUTMASK_CH4OM_SHIFT                  (4U)                                                /*!< FTM0_OUTMASK: CH4OM Position            */
#define FTM_OUTMASK_CH4OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH4OM_SHIFT))&FTM_OUTMASK_CH4OM_MASK) /*!< FTM0_OUTMASK                            */
#define FTM_OUTMASK_CH5OM_MASK                   (0x20U)                                             /*!< FTM0_OUTMASK: CH5OM Mask                */
#define FTM_OUTMASK_CH5OM_SHIFT                  (5U)                                                /*!< FTM0_OUTMASK: CH5OM Position            */
#define FTM_OUTMASK_CH5OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH5OM_SHIFT))&FTM_OUTMASK_CH5OM_MASK) /*!< FTM0_OUTMASK                            */
#define FTM_OUTMASK_CH6OM_MASK                   (0x40U)                                             /*!< FTM0_OUTMASK: CH6OM Mask                */
#define FTM_OUTMASK_CH6OM_SHIFT                  (6U)                                                /*!< FTM0_OUTMASK: CH6OM Position            */
#define FTM_OUTMASK_CH6OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH6OM_SHIFT))&FTM_OUTMASK_CH6OM_MASK) /*!< FTM0_OUTMASK                            */
#define FTM_OUTMASK_CH7OM_MASK                   (0x80U)                                             /*!< FTM0_OUTMASK: CH7OM Mask                */
#define FTM_OUTMASK_CH7OM_SHIFT                  (7U)                                                /*!< FTM0_OUTMASK: CH7OM Position            */
#define FTM_OUTMASK_CH7OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH7OM_SHIFT))&FTM_OUTMASK_CH7OM_MASK) /*!< FTM0_OUTMASK                            */
/* ------- COMBINE Bit Fields                       ------ */
#define FTM_COMBINE_COMBINE0_MASK                (0x1U)                                              /*!< FTM0_COMBINE: COMBINE0 Mask             */
#define FTM_COMBINE_COMBINE0_SHIFT               (0U)                                                /*!< FTM0_COMBINE: COMBINE0 Position         */
#define FTM_COMBINE_COMBINE0(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMBINE0_SHIFT))&FTM_COMBINE_COMBINE0_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_COMP0_MASK                   (0x2U)                                              /*!< FTM0_COMBINE: COMP0 Mask                */
#define FTM_COMBINE_COMP0_SHIFT                  (1U)                                                /*!< FTM0_COMBINE: COMP0 Position            */
#define FTM_COMBINE_COMP0(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMP0_SHIFT))&FTM_COMBINE_COMP0_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DECAPEN0_MASK                (0x4U)                                              /*!< FTM0_COMBINE: DECAPEN0 Mask             */
#define FTM_COMBINE_DECAPEN0_SHIFT               (2U)                                                /*!< FTM0_COMBINE: DECAPEN0 Position         */
#define FTM_COMBINE_DECAPEN0(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAPEN0_SHIFT))&FTM_COMBINE_DECAPEN0_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DECAP0_MASK                  (0x8U)                                              /*!< FTM0_COMBINE: DECAP0 Mask               */
#define FTM_COMBINE_DECAP0_SHIFT                 (3U)                                                /*!< FTM0_COMBINE: DECAP0 Position           */
#define FTM_COMBINE_DECAP0(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAP0_SHIFT))&FTM_COMBINE_DECAP0_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DTEN0_MASK                   (0x10U)                                             /*!< FTM0_COMBINE: DTEN0 Mask                */
#define FTM_COMBINE_DTEN0_SHIFT                  (4U)                                                /*!< FTM0_COMBINE: DTEN0 Position            */
#define FTM_COMBINE_DTEN0(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DTEN0_SHIFT))&FTM_COMBINE_DTEN0_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_SYNCEN0_MASK                 (0x20U)                                             /*!< FTM0_COMBINE: SYNCEN0 Mask              */
#define FTM_COMBINE_SYNCEN0_SHIFT                (5U)                                                /*!< FTM0_COMBINE: SYNCEN0 Position          */
#define FTM_COMBINE_SYNCEN0(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_SYNCEN0_SHIFT))&FTM_COMBINE_SYNCEN0_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_FAULTEN0_MASK                (0x40U)                                             /*!< FTM0_COMBINE: FAULTEN0 Mask             */
#define FTM_COMBINE_FAULTEN0_SHIFT               (6U)                                                /*!< FTM0_COMBINE: FAULTEN0 Position         */
#define FTM_COMBINE_FAULTEN0(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_FAULTEN0_SHIFT))&FTM_COMBINE_FAULTEN0_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_COMBINE1_MASK                (0x100U)                                            /*!< FTM0_COMBINE: COMBINE1 Mask             */
#define FTM_COMBINE_COMBINE1_SHIFT               (8U)                                                /*!< FTM0_COMBINE: COMBINE1 Position         */
#define FTM_COMBINE_COMBINE1(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMBINE1_SHIFT))&FTM_COMBINE_COMBINE1_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_COMP1_MASK                   (0x200U)                                            /*!< FTM0_COMBINE: COMP1 Mask                */
#define FTM_COMBINE_COMP1_SHIFT                  (9U)                                                /*!< FTM0_COMBINE: COMP1 Position            */
#define FTM_COMBINE_COMP1(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMP1_SHIFT))&FTM_COMBINE_COMP1_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DECAPEN1_MASK                (0x400U)                                            /*!< FTM0_COMBINE: DECAPEN1 Mask             */
#define FTM_COMBINE_DECAPEN1_SHIFT               (10U)                                               /*!< FTM0_COMBINE: DECAPEN1 Position         */
#define FTM_COMBINE_DECAPEN1(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAPEN1_SHIFT))&FTM_COMBINE_DECAPEN1_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DECAP1_MASK                  (0x800U)                                            /*!< FTM0_COMBINE: DECAP1 Mask               */
#define FTM_COMBINE_DECAP1_SHIFT                 (11U)                                               /*!< FTM0_COMBINE: DECAP1 Position           */
#define FTM_COMBINE_DECAP1(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAP1_SHIFT))&FTM_COMBINE_DECAP1_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DTEN1_MASK                   (0x1000U)                                           /*!< FTM0_COMBINE: DTEN1 Mask                */
#define FTM_COMBINE_DTEN1_SHIFT                  (12U)                                               /*!< FTM0_COMBINE: DTEN1 Position            */
#define FTM_COMBINE_DTEN1(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DTEN1_SHIFT))&FTM_COMBINE_DTEN1_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_SYNCEN1_MASK                 (0x2000U)                                           /*!< FTM0_COMBINE: SYNCEN1 Mask              */
#define FTM_COMBINE_SYNCEN1_SHIFT                (13U)                                               /*!< FTM0_COMBINE: SYNCEN1 Position          */
#define FTM_COMBINE_SYNCEN1(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_SYNCEN1_SHIFT))&FTM_COMBINE_SYNCEN1_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_FAULTEN1_MASK                (0x4000U)                                           /*!< FTM0_COMBINE: FAULTEN1 Mask             */
#define FTM_COMBINE_FAULTEN1_SHIFT               (14U)                                               /*!< FTM0_COMBINE: FAULTEN1 Position         */
#define FTM_COMBINE_FAULTEN1(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_FAULTEN1_SHIFT))&FTM_COMBINE_FAULTEN1_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_COMBINE2_MASK                (0x10000U)                                          /*!< FTM0_COMBINE: COMBINE2 Mask             */
#define FTM_COMBINE_COMBINE2_SHIFT               (16U)                                               /*!< FTM0_COMBINE: COMBINE2 Position         */
#define FTM_COMBINE_COMBINE2(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMBINE2_SHIFT))&FTM_COMBINE_COMBINE2_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_COMP2_MASK                   (0x20000U)                                          /*!< FTM0_COMBINE: COMP2 Mask                */
#define FTM_COMBINE_COMP2_SHIFT                  (17U)                                               /*!< FTM0_COMBINE: COMP2 Position            */
#define FTM_COMBINE_COMP2(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMP2_SHIFT))&FTM_COMBINE_COMP2_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DECAPEN2_MASK                (0x40000U)                                          /*!< FTM0_COMBINE: DECAPEN2 Mask             */
#define FTM_COMBINE_DECAPEN2_SHIFT               (18U)                                               /*!< FTM0_COMBINE: DECAPEN2 Position         */
#define FTM_COMBINE_DECAPEN2(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAPEN2_SHIFT))&FTM_COMBINE_DECAPEN2_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DECAP2_MASK                  (0x80000U)                                          /*!< FTM0_COMBINE: DECAP2 Mask               */
#define FTM_COMBINE_DECAP2_SHIFT                 (19U)                                               /*!< FTM0_COMBINE: DECAP2 Position           */
#define FTM_COMBINE_DECAP2(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAP2_SHIFT))&FTM_COMBINE_DECAP2_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DTEN2_MASK                   (0x100000U)                                         /*!< FTM0_COMBINE: DTEN2 Mask                */
#define FTM_COMBINE_DTEN2_SHIFT                  (20U)                                               /*!< FTM0_COMBINE: DTEN2 Position            */
#define FTM_COMBINE_DTEN2(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DTEN2_SHIFT))&FTM_COMBINE_DTEN2_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_SYNCEN2_MASK                 (0x200000U)                                         /*!< FTM0_COMBINE: SYNCEN2 Mask              */
#define FTM_COMBINE_SYNCEN2_SHIFT                (21U)                                               /*!< FTM0_COMBINE: SYNCEN2 Position          */
#define FTM_COMBINE_SYNCEN2(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_SYNCEN2_SHIFT))&FTM_COMBINE_SYNCEN2_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_FAULTEN2_MASK                (0x400000U)                                         /*!< FTM0_COMBINE: FAULTEN2 Mask             */
#define FTM_COMBINE_FAULTEN2_SHIFT               (22U)                                               /*!< FTM0_COMBINE: FAULTEN2 Position         */
#define FTM_COMBINE_FAULTEN2(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_FAULTEN2_SHIFT))&FTM_COMBINE_FAULTEN2_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_COMBINE3_MASK                (0x1000000U)                                        /*!< FTM0_COMBINE: COMBINE3 Mask             */
#define FTM_COMBINE_COMBINE3_SHIFT               (24U)                                               /*!< FTM0_COMBINE: COMBINE3 Position         */
#define FTM_COMBINE_COMBINE3(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMBINE3_SHIFT))&FTM_COMBINE_COMBINE3_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_COMP3_MASK                   (0x2000000U)                                        /*!< FTM0_COMBINE: COMP3 Mask                */
#define FTM_COMBINE_COMP3_SHIFT                  (25U)                                               /*!< FTM0_COMBINE: COMP3 Position            */
#define FTM_COMBINE_COMP3(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMP3_SHIFT))&FTM_COMBINE_COMP3_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DECAPEN3_MASK                (0x4000000U)                                        /*!< FTM0_COMBINE: DECAPEN3 Mask             */
#define FTM_COMBINE_DECAPEN3_SHIFT               (26U)                                               /*!< FTM0_COMBINE: DECAPEN3 Position         */
#define FTM_COMBINE_DECAPEN3(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAPEN3_SHIFT))&FTM_COMBINE_DECAPEN3_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DECAP3_MASK                  (0x8000000U)                                        /*!< FTM0_COMBINE: DECAP3 Mask               */
#define FTM_COMBINE_DECAP3_SHIFT                 (27U)                                               /*!< FTM0_COMBINE: DECAP3 Position           */
#define FTM_COMBINE_DECAP3(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAP3_SHIFT))&FTM_COMBINE_DECAP3_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DTEN3_MASK                   (0x10000000U)                                       /*!< FTM0_COMBINE: DTEN3 Mask                */
#define FTM_COMBINE_DTEN3_SHIFT                  (28U)                                               /*!< FTM0_COMBINE: DTEN3 Position            */
#define FTM_COMBINE_DTEN3(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DTEN3_SHIFT))&FTM_COMBINE_DTEN3_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_SYNCEN3_MASK                 (0x20000000U)                                       /*!< FTM0_COMBINE: SYNCEN3 Mask              */
#define FTM_COMBINE_SYNCEN3_SHIFT                (29U)                                               /*!< FTM0_COMBINE: SYNCEN3 Position          */
#define FTM_COMBINE_SYNCEN3(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_SYNCEN3_SHIFT))&FTM_COMBINE_SYNCEN3_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_FAULTEN3_MASK                (0x40000000U)                                       /*!< FTM0_COMBINE: FAULTEN3 Mask             */
#define FTM_COMBINE_FAULTEN3_SHIFT               (30U)                                               /*!< FTM0_COMBINE: FAULTEN3 Position         */
#define FTM_COMBINE_FAULTEN3(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_FAULTEN3_SHIFT))&FTM_COMBINE_FAULTEN3_MASK) /*!< FTM0_COMBINE                            */
/* ------- DEADTIME Bit Fields                      ------ */
#define FTM_DEADTIME_DTVAL_MASK                  (0x3FU)                                             /*!< FTM0_DEADTIME: DTVAL Mask               */
#define FTM_DEADTIME_DTVAL_SHIFT                 (0U)                                                /*!< FTM0_DEADTIME: DTVAL Position           */
#define FTM_DEADTIME_DTVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_DEADTIME_DTVAL_SHIFT))&FTM_DEADTIME_DTVAL_MASK) /*!< FTM0_DEADTIME                           */
#define FTM_DEADTIME_DTPS_MASK                   (0xC0U)                                             /*!< FTM0_DEADTIME: DTPS Mask                */
#define FTM_DEADTIME_DTPS_SHIFT                  (6U)                                                /*!< FTM0_DEADTIME: DTPS Position            */
#define FTM_DEADTIME_DTPS(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_DEADTIME_DTPS_SHIFT))&FTM_DEADTIME_DTPS_MASK) /*!< FTM0_DEADTIME                           */
/* ------- EXTTRIG Bit Fields                       ------ */
#define FTM_EXTTRIG_CH2TRIG_MASK                 (0x1U)                                              /*!< FTM0_EXTTRIG: CH2TRIG Mask              */
#define FTM_EXTTRIG_CH2TRIG_SHIFT                (0U)                                                /*!< FTM0_EXTTRIG: CH2TRIG Position          */
#define FTM_EXTTRIG_CH2TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH2TRIG_SHIFT))&FTM_EXTTRIG_CH2TRIG_MASK) /*!< FTM0_EXTTRIG                            */
#define FTM_EXTTRIG_CH3TRIG_MASK                 (0x2U)                                              /*!< FTM0_EXTTRIG: CH3TRIG Mask              */
#define FTM_EXTTRIG_CH3TRIG_SHIFT                (1U)                                                /*!< FTM0_EXTTRIG: CH3TRIG Position          */
#define FTM_EXTTRIG_CH3TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH3TRIG_SHIFT))&FTM_EXTTRIG_CH3TRIG_MASK) /*!< FTM0_EXTTRIG                            */
#define FTM_EXTTRIG_CH4TRIG_MASK                 (0x4U)                                              /*!< FTM0_EXTTRIG: CH4TRIG Mask              */
#define FTM_EXTTRIG_CH4TRIG_SHIFT                (2U)                                                /*!< FTM0_EXTTRIG: CH4TRIG Position          */
#define FTM_EXTTRIG_CH4TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH4TRIG_SHIFT))&FTM_EXTTRIG_CH4TRIG_MASK) /*!< FTM0_EXTTRIG                            */
#define FTM_EXTTRIG_CH5TRIG_MASK                 (0x8U)                                              /*!< FTM0_EXTTRIG: CH5TRIG Mask              */
#define FTM_EXTTRIG_CH5TRIG_SHIFT                (3U)                                                /*!< FTM0_EXTTRIG: CH5TRIG Position          */
#define FTM_EXTTRIG_CH5TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH5TRIG_SHIFT))&FTM_EXTTRIG_CH5TRIG_MASK) /*!< FTM0_EXTTRIG                            */
#define FTM_EXTTRIG_CH0TRIG_MASK                 (0x10U)                                             /*!< FTM0_EXTTRIG: CH0TRIG Mask              */
#define FTM_EXTTRIG_CH0TRIG_SHIFT                (4U)                                                /*!< FTM0_EXTTRIG: CH0TRIG Position          */
#define FTM_EXTTRIG_CH0TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH0TRIG_SHIFT))&FTM_EXTTRIG_CH0TRIG_MASK) /*!< FTM0_EXTTRIG                            */
#define FTM_EXTTRIG_CH1TRIG_MASK                 (0x20U)                                             /*!< FTM0_EXTTRIG: CH1TRIG Mask              */
#define FTM_EXTTRIG_CH1TRIG_SHIFT                (5U)                                                /*!< FTM0_EXTTRIG: CH1TRIG Position          */
#define FTM_EXTTRIG_CH1TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH1TRIG_SHIFT))&FTM_EXTTRIG_CH1TRIG_MASK) /*!< FTM0_EXTTRIG                            */
#define FTM_EXTTRIG_INITTRIGEN_MASK              (0x40U)                                             /*!< FTM0_EXTTRIG: INITTRIGEN Mask           */
#define FTM_EXTTRIG_INITTRIGEN_SHIFT             (6U)                                                /*!< FTM0_EXTTRIG: INITTRIGEN Position       */
#define FTM_EXTTRIG_INITTRIGEN(x)                (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_INITTRIGEN_SHIFT))&FTM_EXTTRIG_INITTRIGEN_MASK) /*!< FTM0_EXTTRIG                            */
#define FTM_EXTTRIG_TRIGF_MASK                   (0x80U)                                             /*!< FTM0_EXTTRIG: TRIGF Mask                */
#define FTM_EXTTRIG_TRIGF_SHIFT                  (7U)                                                /*!< FTM0_EXTTRIG: TRIGF Position            */
#define FTM_EXTTRIG_TRIGF(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_TRIGF_SHIFT))&FTM_EXTTRIG_TRIGF_MASK) /*!< FTM0_EXTTRIG                            */
#define FTM_EXTTRIG_CH6TRIG_MASK                 (0x100U)                                            /*!< FTM0_EXTTRIG: CH6TRIG Mask              */
#define FTM_EXTTRIG_CH6TRIG_SHIFT                (8U)                                                /*!< FTM0_EXTTRIG: CH6TRIG Position          */
#define FTM_EXTTRIG_CH6TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH6TRIG_SHIFT))&FTM_EXTTRIG_CH6TRIG_MASK) /*!< FTM0_EXTTRIG                            */
#define FTM_EXTTRIG_CH7TRIG_MASK                 (0x200U)                                            /*!< FTM0_EXTTRIG: CH7TRIG Mask              */
#define FTM_EXTTRIG_CH7TRIG_SHIFT                (9U)                                                /*!< FTM0_EXTTRIG: CH7TRIG Position          */
#define FTM_EXTTRIG_CH7TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH7TRIG_SHIFT))&FTM_EXTTRIG_CH7TRIG_MASK) /*!< FTM0_EXTTRIG                            */
/* ------- POL Bit Fields                           ------ */
#define FTM_POL_POL0_MASK                        (0x1U)                                              /*!< FTM0_POL: POL0 Mask                     */
#define FTM_POL_POL0_SHIFT                       (0U)                                                /*!< FTM0_POL: POL0 Position                 */
#define FTM_POL_POL0(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL0_SHIFT))&FTM_POL_POL0_MASK) /*!< FTM0_POL                                */
#define FTM_POL_POL1_MASK                        (0x2U)                                              /*!< FTM0_POL: POL1 Mask                     */
#define FTM_POL_POL1_SHIFT                       (1U)                                                /*!< FTM0_POL: POL1 Position                 */
#define FTM_POL_POL1(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL1_SHIFT))&FTM_POL_POL1_MASK) /*!< FTM0_POL                                */
#define FTM_POL_POL2_MASK                        (0x4U)                                              /*!< FTM0_POL: POL2 Mask                     */
#define FTM_POL_POL2_SHIFT                       (2U)                                                /*!< FTM0_POL: POL2 Position                 */
#define FTM_POL_POL2(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL2_SHIFT))&FTM_POL_POL2_MASK) /*!< FTM0_POL                                */
#define FTM_POL_POL3_MASK                        (0x8U)                                              /*!< FTM0_POL: POL3 Mask                     */
#define FTM_POL_POL3_SHIFT                       (3U)                                                /*!< FTM0_POL: POL3 Position                 */
#define FTM_POL_POL3(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL3_SHIFT))&FTM_POL_POL3_MASK) /*!< FTM0_POL                                */
#define FTM_POL_POL4_MASK                        (0x10U)                                             /*!< FTM0_POL: POL4 Mask                     */
#define FTM_POL_POL4_SHIFT                       (4U)                                                /*!< FTM0_POL: POL4 Position                 */
#define FTM_POL_POL4(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL4_SHIFT))&FTM_POL_POL4_MASK) /*!< FTM0_POL                                */
#define FTM_POL_POL5_MASK                        (0x20U)                                             /*!< FTM0_POL: POL5 Mask                     */
#define FTM_POL_POL5_SHIFT                       (5U)                                                /*!< FTM0_POL: POL5 Position                 */
#define FTM_POL_POL5(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL5_SHIFT))&FTM_POL_POL5_MASK) /*!< FTM0_POL                                */
#define FTM_POL_POL6_MASK                        (0x40U)                                             /*!< FTM0_POL: POL6 Mask                     */
#define FTM_POL_POL6_SHIFT                       (6U)                                                /*!< FTM0_POL: POL6 Position                 */
#define FTM_POL_POL6(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL6_SHIFT))&FTM_POL_POL6_MASK) /*!< FTM0_POL                                */
#define FTM_POL_POL7_MASK                        (0x80U)                                             /*!< FTM0_POL: POL7 Mask                     */
#define FTM_POL_POL7_SHIFT                       (7U)                                                /*!< FTM0_POL: POL7 Position                 */
#define FTM_POL_POL7(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL7_SHIFT))&FTM_POL_POL7_MASK) /*!< FTM0_POL                                */
/* ------- FMS Bit Fields                           ------ */
#define FTM_FMS_FAULTF0_MASK                     (0x1U)                                              /*!< FTM0_FMS: FAULTF0 Mask                  */
#define FTM_FMS_FAULTF0_SHIFT                    (0U)                                                /*!< FTM0_FMS: FAULTF0 Position              */
#define FTM_FMS_FAULTF0(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF0_SHIFT))&FTM_FMS_FAULTF0_MASK) /*!< FTM0_FMS                                */
#define FTM_FMS_FAULTF1_MASK                     (0x2U)                                              /*!< FTM0_FMS: FAULTF1 Mask                  */
#define FTM_FMS_FAULTF1_SHIFT                    (1U)                                                /*!< FTM0_FMS: FAULTF1 Position              */
#define FTM_FMS_FAULTF1(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF1_SHIFT))&FTM_FMS_FAULTF1_MASK) /*!< FTM0_FMS                                */
#define FTM_FMS_FAULTF2_MASK                     (0x4U)                                              /*!< FTM0_FMS: FAULTF2 Mask                  */
#define FTM_FMS_FAULTF2_SHIFT                    (2U)                                                /*!< FTM0_FMS: FAULTF2 Position              */
#define FTM_FMS_FAULTF2(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF2_SHIFT))&FTM_FMS_FAULTF2_MASK) /*!< FTM0_FMS                                */
#define FTM_FMS_FAULTF3_MASK                     (0x8U)                                              /*!< FTM0_FMS: FAULTF3 Mask                  */
#define FTM_FMS_FAULTF3_SHIFT                    (3U)                                                /*!< FTM0_FMS: FAULTF3 Position              */
#define FTM_FMS_FAULTF3(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF3_SHIFT))&FTM_FMS_FAULTF3_MASK) /*!< FTM0_FMS                                */
#define FTM_FMS_FAULTIN_MASK                     (0x20U)                                             /*!< FTM0_FMS: FAULTIN Mask                  */
#define FTM_FMS_FAULTIN_SHIFT                    (5U)                                                /*!< FTM0_FMS: FAULTIN Position              */
#define FTM_FMS_FAULTIN(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTIN_SHIFT))&FTM_FMS_FAULTIN_MASK) /*!< FTM0_FMS                                */
#define FTM_FMS_WPEN_MASK                        (0x40U)                                             /*!< FTM0_FMS: WPEN Mask                     */
#define FTM_FMS_WPEN_SHIFT                       (6U)                                                /*!< FTM0_FMS: WPEN Position                 */
#define FTM_FMS_WPEN(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_FMS_WPEN_SHIFT))&FTM_FMS_WPEN_MASK) /*!< FTM0_FMS                                */
#define FTM_FMS_FAULTF_MASK                      (0x80U)                                             /*!< FTM0_FMS: FAULTF Mask                   */
#define FTM_FMS_FAULTF_SHIFT                     (7U)                                                /*!< FTM0_FMS: FAULTF Position               */
#define FTM_FMS_FAULTF(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF_SHIFT))&FTM_FMS_FAULTF_MASK) /*!< FTM0_FMS                                */
/* ------- FILTER Bit Fields                        ------ */
#define FTM_FILTER_CH0FVAL_MASK                  (0xFU)                                              /*!< FTM0_FILTER: CH0FVAL Mask               */
#define FTM_FILTER_CH0FVAL_SHIFT                 (0U)                                                /*!< FTM0_FILTER: CH0FVAL Position           */
#define FTM_FILTER_CH0FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH0FVAL_SHIFT))&FTM_FILTER_CH0FVAL_MASK) /*!< FTM0_FILTER                             */
#define FTM_FILTER_CH1FVAL_MASK                  (0xF0U)                                             /*!< FTM0_FILTER: CH1FVAL Mask               */
#define FTM_FILTER_CH1FVAL_SHIFT                 (4U)                                                /*!< FTM0_FILTER: CH1FVAL Position           */
#define FTM_FILTER_CH1FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH1FVAL_SHIFT))&FTM_FILTER_CH1FVAL_MASK) /*!< FTM0_FILTER                             */
#define FTM_FILTER_CH2FVAL_MASK                  (0xF00U)                                            /*!< FTM0_FILTER: CH2FVAL Mask               */
#define FTM_FILTER_CH2FVAL_SHIFT                 (8U)                                                /*!< FTM0_FILTER: CH2FVAL Position           */
#define FTM_FILTER_CH2FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH2FVAL_SHIFT))&FTM_FILTER_CH2FVAL_MASK) /*!< FTM0_FILTER                             */
#define FTM_FILTER_CH3FVAL_MASK                  (0xF000U)                                           /*!< FTM0_FILTER: CH3FVAL Mask               */
#define FTM_FILTER_CH3FVAL_SHIFT                 (12U)                                               /*!< FTM0_FILTER: CH3FVAL Position           */
#define FTM_FILTER_CH3FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH3FVAL_SHIFT))&FTM_FILTER_CH3FVAL_MASK) /*!< FTM0_FILTER                             */
/* ------- FLTCTRL Bit Fields                       ------ */
#define FTM_FLTCTRL_FAULT0EN_MASK                (0x1U)                                              /*!< FTM0_FLTCTRL: FAULT0EN Mask             */
#define FTM_FLTCTRL_FAULT0EN_SHIFT               (0U)                                                /*!< FTM0_FLTCTRL: FAULT0EN Position         */
#define FTM_FLTCTRL_FAULT0EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FAULT0EN_SHIFT))&FTM_FLTCTRL_FAULT0EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FAULT1EN_MASK                (0x2U)                                              /*!< FTM0_FLTCTRL: FAULT1EN Mask             */
#define FTM_FLTCTRL_FAULT1EN_SHIFT               (1U)                                                /*!< FTM0_FLTCTRL: FAULT1EN Position         */
#define FTM_FLTCTRL_FAULT1EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FAULT1EN_SHIFT))&FTM_FLTCTRL_FAULT1EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FAULT2EN_MASK                (0x4U)                                              /*!< FTM0_FLTCTRL: FAULT2EN Mask             */
#define FTM_FLTCTRL_FAULT2EN_SHIFT               (2U)                                                /*!< FTM0_FLTCTRL: FAULT2EN Position         */
#define FTM_FLTCTRL_FAULT2EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FAULT2EN_SHIFT))&FTM_FLTCTRL_FAULT2EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FAULT3EN_MASK                (0x8U)                                              /*!< FTM0_FLTCTRL: FAULT3EN Mask             */
#define FTM_FLTCTRL_FAULT3EN_SHIFT               (3U)                                                /*!< FTM0_FLTCTRL: FAULT3EN Position         */
#define FTM_FLTCTRL_FAULT3EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FAULT3EN_SHIFT))&FTM_FLTCTRL_FAULT3EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FFLTR0EN_MASK                (0x10U)                                             /*!< FTM0_FLTCTRL: FFLTR0EN Mask             */
#define FTM_FLTCTRL_FFLTR0EN_SHIFT               (4U)                                                /*!< FTM0_FLTCTRL: FFLTR0EN Position         */
#define FTM_FLTCTRL_FFLTR0EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFLTR0EN_SHIFT))&FTM_FLTCTRL_FFLTR0EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FFLTR1EN_MASK                (0x20U)                                             /*!< FTM0_FLTCTRL: FFLTR1EN Mask             */
#define FTM_FLTCTRL_FFLTR1EN_SHIFT               (5U)                                                /*!< FTM0_FLTCTRL: FFLTR1EN Position         */
#define FTM_FLTCTRL_FFLTR1EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFLTR1EN_SHIFT))&FTM_FLTCTRL_FFLTR1EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FFLTR2EN_MASK                (0x40U)                                             /*!< FTM0_FLTCTRL: FFLTR2EN Mask             */
#define FTM_FLTCTRL_FFLTR2EN_SHIFT               (6U)                                                /*!< FTM0_FLTCTRL: FFLTR2EN Position         */
#define FTM_FLTCTRL_FFLTR2EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFLTR2EN_SHIFT))&FTM_FLTCTRL_FFLTR2EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FFLTR3EN_MASK                (0x80U)                                             /*!< FTM0_FLTCTRL: FFLTR3EN Mask             */
#define FTM_FLTCTRL_FFLTR3EN_SHIFT               (7U)                                                /*!< FTM0_FLTCTRL: FFLTR3EN Position         */
#define FTM_FLTCTRL_FFLTR3EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFLTR3EN_SHIFT))&FTM_FLTCTRL_FFLTR3EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FFVAL_MASK                   (0xF00U)                                            /*!< FTM0_FLTCTRL: FFVAL Mask                */
#define FTM_FLTCTRL_FFVAL_SHIFT                  (8U)                                                /*!< FTM0_FLTCTRL: FFVAL Position            */
#define FTM_FLTCTRL_FFVAL(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFVAL_SHIFT))&FTM_FLTCTRL_FFVAL_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FSTATE_MASK                  (0x8000U)                                           /*!< FTM0_FLTCTRL: FSTATE Mask               */
#define FTM_FLTCTRL_FSTATE_SHIFT                 (15U)                                               /*!< FTM0_FLTCTRL: FSTATE Position           */
#define FTM_FLTCTRL_FSTATE(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FSTATE_SHIFT))&FTM_FLTCTRL_FSTATE_MASK) /*!< FTM0_FLTCTRL                            */
/* ------- QDCTRL Bit Fields                        ------ */
#define FTM_QDCTRL_QUADEN_MASK                   (0x1U)                                              /*!< FTM0_QDCTRL: QUADEN Mask                */
#define FTM_QDCTRL_QUADEN_SHIFT                  (0U)                                                /*!< FTM0_QDCTRL: QUADEN Position            */
#define FTM_QDCTRL_QUADEN(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_QUADEN_SHIFT))&FTM_QDCTRL_QUADEN_MASK) /*!< FTM0_QDCTRL                             */
#define FTM_QDCTRL_TOFDIR_MASK                   (0x2U)                                              /*!< FTM0_QDCTRL: TOFDIR Mask                */
#define FTM_QDCTRL_TOFDIR_SHIFT                  (1U)                                                /*!< FTM0_QDCTRL: TOFDIR Position            */
#define FTM_QDCTRL_TOFDIR(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_TOFDIR_SHIFT))&FTM_QDCTRL_TOFDIR_MASK) /*!< FTM0_QDCTRL                             */
#define FTM_QDCTRL_QUADIR_MASK                   (0x4U)                                              /*!< FTM0_QDCTRL: QUADIR Mask                */
#define FTM_QDCTRL_QUADIR_SHIFT                  (2U)                                                /*!< FTM0_QDCTRL: QUADIR Position            */
#define FTM_QDCTRL_QUADIR(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_QUADIR_SHIFT))&FTM_QDCTRL_QUADIR_MASK) /*!< FTM0_QDCTRL                             */
#define FTM_QDCTRL_QUADMODE_MASK                 (0x8U)                                              /*!< FTM0_QDCTRL: QUADMODE Mask              */
#define FTM_QDCTRL_QUADMODE_SHIFT                (3U)                                                /*!< FTM0_QDCTRL: QUADMODE Position          */
#define FTM_QDCTRL_QUADMODE(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_QUADMODE_SHIFT))&FTM_QDCTRL_QUADMODE_MASK) /*!< FTM0_QDCTRL                             */
#define FTM_QDCTRL_PHBPOL_MASK                   (0x10U)                                             /*!< FTM0_QDCTRL: PHBPOL Mask                */
#define FTM_QDCTRL_PHBPOL_SHIFT                  (4U)                                                /*!< FTM0_QDCTRL: PHBPOL Position            */
#define FTM_QDCTRL_PHBPOL(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_PHBPOL_SHIFT))&FTM_QDCTRL_PHBPOL_MASK) /*!< FTM0_QDCTRL                             */
#define FTM_QDCTRL_PHAPOL_MASK                   (0x20U)                                             /*!< FTM0_QDCTRL: PHAPOL Mask                */
#define FTM_QDCTRL_PHAPOL_SHIFT                  (5U)                                                /*!< FTM0_QDCTRL: PHAPOL Position            */
#define FTM_QDCTRL_PHAPOL(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_PHAPOL_SHIFT))&FTM_QDCTRL_PHAPOL_MASK) /*!< FTM0_QDCTRL                             */
#define FTM_QDCTRL_PHBFLTREN_MASK                (0x40U)                                             /*!< FTM0_QDCTRL: PHBFLTREN Mask             */
#define FTM_QDCTRL_PHBFLTREN_SHIFT               (6U)                                                /*!< FTM0_QDCTRL: PHBFLTREN Position         */
#define FTM_QDCTRL_PHBFLTREN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_PHBFLTREN_SHIFT))&FTM_QDCTRL_PHBFLTREN_MASK) /*!< FTM0_QDCTRL                             */
#define FTM_QDCTRL_PHAFLTREN_MASK                (0x80U)                                             /*!< FTM0_QDCTRL: PHAFLTREN Mask             */
#define FTM_QDCTRL_PHAFLTREN_SHIFT               (7U)                                                /*!< FTM0_QDCTRL: PHAFLTREN Position         */
#define FTM_QDCTRL_PHAFLTREN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_PHAFLTREN_SHIFT))&FTM_QDCTRL_PHAFLTREN_MASK) /*!< FTM0_QDCTRL                             */
/* ------- CONF Bit Fields                          ------ */
#define FTM_CONF_LDFQ_MASK                       (0x1FU)                                             /*!< FTM0_CONF: LDFQ Mask                    */
#define FTM_CONF_LDFQ_SHIFT                      (0U)                                                /*!< FTM0_CONF: LDFQ Position                */
#define FTM_CONF_LDFQ(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CONF_LDFQ_SHIFT))&FTM_CONF_LDFQ_MASK) /*!< FTM0_CONF                               */
#define FTM_CONF_BDMMODE_MASK                    (0xC0U)                                             /*!< FTM0_CONF: BDMMODE Mask                 */
#define FTM_CONF_BDMMODE_SHIFT                   (6U)                                                /*!< FTM0_CONF: BDMMODE Position             */
#define FTM_CONF_BDMMODE(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_CONF_BDMMODE_SHIFT))&FTM_CONF_BDMMODE_MASK) /*!< FTM0_CONF                               */
#define FTM_CONF_GTBEEN_MASK                     (0x200U)                                            /*!< FTM0_CONF: GTBEEN Mask                  */
#define FTM_CONF_GTBEEN_SHIFT                    (9U)                                                /*!< FTM0_CONF: GTBEEN Position              */
#define FTM_CONF_GTBEEN(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_CONF_GTBEEN_SHIFT))&FTM_CONF_GTBEEN_MASK) /*!< FTM0_CONF                               */
#define FTM_CONF_GTBEOUT_MASK                    (0x400U)                                            /*!< FTM0_CONF: GTBEOUT Mask                 */
#define FTM_CONF_GTBEOUT_SHIFT                   (10U)                                               /*!< FTM0_CONF: GTBEOUT Position             */
#define FTM_CONF_GTBEOUT(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_CONF_GTBEOUT_SHIFT))&FTM_CONF_GTBEOUT_MASK) /*!< FTM0_CONF                               */
#define FTM_CONF_ITRIGR_MASK                     (0x800U)                                            /*!< FTM0_CONF: ITRIGR Mask                  */
#define FTM_CONF_ITRIGR_SHIFT                    (11U)                                               /*!< FTM0_CONF: ITRIGR Position              */
#define FTM_CONF_ITRIGR(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_CONF_ITRIGR_SHIFT))&FTM_CONF_ITRIGR_MASK) /*!< FTM0_CONF                               */
/* ------- FLTPOL Bit Fields                        ------ */
#define FTM_FLTPOL_FLT0POL_MASK                  (0x1U)                                              /*!< FTM0_FLTPOL: FLT0POL Mask               */
#define FTM_FLTPOL_FLT0POL_SHIFT                 (0U)                                                /*!< FTM0_FLTPOL: FLT0POL Position           */
#define FTM_FLTPOL_FLT0POL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FLTPOL_FLT0POL_SHIFT))&FTM_FLTPOL_FLT0POL_MASK) /*!< FTM0_FLTPOL                             */
#define FTM_FLTPOL_FLT1POL_MASK                  (0x2U)                                              /*!< FTM0_FLTPOL: FLT1POL Mask               */
#define FTM_FLTPOL_FLT1POL_SHIFT                 (1U)                                                /*!< FTM0_FLTPOL: FLT1POL Position           */
#define FTM_FLTPOL_FLT1POL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FLTPOL_FLT1POL_SHIFT))&FTM_FLTPOL_FLT1POL_MASK) /*!< FTM0_FLTPOL                             */
#define FTM_FLTPOL_FLT2POL_MASK                  (0x4U)                                              /*!< FTM0_FLTPOL: FLT2POL Mask               */
#define FTM_FLTPOL_FLT2POL_SHIFT                 (2U)                                                /*!< FTM0_FLTPOL: FLT2POL Position           */
#define FTM_FLTPOL_FLT2POL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FLTPOL_FLT2POL_SHIFT))&FTM_FLTPOL_FLT2POL_MASK) /*!< FTM0_FLTPOL                             */
#define FTM_FLTPOL_FLT3POL_MASK                  (0x8U)                                              /*!< FTM0_FLTPOL: FLT3POL Mask               */
#define FTM_FLTPOL_FLT3POL_SHIFT                 (3U)                                                /*!< FTM0_FLTPOL: FLT3POL Position           */
#define FTM_FLTPOL_FLT3POL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FLTPOL_FLT3POL_SHIFT))&FTM_FLTPOL_FLT3POL_MASK) /*!< FTM0_FLTPOL                             */
/* ------- SYNCONF Bit Fields                       ------ */
#define FTM_SYNCONF_HWTRIGMODE_MASK              (0x1U)                                              /*!< FTM0_SYNCONF: HWTRIGMODE Mask           */
#define FTM_SYNCONF_HWTRIGMODE_SHIFT             (0U)                                                /*!< FTM0_SYNCONF: HWTRIGMODE Position       */
#define FTM_SYNCONF_HWTRIGMODE(x)                (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWTRIGMODE_SHIFT))&FTM_SYNCONF_HWTRIGMODE_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_CNTINC_MASK                  (0x4U)                                              /*!< FTM0_SYNCONF: CNTINC Mask               */
#define FTM_SYNCONF_CNTINC_SHIFT                 (2U)                                                /*!< FTM0_SYNCONF: CNTINC Position           */
#define FTM_SYNCONF_CNTINC(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_CNTINC_SHIFT))&FTM_SYNCONF_CNTINC_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_INVC_MASK                    (0x10U)                                             /*!< FTM0_SYNCONF: INVC Mask                 */
#define FTM_SYNCONF_INVC_SHIFT                   (4U)                                                /*!< FTM0_SYNCONF: INVC Position             */
#define FTM_SYNCONF_INVC(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_INVC_SHIFT))&FTM_SYNCONF_INVC_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_SWOC_MASK                    (0x20U)                                             /*!< FTM0_SYNCONF: SWOC Mask                 */
#define FTM_SYNCONF_SWOC_SHIFT                   (5U)                                                /*!< FTM0_SYNCONF: SWOC Position             */
#define FTM_SYNCONF_SWOC(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWOC_SHIFT))&FTM_SYNCONF_SWOC_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_SYNCMODE_MASK                (0x80U)                                             /*!< FTM0_SYNCONF: SYNCMODE Mask             */
#define FTM_SYNCONF_SYNCMODE_SHIFT               (7U)                                                /*!< FTM0_SYNCONF: SYNCMODE Position         */
#define FTM_SYNCONF_SYNCMODE(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SYNCMODE_SHIFT))&FTM_SYNCONF_SYNCMODE_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_SWRSTCNT_MASK                (0x100U)                                            /*!< FTM0_SYNCONF: SWRSTCNT Mask             */
#define FTM_SYNCONF_SWRSTCNT_SHIFT               (8U)                                                /*!< FTM0_SYNCONF: SWRSTCNT Position         */
#define FTM_SYNCONF_SWRSTCNT(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWRSTCNT_SHIFT))&FTM_SYNCONF_SWRSTCNT_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_SWWRBUF_MASK                 (0x200U)                                            /*!< FTM0_SYNCONF: SWWRBUF Mask              */
#define FTM_SYNCONF_SWWRBUF_SHIFT                (9U)                                                /*!< FTM0_SYNCONF: SWWRBUF Position          */
#define FTM_SYNCONF_SWWRBUF(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWWRBUF_SHIFT))&FTM_SYNCONF_SWWRBUF_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_SWOM_MASK                    (0x400U)                                            /*!< FTM0_SYNCONF: SWOM Mask                 */
#define FTM_SYNCONF_SWOM_SHIFT                   (10U)                                               /*!< FTM0_SYNCONF: SWOM Position             */
#define FTM_SYNCONF_SWOM(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWOM_SHIFT))&FTM_SYNCONF_SWOM_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_SWINVC_MASK                  (0x800U)                                            /*!< FTM0_SYNCONF: SWINVC Mask               */
#define FTM_SYNCONF_SWINVC_SHIFT                 (11U)                                               /*!< FTM0_SYNCONF: SWINVC Position           */
#define FTM_SYNCONF_SWINVC(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWINVC_SHIFT))&FTM_SYNCONF_SWINVC_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_SWSOC_MASK                   (0x1000U)                                           /*!< FTM0_SYNCONF: SWSOC Mask                */
#define FTM_SYNCONF_SWSOC_SHIFT                  (12U)                                               /*!< FTM0_SYNCONF: SWSOC Position            */
#define FTM_SYNCONF_SWSOC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWSOC_SHIFT))&FTM_SYNCONF_SWSOC_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_HWRSTCNT_MASK                (0x10000U)                                          /*!< FTM0_SYNCONF: HWRSTCNT Mask             */
#define FTM_SYNCONF_HWRSTCNT_SHIFT               (16U)                                               /*!< FTM0_SYNCONF: HWRSTCNT Position         */
#define FTM_SYNCONF_HWRSTCNT(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWRSTCNT_SHIFT))&FTM_SYNCONF_HWRSTCNT_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_HWWRBUF_MASK                 (0x20000U)                                          /*!< FTM0_SYNCONF: HWWRBUF Mask              */
#define FTM_SYNCONF_HWWRBUF_SHIFT                (17U)                                               /*!< FTM0_SYNCONF: HWWRBUF Position          */
#define FTM_SYNCONF_HWWRBUF(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWWRBUF_SHIFT))&FTM_SYNCONF_HWWRBUF_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_HWOM_MASK                    (0x40000U)                                          /*!< FTM0_SYNCONF: HWOM Mask                 */
#define FTM_SYNCONF_HWOM_SHIFT                   (18U)                                               /*!< FTM0_SYNCONF: HWOM Position             */
#define FTM_SYNCONF_HWOM(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWOM_SHIFT))&FTM_SYNCONF_HWOM_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_HWINVC_MASK                  (0x80000U)                                          /*!< FTM0_SYNCONF: HWINVC Mask               */
#define FTM_SYNCONF_HWINVC_SHIFT                 (19U)                                               /*!< FTM0_SYNCONF: HWINVC Position           */
#define FTM_SYNCONF_HWINVC(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWINVC_SHIFT))&FTM_SYNCONF_HWINVC_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_HWSOC_MASK                   (0x100000U)                                         /*!< FTM0_SYNCONF: HWSOC Mask                */
#define FTM_SYNCONF_HWSOC_SHIFT                  (20U)                                               /*!< FTM0_SYNCONF: HWSOC Position            */
#define FTM_SYNCONF_HWSOC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWSOC_SHIFT))&FTM_SYNCONF_HWSOC_MASK) /*!< FTM0_SYNCONF                            */
/* ------- INVCTRL Bit Fields                       ------ */
#define FTM_INVCTRL_INV0EN_MASK                  (0x1U)                                              /*!< FTM0_INVCTRL: INV0EN Mask               */
#define FTM_INVCTRL_INV0EN_SHIFT                 (0U)                                                /*!< FTM0_INVCTRL: INV0EN Position           */
#define FTM_INVCTRL_INV0EN(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_INVCTRL_INV0EN_SHIFT))&FTM_INVCTRL_INV0EN_MASK) /*!< FTM0_INVCTRL                            */
#define FTM_INVCTRL_INV1EN_MASK                  (0x2U)                                              /*!< FTM0_INVCTRL: INV1EN Mask               */
#define FTM_INVCTRL_INV1EN_SHIFT                 (1U)                                                /*!< FTM0_INVCTRL: INV1EN Position           */
#define FTM_INVCTRL_INV1EN(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_INVCTRL_INV1EN_SHIFT))&FTM_INVCTRL_INV1EN_MASK) /*!< FTM0_INVCTRL                            */
#define FTM_INVCTRL_INV2EN_MASK                  (0x4U)                                              /*!< FTM0_INVCTRL: INV2EN Mask               */
#define FTM_INVCTRL_INV2EN_SHIFT                 (2U)                                                /*!< FTM0_INVCTRL: INV2EN Position           */
#define FTM_INVCTRL_INV2EN(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_INVCTRL_INV2EN_SHIFT))&FTM_INVCTRL_INV2EN_MASK) /*!< FTM0_INVCTRL                            */
#define FTM_INVCTRL_INV3EN_MASK                  (0x8U)                                              /*!< FTM0_INVCTRL: INV3EN Mask               */
#define FTM_INVCTRL_INV3EN_SHIFT                 (3U)                                                /*!< FTM0_INVCTRL: INV3EN Position           */
#define FTM_INVCTRL_INV3EN(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_INVCTRL_INV3EN_SHIFT))&FTM_INVCTRL_INV3EN_MASK) /*!< FTM0_INVCTRL                            */
/* ------- SWOCTRL Bit Fields                       ------ */
#define FTM_SWOCTRL_CH0OC_MASK                   (0x1U)                                              /*!< FTM0_SWOCTRL: CH0OC Mask                */
#define FTM_SWOCTRL_CH0OC_SHIFT                  (0U)                                                /*!< FTM0_SWOCTRL: CH0OC Position            */
#define FTM_SWOCTRL_CH0OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH0OC_SHIFT))&FTM_SWOCTRL_CH0OC_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH1OC_MASK                   (0x2U)                                              /*!< FTM0_SWOCTRL: CH1OC Mask                */
#define FTM_SWOCTRL_CH1OC_SHIFT                  (1U)                                                /*!< FTM0_SWOCTRL: CH1OC Position            */
#define FTM_SWOCTRL_CH1OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH1OC_SHIFT))&FTM_SWOCTRL_CH1OC_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH2OC_MASK                   (0x4U)                                              /*!< FTM0_SWOCTRL: CH2OC Mask                */
#define FTM_SWOCTRL_CH2OC_SHIFT                  (2U)                                                /*!< FTM0_SWOCTRL: CH2OC Position            */
#define FTM_SWOCTRL_CH2OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH2OC_SHIFT))&FTM_SWOCTRL_CH2OC_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH3OC_MASK                   (0x8U)                                              /*!< FTM0_SWOCTRL: CH3OC Mask                */
#define FTM_SWOCTRL_CH3OC_SHIFT                  (3U)                                                /*!< FTM0_SWOCTRL: CH3OC Position            */
#define FTM_SWOCTRL_CH3OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH3OC_SHIFT))&FTM_SWOCTRL_CH3OC_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH4OC_MASK                   (0x10U)                                             /*!< FTM0_SWOCTRL: CH4OC Mask                */
#define FTM_SWOCTRL_CH4OC_SHIFT                  (4U)                                                /*!< FTM0_SWOCTRL: CH4OC Position            */
#define FTM_SWOCTRL_CH4OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH4OC_SHIFT))&FTM_SWOCTRL_CH4OC_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH5OC_MASK                   (0x20U)                                             /*!< FTM0_SWOCTRL: CH5OC Mask                */
#define FTM_SWOCTRL_CH5OC_SHIFT                  (5U)                                                /*!< FTM0_SWOCTRL: CH5OC Position            */
#define FTM_SWOCTRL_CH5OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH5OC_SHIFT))&FTM_SWOCTRL_CH5OC_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH6OC_MASK                   (0x40U)                                             /*!< FTM0_SWOCTRL: CH6OC Mask                */
#define FTM_SWOCTRL_CH6OC_SHIFT                  (6U)                                                /*!< FTM0_SWOCTRL: CH6OC Position            */
#define FTM_SWOCTRL_CH6OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH6OC_SHIFT))&FTM_SWOCTRL_CH6OC_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH7OC_MASK                   (0x80U)                                             /*!< FTM0_SWOCTRL: CH7OC Mask                */
#define FTM_SWOCTRL_CH7OC_SHIFT                  (7U)                                                /*!< FTM0_SWOCTRL: CH7OC Position            */
#define FTM_SWOCTRL_CH7OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH7OC_SHIFT))&FTM_SWOCTRL_CH7OC_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH0OCV_MASK                  (0x100U)                                            /*!< FTM0_SWOCTRL: CH0OCV Mask               */
#define FTM_SWOCTRL_CH0OCV_SHIFT                 (8U)                                                /*!< FTM0_SWOCTRL: CH0OCV Position           */
#define FTM_SWOCTRL_CH0OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH0OCV_SHIFT))&FTM_SWOCTRL_CH0OCV_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH1OCV_MASK                  (0x200U)                                            /*!< FTM0_SWOCTRL: CH1OCV Mask               */
#define FTM_SWOCTRL_CH1OCV_SHIFT                 (9U)                                                /*!< FTM0_SWOCTRL: CH1OCV Position           */
#define FTM_SWOCTRL_CH1OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH1OCV_SHIFT))&FTM_SWOCTRL_CH1OCV_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH2OCV_MASK                  (0x400U)                                            /*!< FTM0_SWOCTRL: CH2OCV Mask               */
#define FTM_SWOCTRL_CH2OCV_SHIFT                 (10U)                                               /*!< FTM0_SWOCTRL: CH2OCV Position           */
#define FTM_SWOCTRL_CH2OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH2OCV_SHIFT))&FTM_SWOCTRL_CH2OCV_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH3OCV_MASK                  (0x800U)                                            /*!< FTM0_SWOCTRL: CH3OCV Mask               */
#define FTM_SWOCTRL_CH3OCV_SHIFT                 (11U)                                               /*!< FTM0_SWOCTRL: CH3OCV Position           */
#define FTM_SWOCTRL_CH3OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH3OCV_SHIFT))&FTM_SWOCTRL_CH3OCV_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH4OCV_MASK                  (0x1000U)                                           /*!< FTM0_SWOCTRL: CH4OCV Mask               */
#define FTM_SWOCTRL_CH4OCV_SHIFT                 (12U)                                               /*!< FTM0_SWOCTRL: CH4OCV Position           */
#define FTM_SWOCTRL_CH4OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH4OCV_SHIFT))&FTM_SWOCTRL_CH4OCV_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH5OCV_MASK                  (0x2000U)                                           /*!< FTM0_SWOCTRL: CH5OCV Mask               */
#define FTM_SWOCTRL_CH5OCV_SHIFT                 (13U)                                               /*!< FTM0_SWOCTRL: CH5OCV Position           */
#define FTM_SWOCTRL_CH5OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH5OCV_SHIFT))&FTM_SWOCTRL_CH5OCV_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH6OCV_MASK                  (0x4000U)                                           /*!< FTM0_SWOCTRL: CH6OCV Mask               */
#define FTM_SWOCTRL_CH6OCV_SHIFT                 (14U)                                               /*!< FTM0_SWOCTRL: CH6OCV Position           */
#define FTM_SWOCTRL_CH6OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH6OCV_SHIFT))&FTM_SWOCTRL_CH6OCV_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH7OCV_MASK                  (0x8000U)                                           /*!< FTM0_SWOCTRL: CH7OCV Mask               */
#define FTM_SWOCTRL_CH7OCV_SHIFT                 (15U)                                               /*!< FTM0_SWOCTRL: CH7OCV Position           */
#define FTM_SWOCTRL_CH7OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH7OCV_SHIFT))&FTM_SWOCTRL_CH7OCV_MASK) /*!< FTM0_SWOCTRL                            */
/* ------- PWMLOAD Bit Fields                       ------ */
#define FTM_PWMLOAD_CH0SEL_MASK                  (0x1U)                                              /*!< FTM0_PWMLOAD: CH0SEL Mask               */
#define FTM_PWMLOAD_CH0SEL_SHIFT                 (0U)                                                /*!< FTM0_PWMLOAD: CH0SEL Position           */
#define FTM_PWMLOAD_CH0SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH0SEL_SHIFT))&FTM_PWMLOAD_CH0SEL_MASK) /*!< FTM0_PWMLOAD                            */
#define FTM_PWMLOAD_CH1SEL_MASK                  (0x2U)                                              /*!< FTM0_PWMLOAD: CH1SEL Mask               */
#define FTM_PWMLOAD_CH1SEL_SHIFT                 (1U)                                                /*!< FTM0_PWMLOAD: CH1SEL Position           */
#define FTM_PWMLOAD_CH1SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH1SEL_SHIFT))&FTM_PWMLOAD_CH1SEL_MASK) /*!< FTM0_PWMLOAD                            */
#define FTM_PWMLOAD_CH2SEL_MASK                  (0x4U)                                              /*!< FTM0_PWMLOAD: CH2SEL Mask               */
#define FTM_PWMLOAD_CH2SEL_SHIFT                 (2U)                                                /*!< FTM0_PWMLOAD: CH2SEL Position           */
#define FTM_PWMLOAD_CH2SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH2SEL_SHIFT))&FTM_PWMLOAD_CH2SEL_MASK) /*!< FTM0_PWMLOAD                            */
#define FTM_PWMLOAD_CH3SEL_MASK                  (0x8U)                                              /*!< FTM0_PWMLOAD: CH3SEL Mask               */
#define FTM_PWMLOAD_CH3SEL_SHIFT                 (3U)                                                /*!< FTM0_PWMLOAD: CH3SEL Position           */
#define FTM_PWMLOAD_CH3SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH3SEL_SHIFT))&FTM_PWMLOAD_CH3SEL_MASK) /*!< FTM0_PWMLOAD                            */
#define FTM_PWMLOAD_CH4SEL_MASK                  (0x10U)                                             /*!< FTM0_PWMLOAD: CH4SEL Mask               */
#define FTM_PWMLOAD_CH4SEL_SHIFT                 (4U)                                                /*!< FTM0_PWMLOAD: CH4SEL Position           */
#define FTM_PWMLOAD_CH4SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH4SEL_SHIFT))&FTM_PWMLOAD_CH4SEL_MASK) /*!< FTM0_PWMLOAD                            */
#define FTM_PWMLOAD_CH5SEL_MASK                  (0x20U)                                             /*!< FTM0_PWMLOAD: CH5SEL Mask               */
#define FTM_PWMLOAD_CH5SEL_SHIFT                 (5U)                                                /*!< FTM0_PWMLOAD: CH5SEL Position           */
#define FTM_PWMLOAD_CH5SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH5SEL_SHIFT))&FTM_PWMLOAD_CH5SEL_MASK) /*!< FTM0_PWMLOAD                            */
#define FTM_PWMLOAD_CH6SEL_MASK                  (0x40U)                                             /*!< FTM0_PWMLOAD: CH6SEL Mask               */
#define FTM_PWMLOAD_CH6SEL_SHIFT                 (6U)                                                /*!< FTM0_PWMLOAD: CH6SEL Position           */
#define FTM_PWMLOAD_CH6SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH6SEL_SHIFT))&FTM_PWMLOAD_CH6SEL_MASK) /*!< FTM0_PWMLOAD                            */
#define FTM_PWMLOAD_CH7SEL_MASK                  (0x80U)                                             /*!< FTM0_PWMLOAD: CH7SEL Mask               */
#define FTM_PWMLOAD_CH7SEL_SHIFT                 (7U)                                                /*!< FTM0_PWMLOAD: CH7SEL Position           */
#define FTM_PWMLOAD_CH7SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH7SEL_SHIFT))&FTM_PWMLOAD_CH7SEL_MASK) /*!< FTM0_PWMLOAD                            */
#define FTM_PWMLOAD_HCSEL_MASK                   (0x100U)                                            /*!< FTM0_PWMLOAD: HCSEL Mask                */
#define FTM_PWMLOAD_HCSEL_SHIFT                  (8U)                                                /*!< FTM0_PWMLOAD: HCSEL Position            */
#define FTM_PWMLOAD_HCSEL(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_HCSEL_SHIFT))&FTM_PWMLOAD_HCSEL_MASK) /*!< FTM0_PWMLOAD                            */
#define FTM_PWMLOAD_LDOK_MASK                    (0x200U)                                            /*!< FTM0_PWMLOAD: LDOK Mask                 */
#define FTM_PWMLOAD_LDOK_SHIFT                   (9U)                                                /*!< FTM0_PWMLOAD: LDOK Position             */
#define FTM_PWMLOAD_LDOK(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_LDOK_SHIFT))&FTM_PWMLOAD_LDOK_MASK) /*!< FTM0_PWMLOAD                            */
#define FTM_PWMLOAD_GLEN_MASK                    (0x400U)                                            /*!< FTM0_PWMLOAD: GLEN Mask                 */
#define FTM_PWMLOAD_GLEN_SHIFT                   (10U)                                               /*!< FTM0_PWMLOAD: GLEN Position             */
#define FTM_PWMLOAD_GLEN(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_GLEN_SHIFT))&FTM_PWMLOAD_GLEN_MASK) /*!< FTM0_PWMLOAD                            */
#define FTM_PWMLOAD_GLDOK_MASK                   (0x800U)                                            /*!< FTM0_PWMLOAD: GLDOK Mask                */
#define FTM_PWMLOAD_GLDOK_SHIFT                  (11U)                                               /*!< FTM0_PWMLOAD: GLDOK Position            */
#define FTM_PWMLOAD_GLDOK(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_GLDOK_SHIFT))&FTM_PWMLOAD_GLDOK_MASK) /*!< FTM0_PWMLOAD                            */
/* ------- HCR Bit Fields                           ------ */
#define FTM_HCR_HCVAL_MASK                       (0xFFFFU)                                           /*!< FTM0_HCR: HCVAL Mask                    */
#define FTM_HCR_HCVAL_SHIFT                      (0U)                                                /*!< FTM0_HCR: HCVAL Position                */
#define FTM_HCR_HCVAL(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_HCR_HCVAL_SHIFT))&FTM_HCR_HCVAL_MASK) /*!< FTM0_HCR                                */
/* ------- MOD_MIRROR Bit Fields                    ------ */
#define FTM_MOD_MIRROR_FRACMOD_MASK              (0xF800U)                                           /*!< FTM0_MOD_MIRROR: FRACMOD Mask           */
#define FTM_MOD_MIRROR_FRACMOD_SHIFT             (11U)                                               /*!< FTM0_MOD_MIRROR: FRACMOD Position       */
#define FTM_MOD_MIRROR_FRACMOD(x)                (((uint32_t)(((uint32_t)(x))<<FTM_MOD_MIRROR_FRACMOD_SHIFT))&FTM_MOD_MIRROR_FRACMOD_MASK) /*!< FTM0_MOD_MIRROR                         */
#define FTM_MOD_MIRROR_MOD_MASK                  (0xFFFF0000U)                                       /*!< FTM0_MOD_MIRROR: MOD Mask               */
#define FTM_MOD_MIRROR_MOD_SHIFT                 (16U)                                               /*!< FTM0_MOD_MIRROR: MOD Position           */
#define FTM_MOD_MIRROR_MOD(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_MOD_MIRROR_MOD_SHIFT))&FTM_MOD_MIRROR_MOD_MASK) /*!< FTM0_MOD_MIRROR                         */
/* ------- C0V_MIRROR Bit Fields                    ------ */
#define FTM_C0V_MIRROR_FRACVAL_MASK              (0xF800U)                                           /*!< FTM0_C0V_MIRROR: FRACVAL Mask           */
#define FTM_C0V_MIRROR_FRACVAL_SHIFT             (11U)                                               /*!< FTM0_C0V_MIRROR: FRACVAL Position       */
#define FTM_C0V_MIRROR_FRACVAL(x)                (((uint32_t)(((uint32_t)(x))<<FTM_C0V_MIRROR_FRACVAL_SHIFT))&FTM_C0V_MIRROR_FRACVAL_MASK) /*!< FTM0_C0V_MIRROR                         */
#define FTM_C0V_MIRROR_VAL_MASK                  (0xFFFF0000U)                                       /*!< FTM0_C0V_MIRROR: VAL Mask               */
#define FTM_C0V_MIRROR_VAL_SHIFT                 (16U)                                               /*!< FTM0_C0V_MIRROR: VAL Position           */
#define FTM_C0V_MIRROR_VAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_C0V_MIRROR_VAL_SHIFT))&FTM_C0V_MIRROR_VAL_MASK) /*!< FTM0_C0V_MIRROR                         */
/* ------- C1V_MIRROR Bit Fields                    ------ */
#define FTM_C1V_MIRROR_FRACVAL_MASK              (0xF800U)                                           /*!< FTM0_C1V_MIRROR: FRACVAL Mask           */
#define FTM_C1V_MIRROR_FRACVAL_SHIFT             (11U)                                               /*!< FTM0_C1V_MIRROR: FRACVAL Position       */
#define FTM_C1V_MIRROR_FRACVAL(x)                (((uint32_t)(((uint32_t)(x))<<FTM_C1V_MIRROR_FRACVAL_SHIFT))&FTM_C1V_MIRROR_FRACVAL_MASK) /*!< FTM0_C1V_MIRROR                         */
#define FTM_C1V_MIRROR_VAL_MASK                  (0xFFFF0000U)                                       /*!< FTM0_C1V_MIRROR: VAL Mask               */
#define FTM_C1V_MIRROR_VAL_SHIFT                 (16U)                                               /*!< FTM0_C1V_MIRROR: VAL Position           */
#define FTM_C1V_MIRROR_VAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_C1V_MIRROR_VAL_SHIFT))&FTM_C1V_MIRROR_VAL_MASK) /*!< FTM0_C1V_MIRROR                         */
/* ------- C2V_MIRROR Bit Fields                    ------ */
#define FTM_C2V_MIRROR_FRACVAL_MASK              (0xF800U)                                           /*!< FTM0_C2V_MIRROR: FRACVAL Mask           */
#define FTM_C2V_MIRROR_FRACVAL_SHIFT             (11U)                                               /*!< FTM0_C2V_MIRROR: FRACVAL Position       */
#define FTM_C2V_MIRROR_FRACVAL(x)                (((uint32_t)(((uint32_t)(x))<<FTM_C2V_MIRROR_FRACVAL_SHIFT))&FTM_C2V_MIRROR_FRACVAL_MASK) /*!< FTM0_C2V_MIRROR                         */
#define FTM_C2V_MIRROR_VAL_MASK                  (0xFFFF0000U)                                       /*!< FTM0_C2V_MIRROR: VAL Mask               */
#define FTM_C2V_MIRROR_VAL_SHIFT                 (16U)                                               /*!< FTM0_C2V_MIRROR: VAL Position           */
#define FTM_C2V_MIRROR_VAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_C2V_MIRROR_VAL_SHIFT))&FTM_C2V_MIRROR_VAL_MASK) /*!< FTM0_C2V_MIRROR                         */
/* ------- C3V_MIRROR Bit Fields                    ------ */
#define FTM_C3V_MIRROR_FRACVAL_MASK              (0xF800U)                                           /*!< FTM0_C3V_MIRROR: FRACVAL Mask           */
#define FTM_C3V_MIRROR_FRACVAL_SHIFT             (11U)                                               /*!< FTM0_C3V_MIRROR: FRACVAL Position       */
#define FTM_C3V_MIRROR_FRACVAL(x)                (((uint32_t)(((uint32_t)(x))<<FTM_C3V_MIRROR_FRACVAL_SHIFT))&FTM_C3V_MIRROR_FRACVAL_MASK) /*!< FTM0_C3V_MIRROR                         */
#define FTM_C3V_MIRROR_VAL_MASK                  (0xFFFF0000U)                                       /*!< FTM0_C3V_MIRROR: VAL Mask               */
#define FTM_C3V_MIRROR_VAL_SHIFT                 (16U)                                               /*!< FTM0_C3V_MIRROR: VAL Position           */
#define FTM_C3V_MIRROR_VAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_C3V_MIRROR_VAL_SHIFT))&FTM_C3V_MIRROR_VAL_MASK) /*!< FTM0_C3V_MIRROR                         */
/* ------- C4V_MIRROR Bit Fields                    ------ */
#define FTM_C4V_MIRROR_FRACVAL_MASK              (0xF800U)                                           /*!< FTM0_C4V_MIRROR: FRACVAL Mask           */
#define FTM_C4V_MIRROR_FRACVAL_SHIFT             (11U)                                               /*!< FTM0_C4V_MIRROR: FRACVAL Position       */
#define FTM_C4V_MIRROR_FRACVAL(x)                (((uint32_t)(((uint32_t)(x))<<FTM_C4V_MIRROR_FRACVAL_SHIFT))&FTM_C4V_MIRROR_FRACVAL_MASK) /*!< FTM0_C4V_MIRROR                         */
#define FTM_C4V_MIRROR_VAL_MASK                  (0xFFFF0000U)                                       /*!< FTM0_C4V_MIRROR: VAL Mask               */
#define FTM_C4V_MIRROR_VAL_SHIFT                 (16U)                                               /*!< FTM0_C4V_MIRROR: VAL Position           */
#define FTM_C4V_MIRROR_VAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_C4V_MIRROR_VAL_SHIFT))&FTM_C4V_MIRROR_VAL_MASK) /*!< FTM0_C4V_MIRROR                         */
/* ------- C5V_MIRROR Bit Fields                    ------ */
#define FTM_C5V_MIRROR_FRACVAL_MASK              (0xF800U)                                           /*!< FTM0_C5V_MIRROR: FRACVAL Mask           */
#define FTM_C5V_MIRROR_FRACVAL_SHIFT             (11U)                                               /*!< FTM0_C5V_MIRROR: FRACVAL Position       */
#define FTM_C5V_MIRROR_FRACVAL(x)                (((uint32_t)(((uint32_t)(x))<<FTM_C5V_MIRROR_FRACVAL_SHIFT))&FTM_C5V_MIRROR_FRACVAL_MASK) /*!< FTM0_C5V_MIRROR                         */
#define FTM_C5V_MIRROR_VAL_MASK                  (0xFFFF0000U)                                       /*!< FTM0_C5V_MIRROR: VAL Mask               */
#define FTM_C5V_MIRROR_VAL_SHIFT                 (16U)                                               /*!< FTM0_C5V_MIRROR: VAL Position           */
#define FTM_C5V_MIRROR_VAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_C5V_MIRROR_VAL_SHIFT))&FTM_C5V_MIRROR_VAL_MASK) /*!< FTM0_C5V_MIRROR                         */
/* ------- C6V_MIRROR Bit Fields                    ------ */
#define FTM_C6V_MIRROR_FRACVAL_MASK              (0xF800U)                                           /*!< FTM0_C6V_MIRROR: FRACVAL Mask           */
#define FTM_C6V_MIRROR_FRACVAL_SHIFT             (11U)                                               /*!< FTM0_C6V_MIRROR: FRACVAL Position       */
#define FTM_C6V_MIRROR_FRACVAL(x)                (((uint32_t)(((uint32_t)(x))<<FTM_C6V_MIRROR_FRACVAL_SHIFT))&FTM_C6V_MIRROR_FRACVAL_MASK) /*!< FTM0_C6V_MIRROR                         */
#define FTM_C6V_MIRROR_VAL_MASK                  (0xFFFF0000U)                                       /*!< FTM0_C6V_MIRROR: VAL Mask               */
#define FTM_C6V_MIRROR_VAL_SHIFT                 (16U)                                               /*!< FTM0_C6V_MIRROR: VAL Position           */
#define FTM_C6V_MIRROR_VAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_C6V_MIRROR_VAL_SHIFT))&FTM_C6V_MIRROR_VAL_MASK) /*!< FTM0_C6V_MIRROR                         */
/* ------- C7V_MIRROR Bit Fields                    ------ */
#define FTM_C7V_MIRROR_FRACVAL_MASK              (0xF800U)                                           /*!< FTM0_C7V_MIRROR: FRACVAL Mask           */
#define FTM_C7V_MIRROR_FRACVAL_SHIFT             (11U)                                               /*!< FTM0_C7V_MIRROR: FRACVAL Position       */
#define FTM_C7V_MIRROR_FRACVAL(x)                (((uint32_t)(((uint32_t)(x))<<FTM_C7V_MIRROR_FRACVAL_SHIFT))&FTM_C7V_MIRROR_FRACVAL_MASK) /*!< FTM0_C7V_MIRROR                         */
#define FTM_C7V_MIRROR_VAL_MASK                  (0xFFFF0000U)                                       /*!< FTM0_C7V_MIRROR: VAL Mask               */
#define FTM_C7V_MIRROR_VAL_SHIFT                 (16U)                                               /*!< FTM0_C7V_MIRROR: VAL Position           */
#define FTM_C7V_MIRROR_VAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_C7V_MIRROR_VAL_SHIFT))&FTM_C7V_MIRROR_VAL_MASK) /*!< FTM0_C7V_MIRROR                         */
/**
 * @} */ /* End group FTM_Register_Masks_GROUP 
 */

/* FTM0 - Peripheral instance base addresses */
#define FTM0_BasePtr                   0x40038000UL //!< Peripheral base address
#define FTM0                           ((FTM0_Type *) FTM0_BasePtr) //!< Freescale base pointer
#define FTM0_BASE_PTR                  (FTM0) //!< Freescale style base pointer
/**
 * @} */ /* End group FTM_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup FTM_Peripheral_access_layer_GROUP FTM Peripheral Access Layer
* @brief C Struct for FTM
* @{
*/

/* ================================================================================ */
/* ================           FTM1 (file:FTM1_MKE15Z7)             ================ */
/* ================================================================================ */

/**
 * @brief FlexTimer Module
 */
/**
* @addtogroup FTM_structs_GROUP FTM struct
* @brief Struct for FTM
* @{
*/
typedef struct {                                /*       FTM1 Structure                                               */
   __IO uint32_t  SC;                           /**< 0000: Status And Control                                           */
   __IO uint32_t  CNT;                          /**< 0004: Counter                                                      */
   __IO uint32_t  MOD;                          /**< 0008: Modulo                                                       */
   struct {
      __IO uint32_t  CnSC;                      /**< 000C: Channel (n) Status And Control                               */
      __IO uint32_t  CnV;                       /**< 0010: Channel (n) Value                                            */
   } CONTROLS[4];                               /**< 000C: (cluster: size=0x0020, 32)                                   */
        uint8_t   RESERVED_1[32];              
   __IO uint32_t  CNTIN;                        /**< 004C: Counter Initial Value                                        */
   __IO uint32_t  STATUS;                       /**< 0050: Capture And Compare Status                                   */
   __IO uint32_t  MODE;                         /**< 0054: Features Mode Selection                                      */
   __IO uint32_t  SYNC;                         /**< 0058: Synchronization                                              */
   __IO uint32_t  OUTINIT;                      /**< 005C: Initial State For Channels Output                            */
   __IO uint32_t  OUTMASK;                      /**< 0060: Output Mask                                                  */
   __IO uint32_t  COMBINE;                      /**< 0064: Function For Linked Channels                                 */
   __IO uint32_t  DEADTIME;                     /**< 0068: Deadtime Configuration                                       */
   __IO uint32_t  EXTTRIG;                      /**< 006C: FTM External Trigger                                         */
   __IO uint32_t  POL;                          /**< 0070: Channels Polarity                                            */
   __IO uint32_t  FMS;                          /**< 0074: Fault Mode Status                                            */
   __IO uint32_t  FILTER;                       /**< 0078: Input Capture Filter Control                                 */
   __IO uint32_t  FLTCTRL;                      /**< 007C: Fault Control                                                */
   __IO uint32_t  QDCTRL;                       /**< 0080: Quadrature Decoder Control And Status                        */
   __IO uint32_t  CONF;                         /**< 0084: Configuration                                                */
   __IO uint32_t  FLTPOL;                       /**< 0088: FTM Fault Input Polarity                                     */
   __IO uint32_t  SYNCONF;                      /**< 008C: Synchronization Configuration                                */
   __IO uint32_t  INVCTRL;                      /**< 0090: FTM Inverting Control                                        */
   __IO uint32_t  SWOCTRL;                      /**< 0094: FTM Software Output Control                                  */
   __IO uint32_t  PWMLOAD;                      /**< 0098: FTM PWM Load                                                 */
   __IO uint32_t  HCR;                          /**< 009C: Half Cycle Register                                          */
        uint8_t   RESERVED_2[352];             
   __IO uint32_t  MOD_MIRROR;                   /**< 0200: Mirror of Modulo Value                                       */
   __IO uint32_t  C0V_MIRROR;                   /**< 0204: Mirror of Channel (n) Match Value                            */
   __IO uint32_t  C1V_MIRROR;                   /**< 0208: Mirror of Channel (n) Match Value                            */
   __IO uint32_t  C2V_MIRROR;                   /**< 020C: Mirror of Channel (n) Match Value                            */
   __IO uint32_t  C3V_MIRROR;                   /**< 0210: Mirror of Channel (n) Match Value                            */
   __IO uint32_t  C4V_MIRROR;                   /**< 0214: Mirror of Channel (n) Match Value                            */
   __IO uint32_t  C5V_MIRROR;                   /**< 0218: Mirror of Channel (n) Match Value                            */
   __IO uint32_t  C6V_MIRROR;                   /**< 021C: Mirror of Channel (n) Match Value                            */
   __IO uint32_t  C7V_MIRROR;                   /**< 0220: Mirror of Channel (n) Match Value                            */
} FTM1_Type;

/**
 * @} */ /* End group FTM_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'FTM1' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup FTM_Register_Masks_GROUP FTM Register Masks
* @brief Register Masks for FTM
* @{
*/
/* ------- SC Bit Fields                            ------ */
/* ------- CNT Bit Fields                           ------ */
/* ------- MOD Bit Fields                           ------ */
/* ------- CnSC Bit Fields                          ------ */
/* ------- CnV Bit Fields                           ------ */
/* ------- CNTIN Bit Fields                         ------ */
/* ------- STATUS Bit Fields                        ------ */
/* ------- MODE Bit Fields                          ------ */
/* ------- SYNC Bit Fields                          ------ */
/* ------- OUTINIT Bit Fields                       ------ */
/* ------- OUTMASK Bit Fields                       ------ */
/* ------- COMBINE Bit Fields                       ------ */
/* ------- DEADTIME Bit Fields                      ------ */
/* ------- EXTTRIG Bit Fields                       ------ */
/* ------- POL Bit Fields                           ------ */
/* ------- FMS Bit Fields                           ------ */
/* ------- FILTER Bit Fields                        ------ */
/* ------- FLTCTRL Bit Fields                       ------ */
/* ------- QDCTRL Bit Fields                        ------ */
/* ------- CONF Bit Fields                          ------ */
/* ------- FLTPOL Bit Fields                        ------ */
/* ------- SYNCONF Bit Fields                       ------ */
/* ------- INVCTRL Bit Fields                       ------ */
/* ------- SWOCTRL Bit Fields                       ------ */
/* ------- PWMLOAD Bit Fields                       ------ */
/* ------- HCR Bit Fields                           ------ */
/* ------- MOD_MIRROR Bit Fields                    ------ */
/* ------- C0V_MIRROR Bit Fields                    ------ */
/* ------- C1V_MIRROR Bit Fields                    ------ */
/* ------- C2V_MIRROR Bit Fields                    ------ */
/* ------- C3V_MIRROR Bit Fields                    ------ */
/* ------- C4V_MIRROR Bit Fields                    ------ */
/* ------- C5V_MIRROR Bit Fields                    ------ */
/* ------- C6V_MIRROR Bit Fields                    ------ */
/* ------- C7V_MIRROR Bit Fields                    ------ */
/**
 * @} */ /* End group FTM_Register_Masks_GROUP 
 */

/* FTM1 - Peripheral instance base addresses */
#define FTM1_BasePtr                   0x40039000UL //!< Peripheral base address
#define FTM1                           ((FTM1_Type *) FTM1_BasePtr) //!< Freescale base pointer
#define FTM1_BASE_PTR                  (FTM1) //!< Freescale style base pointer
/**
 * @} */ /* End group FTM_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup FTM_Peripheral_access_layer_GROUP FTM Peripheral Access Layer
* @brief C Struct for FTM
* @{
*/

/* ================================================================================ */
/* ================           FTM2 (derived from FTM1)             ================ */
/* ================================================================================ */

/**
 * @brief FlexTimer Module
 */

/* FTM2 - Peripheral instance base addresses */
#define FTM2_BasePtr                   0x4003A000UL //!< Peripheral base address
#define FTM2                           ((FTM1_Type *) FTM2_BasePtr) //!< Freescale base pointer
#define FTM2_BASE_PTR                  (FTM2) //!< Freescale style base pointer
/**
 * @} */ /* End group FTM_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup GPIO_Peripheral_access_layer_GROUP GPIO Peripheral Access Layer
* @brief C Struct for GPIO
* @{
*/

/* ================================================================================ */
/* ================           GPIOA (file:GPIOA_MKE16F16)          ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */
/**
* @addtogroup GPIO_structs_GROUP GPIO struct
* @brief Struct for GPIO
* @{
*/
typedef struct {                                /*       GPIOA Structure                                              */
   __IO uint32_t  PDOR;                         /**< 0000: Port Data Output Register                                    */
   __O  uint32_t  PSOR;                         /**< 0004: Port Set Output Register                                     */
   __O  uint32_t  PCOR;                         /**< 0008: Port Clear Output Register                                   */
   __O  uint32_t  PTOR;                         /**< 000C: Port Toggle Output Register                                  */
   __I  uint32_t  PDIR;                         /**< 0010: Port Data Input Register                                     */
   __IO uint32_t  PDDR;                         /**< 0014: Port Data Direction Register                                 */
} GPIO_Type;

/**
 * @} */ /* End group GPIO_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'GPIOA' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup GPIO_Register_Masks_GROUP GPIO Register Masks
* @brief Register Masks for GPIO
* @{
*/
/* ------- PDOR Bit Fields                          ------ */
/* ------- PSOR Bit Fields                          ------ */
/* ------- PCOR Bit Fields                          ------ */
/* ------- PTOR Bit Fields                          ------ */
/* ------- PDIR Bit Fields                          ------ */
/* ------- PDDR Bit Fields                          ------ */
/**
 * @} */ /* End group GPIO_Register_Masks_GROUP 
 */

/* GPIOA - Peripheral instance base addresses */
#define GPIOA_BasePtr                  0x400FF000UL //!< Peripheral base address
#define GPIOA                          ((GPIO_Type *) GPIOA_BasePtr) //!< Freescale base pointer
#define GPIOA_BASE_PTR                 (GPIOA) //!< Freescale style base pointer
/**
 * @} */ /* End group GPIO_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup GPIO_Peripheral_access_layer_GROUP GPIO Peripheral Access Layer
* @brief C Struct for GPIO
* @{
*/

/* ================================================================================ */
/* ================           GPIOB (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */

/* GPIOB - Peripheral instance base addresses */
#define GPIOB_BasePtr                  0x400FF040UL //!< Peripheral base address
#define GPIOB                          ((GPIO_Type *) GPIOB_BasePtr) //!< Freescale base pointer
#define GPIOB_BASE_PTR                 (GPIOB) //!< Freescale style base pointer
/**
 * @} */ /* End group GPIO_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup GPIO_Peripheral_access_layer_GROUP GPIO Peripheral Access Layer
* @brief C Struct for GPIO
* @{
*/

/* ================================================================================ */
/* ================           GPIOC (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */

/* GPIOC - Peripheral instance base addresses */
#define GPIOC_BasePtr                  0x400FF080UL //!< Peripheral base address
#define GPIOC                          ((GPIO_Type *) GPIOC_BasePtr) //!< Freescale base pointer
#define GPIOC_BASE_PTR                 (GPIOC) //!< Freescale style base pointer
/**
 * @} */ /* End group GPIO_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup GPIO_Peripheral_access_layer_GROUP GPIO Peripheral Access Layer
* @brief C Struct for GPIO
* @{
*/

/* ================================================================================ */
/* ================           GPIOD (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */

/* GPIOD - Peripheral instance base addresses */
#define GPIOD_BasePtr                  0x400FF0C0UL //!< Peripheral base address
#define GPIOD                          ((GPIO_Type *) GPIOD_BasePtr) //!< Freescale base pointer
#define GPIOD_BASE_PTR                 (GPIOD) //!< Freescale style base pointer
/**
 * @} */ /* End group GPIO_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup GPIO_Peripheral_access_layer_GROUP GPIO Peripheral Access Layer
* @brief C Struct for GPIO
* @{
*/

/* ================================================================================ */
/* ================           GPIOE (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */

/* GPIOE - Peripheral instance base addresses */
#define GPIOE_BasePtr                  0x400FF100UL //!< Peripheral base address
#define GPIOE                          ((GPIO_Type *) GPIOE_BasePtr) //!< Freescale base pointer
#define GPIOE_BASE_PTR                 (GPIOE) //!< Freescale style base pointer
/**
 * @} */ /* End group GPIO_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup LPI2C_Peripheral_access_layer_GROUP LPI2C Peripheral Access Layer
* @brief C Struct for LPI2C
* @{
*/

/* ================================================================================ */
/* ================           LPI2C0 (file:LPI2C0_MKE15Z7)         ================ */
/* ================================================================================ */

/**
 * @brief Low power I2C
 */
/**
* @addtogroup LPI2C_structs_GROUP LPI2C struct
* @brief Struct for LPI2C
* @{
*/
typedef struct {                                /*       LPI2C0 Structure                                             */
   __I  uint32_t  VERID;                        /**< 0000: Version ID Register                                          */
   __I  uint32_t  PARAM;                        /**< 0004: Parameter Register                                           */
        uint8_t   RESERVED_0[8];               
   __IO uint32_t  MCR;                          /**< 0010: Master Control Register                                      */
   __IO uint32_t  MSR;                          /**< 0014: Master Status Register                                       */
   __IO uint32_t  MIER;                         /**< 0018: Master Interrupt Enable Register                             */
   __IO uint32_t  MDER;                         /**< 001C: Master DMA Enable Register                                   */
   __IO uint32_t  MCFGR0;                       /**< 0020: Master Configuration Register 0                              */
   __IO uint32_t  MCFGR1;                       /**< 0024: Master Configuration Register 1                              */
   __IO uint32_t  MCFGR2;                       /**< 0028: Master Configuration Register 2                              */
   __IO uint32_t  MCFGR3;                       /**< 002C: Master Configuration Register 3                              */
        uint8_t   RESERVED_1[16];              
   __IO uint32_t  MDMR;                         /**< 0040: Master Data Match Register                                   */
        uint8_t   RESERVED_2[4];               
   __IO uint32_t  MCCR0;                        /**< 0048: Master Clock Configuration Register 0                        */
        uint8_t   RESERVED_3[4];               
   __IO uint32_t  MCCR1;                        /**< 0050: Master Clock Configuration Register 1                        */
        uint8_t   RESERVED_4[4];               
   __IO uint32_t  MFCR;                         /**< 0058: Master FIFO Control Register                                 */
   __I  uint32_t  MFSR;                         /**< 005C: Master FIFO Status Register                                  */
   __O  uint32_t  MTDR;                         /**< 0060: Master Transmit Data Register                                */
        uint8_t   RESERVED_5[12];              
   __I  uint32_t  MRDR;                         /**< 0070: Master Receive Data Register                                 */
        uint8_t   RESERVED_6[156];             
   __IO uint32_t  SCR;                          /**< 0110: Slave Control Register                                       */
   __IO uint32_t  SSR;                          /**< 0114: Slave Status Register                                        */
   __IO uint32_t  SIER;                         /**< 0118: Slave Interrupt Enable Register                              */
   __IO uint32_t  SDER;                         /**< 011C: Slave DMA Enable Register                                    */
        uint8_t   RESERVED_7[4];               
   __IO uint32_t  SCFGR1;                       /**< 0124: Slave Configuration Register 1                               */
   __IO uint32_t  SCFGR2;                       /**< 0128: Slave Configuration Register 2                               */
        uint8_t   RESERVED_8[20];              
   __IO uint32_t  SAMR;                         /**< 0140: Slave Address Match Register                                 */
        uint8_t   RESERVED_9[12];              
   __I  uint32_t  SASR;                         /**< 0150: Slave Address Status Register                                */
   __IO uint32_t  STAR;                         /**< 0154: Slave Transmit ACK Register                                  */
        uint8_t   RESERVED_10[8];              
   __O  uint32_t  STDR;                         /**< 0160: Slave Transmit Data Register                                 */
        uint8_t   RESERVED_11[12];             
   __I  uint32_t  SRDR;                         /**< 0170: Slave Receive Data Register                                  */
} LPI2C0_Type;

/**
 * @} */ /* End group LPI2C_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'LPI2C0' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup LPI2C_Register_Masks_GROUP LPI2C Register Masks
* @brief Register Masks for LPI2C
* @{
*/
/* ------- VERID Bit Fields                         ------ */
#define LPI2C0_VERID_FEATURE_MASK                (0xFFFFU)                                           /*!< LPI2C0_VERID: FEATURE Mask              */
#define LPI2C0_VERID_FEATURE_SHIFT               (0U)                                                /*!< LPI2C0_VERID: FEATURE Position          */
#define LPI2C0_VERID_FEATURE(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C0_VERID_FEATURE_SHIFT))&LPI2C0_VERID_FEATURE_MASK) /*!< LPI2C0_VERID                            */
#define LPI2C0_VERID_MINOR_MASK                  (0xFF0000U)                                         /*!< LPI2C0_VERID: MINOR Mask                */
#define LPI2C0_VERID_MINOR_SHIFT                 (16U)                                               /*!< LPI2C0_VERID: MINOR Position            */
#define LPI2C0_VERID_MINOR(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C0_VERID_MINOR_SHIFT))&LPI2C0_VERID_MINOR_MASK) /*!< LPI2C0_VERID                            */
#define LPI2C0_VERID_MAJOR_MASK                  (0xFF000000U)                                       /*!< LPI2C0_VERID: MAJOR Mask                */
#define LPI2C0_VERID_MAJOR_SHIFT                 (24U)                                               /*!< LPI2C0_VERID: MAJOR Position            */
#define LPI2C0_VERID_MAJOR(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C0_VERID_MAJOR_SHIFT))&LPI2C0_VERID_MAJOR_MASK) /*!< LPI2C0_VERID                            */
/* ------- PARAM Bit Fields                         ------ */
#define LPI2C0_PARAM_MTXFIFO_MASK                (0xFU)                                              /*!< LPI2C0_PARAM: MTXFIFO Mask              */
#define LPI2C0_PARAM_MTXFIFO_SHIFT               (0U)                                                /*!< LPI2C0_PARAM: MTXFIFO Position          */
#define LPI2C0_PARAM_MTXFIFO(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C0_PARAM_MTXFIFO_SHIFT))&LPI2C0_PARAM_MTXFIFO_MASK) /*!< LPI2C0_PARAM                            */
#define LPI2C0_PARAM_MRXFIFO_MASK                (0xF00U)                                            /*!< LPI2C0_PARAM: MRXFIFO Mask              */
#define LPI2C0_PARAM_MRXFIFO_SHIFT               (8U)                                                /*!< LPI2C0_PARAM: MRXFIFO Position          */
#define LPI2C0_PARAM_MRXFIFO(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C0_PARAM_MRXFIFO_SHIFT))&LPI2C0_PARAM_MRXFIFO_MASK) /*!< LPI2C0_PARAM                            */
/* ------- MCR Bit Fields                           ------ */
#define LPI2C0_MCR_MEN_MASK                      (0x1U)                                              /*!< LPI2C0_MCR: MEN Mask                    */
#define LPI2C0_MCR_MEN_SHIFT                     (0U)                                                /*!< LPI2C0_MCR: MEN Position                */
#define LPI2C0_MCR_MEN(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCR_MEN_SHIFT))&LPI2C0_MCR_MEN_MASK) /*!< LPI2C0_MCR                              */
#define LPI2C0_MCR_RST_MASK                      (0x2U)                                              /*!< LPI2C0_MCR: RST Mask                    */
#define LPI2C0_MCR_RST_SHIFT                     (1U)                                                /*!< LPI2C0_MCR: RST Position                */
#define LPI2C0_MCR_RST(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCR_RST_SHIFT))&LPI2C0_MCR_RST_MASK) /*!< LPI2C0_MCR                              */
#define LPI2C0_MCR_DOZEN_MASK                    (0x4U)                                              /*!< LPI2C0_MCR: DOZEN Mask                  */
#define LPI2C0_MCR_DOZEN_SHIFT                   (2U)                                                /*!< LPI2C0_MCR: DOZEN Position              */
#define LPI2C0_MCR_DOZEN(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCR_DOZEN_SHIFT))&LPI2C0_MCR_DOZEN_MASK) /*!< LPI2C0_MCR                              */
#define LPI2C0_MCR_DBGEN_MASK                    (0x8U)                                              /*!< LPI2C0_MCR: DBGEN Mask                  */
#define LPI2C0_MCR_DBGEN_SHIFT                   (3U)                                                /*!< LPI2C0_MCR: DBGEN Position              */
#define LPI2C0_MCR_DBGEN(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCR_DBGEN_SHIFT))&LPI2C0_MCR_DBGEN_MASK) /*!< LPI2C0_MCR                              */
#define LPI2C0_MCR_RTF_MASK                      (0x100U)                                            /*!< LPI2C0_MCR: RTF Mask                    */
#define LPI2C0_MCR_RTF_SHIFT                     (8U)                                                /*!< LPI2C0_MCR: RTF Position                */
#define LPI2C0_MCR_RTF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCR_RTF_SHIFT))&LPI2C0_MCR_RTF_MASK) /*!< LPI2C0_MCR                              */
#define LPI2C0_MCR_RRF_MASK                      (0x200U)                                            /*!< LPI2C0_MCR: RRF Mask                    */
#define LPI2C0_MCR_RRF_SHIFT                     (9U)                                                /*!< LPI2C0_MCR: RRF Position                */
#define LPI2C0_MCR_RRF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCR_RRF_SHIFT))&LPI2C0_MCR_RRF_MASK) /*!< LPI2C0_MCR                              */
/* ------- MSR Bit Fields                           ------ */
#define LPI2C0_MSR_TDF_MASK                      (0x1U)                                              /*!< LPI2C0_MSR: TDF Mask                    */
#define LPI2C0_MSR_TDF_SHIFT                     (0U)                                                /*!< LPI2C0_MSR: TDF Position                */
#define LPI2C0_MSR_TDF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_MSR_TDF_SHIFT))&LPI2C0_MSR_TDF_MASK) /*!< LPI2C0_MSR                              */
#define LPI2C0_MSR_RDF_MASK                      (0x2U)                                              /*!< LPI2C0_MSR: RDF Mask                    */
#define LPI2C0_MSR_RDF_SHIFT                     (1U)                                                /*!< LPI2C0_MSR: RDF Position                */
#define LPI2C0_MSR_RDF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_MSR_RDF_SHIFT))&LPI2C0_MSR_RDF_MASK) /*!< LPI2C0_MSR                              */
#define LPI2C0_MSR_EPF_MASK                      (0x100U)                                            /*!< LPI2C0_MSR: EPF Mask                    */
#define LPI2C0_MSR_EPF_SHIFT                     (8U)                                                /*!< LPI2C0_MSR: EPF Position                */
#define LPI2C0_MSR_EPF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_MSR_EPF_SHIFT))&LPI2C0_MSR_EPF_MASK) /*!< LPI2C0_MSR                              */
#define LPI2C0_MSR_SDF_MASK                      (0x200U)                                            /*!< LPI2C0_MSR: SDF Mask                    */
#define LPI2C0_MSR_SDF_SHIFT                     (9U)                                                /*!< LPI2C0_MSR: SDF Position                */
#define LPI2C0_MSR_SDF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_MSR_SDF_SHIFT))&LPI2C0_MSR_SDF_MASK) /*!< LPI2C0_MSR                              */
#define LPI2C0_MSR_NDF_MASK                      (0x400U)                                            /*!< LPI2C0_MSR: NDF Mask                    */
#define LPI2C0_MSR_NDF_SHIFT                     (10U)                                               /*!< LPI2C0_MSR: NDF Position                */
#define LPI2C0_MSR_NDF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_MSR_NDF_SHIFT))&LPI2C0_MSR_NDF_MASK) /*!< LPI2C0_MSR                              */
#define LPI2C0_MSR_ALF_MASK                      (0x800U)                                            /*!< LPI2C0_MSR: ALF Mask                    */
#define LPI2C0_MSR_ALF_SHIFT                     (11U)                                               /*!< LPI2C0_MSR: ALF Position                */
#define LPI2C0_MSR_ALF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_MSR_ALF_SHIFT))&LPI2C0_MSR_ALF_MASK) /*!< LPI2C0_MSR                              */
#define LPI2C0_MSR_FEF_MASK                      (0x1000U)                                           /*!< LPI2C0_MSR: FEF Mask                    */
#define LPI2C0_MSR_FEF_SHIFT                     (12U)                                               /*!< LPI2C0_MSR: FEF Position                */
#define LPI2C0_MSR_FEF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_MSR_FEF_SHIFT))&LPI2C0_MSR_FEF_MASK) /*!< LPI2C0_MSR                              */
#define LPI2C0_MSR_PLTF_MASK                     (0x2000U)                                           /*!< LPI2C0_MSR: PLTF Mask                   */
#define LPI2C0_MSR_PLTF_SHIFT                    (13U)                                               /*!< LPI2C0_MSR: PLTF Position               */
#define LPI2C0_MSR_PLTF(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C0_MSR_PLTF_SHIFT))&LPI2C0_MSR_PLTF_MASK) /*!< LPI2C0_MSR                              */
#define LPI2C0_MSR_DMF_MASK                      (0x4000U)                                           /*!< LPI2C0_MSR: DMF Mask                    */
#define LPI2C0_MSR_DMF_SHIFT                     (14U)                                               /*!< LPI2C0_MSR: DMF Position                */
#define LPI2C0_MSR_DMF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_MSR_DMF_SHIFT))&LPI2C0_MSR_DMF_MASK) /*!< LPI2C0_MSR                              */
#define LPI2C0_MSR_MBF_MASK                      (0x1000000U)                                        /*!< LPI2C0_MSR: MBF Mask                    */
#define LPI2C0_MSR_MBF_SHIFT                     (24U)                                               /*!< LPI2C0_MSR: MBF Position                */
#define LPI2C0_MSR_MBF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_MSR_MBF_SHIFT))&LPI2C0_MSR_MBF_MASK) /*!< LPI2C0_MSR                              */
#define LPI2C0_MSR_BBF_MASK                      (0x2000000U)                                        /*!< LPI2C0_MSR: BBF Mask                    */
#define LPI2C0_MSR_BBF_SHIFT                     (25U)                                               /*!< LPI2C0_MSR: BBF Position                */
#define LPI2C0_MSR_BBF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_MSR_BBF_SHIFT))&LPI2C0_MSR_BBF_MASK) /*!< LPI2C0_MSR                              */
/* ------- MIER Bit Fields                          ------ */
#define LPI2C0_MIER_TDIE_MASK                    (0x1U)                                              /*!< LPI2C0_MIER: TDIE Mask                  */
#define LPI2C0_MIER_TDIE_SHIFT                   (0U)                                                /*!< LPI2C0_MIER: TDIE Position              */
#define LPI2C0_MIER_TDIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_MIER_TDIE_SHIFT))&LPI2C0_MIER_TDIE_MASK) /*!< LPI2C0_MIER                             */
#define LPI2C0_MIER_RDIE_MASK                    (0x2U)                                              /*!< LPI2C0_MIER: RDIE Mask                  */
#define LPI2C0_MIER_RDIE_SHIFT                   (1U)                                                /*!< LPI2C0_MIER: RDIE Position              */
#define LPI2C0_MIER_RDIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_MIER_RDIE_SHIFT))&LPI2C0_MIER_RDIE_MASK) /*!< LPI2C0_MIER                             */
#define LPI2C0_MIER_EPIE_MASK                    (0x100U)                                            /*!< LPI2C0_MIER: EPIE Mask                  */
#define LPI2C0_MIER_EPIE_SHIFT                   (8U)                                                /*!< LPI2C0_MIER: EPIE Position              */
#define LPI2C0_MIER_EPIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_MIER_EPIE_SHIFT))&LPI2C0_MIER_EPIE_MASK) /*!< LPI2C0_MIER                             */
#define LPI2C0_MIER_SDIE_MASK                    (0x200U)                                            /*!< LPI2C0_MIER: SDIE Mask                  */
#define LPI2C0_MIER_SDIE_SHIFT                   (9U)                                                /*!< LPI2C0_MIER: SDIE Position              */
#define LPI2C0_MIER_SDIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_MIER_SDIE_SHIFT))&LPI2C0_MIER_SDIE_MASK) /*!< LPI2C0_MIER                             */
#define LPI2C0_MIER_NDIE_MASK                    (0x400U)                                            /*!< LPI2C0_MIER: NDIE Mask                  */
#define LPI2C0_MIER_NDIE_SHIFT                   (10U)                                               /*!< LPI2C0_MIER: NDIE Position              */
#define LPI2C0_MIER_NDIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_MIER_NDIE_SHIFT))&LPI2C0_MIER_NDIE_MASK) /*!< LPI2C0_MIER                             */
#define LPI2C0_MIER_ALIE_MASK                    (0x800U)                                            /*!< LPI2C0_MIER: ALIE Mask                  */
#define LPI2C0_MIER_ALIE_SHIFT                   (11U)                                               /*!< LPI2C0_MIER: ALIE Position              */
#define LPI2C0_MIER_ALIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_MIER_ALIE_SHIFT))&LPI2C0_MIER_ALIE_MASK) /*!< LPI2C0_MIER                             */
#define LPI2C0_MIER_FEIE_MASK                    (0x1000U)                                           /*!< LPI2C0_MIER: FEIE Mask                  */
#define LPI2C0_MIER_FEIE_SHIFT                   (12U)                                               /*!< LPI2C0_MIER: FEIE Position              */
#define LPI2C0_MIER_FEIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_MIER_FEIE_SHIFT))&LPI2C0_MIER_FEIE_MASK) /*!< LPI2C0_MIER                             */
#define LPI2C0_MIER_PLTIE_MASK                   (0x2000U)                                           /*!< LPI2C0_MIER: PLTIE Mask                 */
#define LPI2C0_MIER_PLTIE_SHIFT                  (13U)                                               /*!< LPI2C0_MIER: PLTIE Position             */
#define LPI2C0_MIER_PLTIE(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C0_MIER_PLTIE_SHIFT))&LPI2C0_MIER_PLTIE_MASK) /*!< LPI2C0_MIER                             */
#define LPI2C0_MIER_DMIE_MASK                    (0x4000U)                                           /*!< LPI2C0_MIER: DMIE Mask                  */
#define LPI2C0_MIER_DMIE_SHIFT                   (14U)                                               /*!< LPI2C0_MIER: DMIE Position              */
#define LPI2C0_MIER_DMIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_MIER_DMIE_SHIFT))&LPI2C0_MIER_DMIE_MASK) /*!< LPI2C0_MIER                             */
/* ------- MDER Bit Fields                          ------ */
#define LPI2C0_MDER_TDDE_MASK                    (0x1U)                                              /*!< LPI2C0_MDER: TDDE Mask                  */
#define LPI2C0_MDER_TDDE_SHIFT                   (0U)                                                /*!< LPI2C0_MDER: TDDE Position              */
#define LPI2C0_MDER_TDDE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_MDER_TDDE_SHIFT))&LPI2C0_MDER_TDDE_MASK) /*!< LPI2C0_MDER                             */
#define LPI2C0_MDER_RDDE_MASK                    (0x2U)                                              /*!< LPI2C0_MDER: RDDE Mask                  */
#define LPI2C0_MDER_RDDE_SHIFT                   (1U)                                                /*!< LPI2C0_MDER: RDDE Position              */
#define LPI2C0_MDER_RDDE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_MDER_RDDE_SHIFT))&LPI2C0_MDER_RDDE_MASK) /*!< LPI2C0_MDER                             */
/* ------- MCFGR0 Bit Fields                        ------ */
#define LPI2C0_MCFGR0_HREN_MASK                  (0x1U)                                              /*!< LPI2C0_MCFGR0: HREN Mask                */
#define LPI2C0_MCFGR0_HREN_SHIFT                 (0U)                                                /*!< LPI2C0_MCFGR0: HREN Position            */
#define LPI2C0_MCFGR0_HREN(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR0_HREN_SHIFT))&LPI2C0_MCFGR0_HREN_MASK) /*!< LPI2C0_MCFGR0                           */
#define LPI2C0_MCFGR0_HRPOL_MASK                 (0x2U)                                              /*!< LPI2C0_MCFGR0: HRPOL Mask               */
#define LPI2C0_MCFGR0_HRPOL_SHIFT                (1U)                                                /*!< LPI2C0_MCFGR0: HRPOL Position           */
#define LPI2C0_MCFGR0_HRPOL(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR0_HRPOL_SHIFT))&LPI2C0_MCFGR0_HRPOL_MASK) /*!< LPI2C0_MCFGR0                           */
#define LPI2C0_MCFGR0_HRSEL_MASK                 (0x4U)                                              /*!< LPI2C0_MCFGR0: HRSEL Mask               */
#define LPI2C0_MCFGR0_HRSEL_SHIFT                (2U)                                                /*!< LPI2C0_MCFGR0: HRSEL Position           */
#define LPI2C0_MCFGR0_HRSEL(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR0_HRSEL_SHIFT))&LPI2C0_MCFGR0_HRSEL_MASK) /*!< LPI2C0_MCFGR0                           */
#define LPI2C0_MCFGR0_CIRFIFO_MASK               (0x100U)                                            /*!< LPI2C0_MCFGR0: CIRFIFO Mask             */
#define LPI2C0_MCFGR0_CIRFIFO_SHIFT              (8U)                                                /*!< LPI2C0_MCFGR0: CIRFIFO Position         */
#define LPI2C0_MCFGR0_CIRFIFO(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR0_CIRFIFO_SHIFT))&LPI2C0_MCFGR0_CIRFIFO_MASK) /*!< LPI2C0_MCFGR0                           */
#define LPI2C0_MCFGR0_RDMO_MASK                  (0x200U)                                            /*!< LPI2C0_MCFGR0: RDMO Mask                */
#define LPI2C0_MCFGR0_RDMO_SHIFT                 (9U)                                                /*!< LPI2C0_MCFGR0: RDMO Position            */
#define LPI2C0_MCFGR0_RDMO(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR0_RDMO_SHIFT))&LPI2C0_MCFGR0_RDMO_MASK) /*!< LPI2C0_MCFGR0                           */
/* ------- MCFGR1 Bit Fields                        ------ */
#define LPI2C0_MCFGR1_PRESCALE_MASK              (0x7U)                                              /*!< LPI2C0_MCFGR1: PRESCALE Mask            */
#define LPI2C0_MCFGR1_PRESCALE_SHIFT             (0U)                                                /*!< LPI2C0_MCFGR1: PRESCALE Position        */
#define LPI2C0_MCFGR1_PRESCALE(x)                (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR1_PRESCALE_SHIFT))&LPI2C0_MCFGR1_PRESCALE_MASK) /*!< LPI2C0_MCFGR1                           */
#define LPI2C0_MCFGR1_AUTOSTOP_MASK              (0x100U)                                            /*!< LPI2C0_MCFGR1: AUTOSTOP Mask            */
#define LPI2C0_MCFGR1_AUTOSTOP_SHIFT             (8U)                                                /*!< LPI2C0_MCFGR1: AUTOSTOP Position        */
#define LPI2C0_MCFGR1_AUTOSTOP(x)                (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR1_AUTOSTOP_SHIFT))&LPI2C0_MCFGR1_AUTOSTOP_MASK) /*!< LPI2C0_MCFGR1                           */
#define LPI2C0_MCFGR1_IGNACK_MASK                (0x200U)                                            /*!< LPI2C0_MCFGR1: IGNACK Mask              */
#define LPI2C0_MCFGR1_IGNACK_SHIFT               (9U)                                                /*!< LPI2C0_MCFGR1: IGNACK Position          */
#define LPI2C0_MCFGR1_IGNACK(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR1_IGNACK_SHIFT))&LPI2C0_MCFGR1_IGNACK_MASK) /*!< LPI2C0_MCFGR1                           */
#define LPI2C0_MCFGR1_TIMECFG_MASK               (0x400U)                                            /*!< LPI2C0_MCFGR1: TIMECFG Mask             */
#define LPI2C0_MCFGR1_TIMECFG_SHIFT              (10U)                                               /*!< LPI2C0_MCFGR1: TIMECFG Position         */
#define LPI2C0_MCFGR1_TIMECFG(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR1_TIMECFG_SHIFT))&LPI2C0_MCFGR1_TIMECFG_MASK) /*!< LPI2C0_MCFGR1                           */
#define LPI2C0_MCFGR1_MATCFG_MASK                (0x70000U)                                          /*!< LPI2C0_MCFGR1: MATCFG Mask              */
#define LPI2C0_MCFGR1_MATCFG_SHIFT               (16U)                                               /*!< LPI2C0_MCFGR1: MATCFG Position          */
#define LPI2C0_MCFGR1_MATCFG(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR1_MATCFG_SHIFT))&LPI2C0_MCFGR1_MATCFG_MASK) /*!< LPI2C0_MCFGR1                           */
#define LPI2C0_MCFGR1_PINCFG_MASK                (0x7000000U)                                        /*!< LPI2C0_MCFGR1: PINCFG Mask              */
#define LPI2C0_MCFGR1_PINCFG_SHIFT               (24U)                                               /*!< LPI2C0_MCFGR1: PINCFG Position          */
#define LPI2C0_MCFGR1_PINCFG(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR1_PINCFG_SHIFT))&LPI2C0_MCFGR1_PINCFG_MASK) /*!< LPI2C0_MCFGR1                           */
/* ------- MCFGR2 Bit Fields                        ------ */
#define LPI2C0_MCFGR2_BUSIDLE_MASK               (0xFFFU)                                            /*!< LPI2C0_MCFGR2: BUSIDLE Mask             */
#define LPI2C0_MCFGR2_BUSIDLE_SHIFT              (0U)                                                /*!< LPI2C0_MCFGR2: BUSIDLE Position         */
#define LPI2C0_MCFGR2_BUSIDLE(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR2_BUSIDLE_SHIFT))&LPI2C0_MCFGR2_BUSIDLE_MASK) /*!< LPI2C0_MCFGR2                           */
#define LPI2C0_MCFGR2_FILTSCL_MASK               (0xF0000U)                                          /*!< LPI2C0_MCFGR2: FILTSCL Mask             */
#define LPI2C0_MCFGR2_FILTSCL_SHIFT              (16U)                                               /*!< LPI2C0_MCFGR2: FILTSCL Position         */
#define LPI2C0_MCFGR2_FILTSCL(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR2_FILTSCL_SHIFT))&LPI2C0_MCFGR2_FILTSCL_MASK) /*!< LPI2C0_MCFGR2                           */
#define LPI2C0_MCFGR2_FILTSDA_MASK               (0xF000000U)                                        /*!< LPI2C0_MCFGR2: FILTSDA Mask             */
#define LPI2C0_MCFGR2_FILTSDA_SHIFT              (24U)                                               /*!< LPI2C0_MCFGR2: FILTSDA Position         */
#define LPI2C0_MCFGR2_FILTSDA(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR2_FILTSDA_SHIFT))&LPI2C0_MCFGR2_FILTSDA_MASK) /*!< LPI2C0_MCFGR2                           */
/* ------- MCFGR3 Bit Fields                        ------ */
#define LPI2C0_MCFGR3_PINLOW_MASK                (0xFFF00U)                                          /*!< LPI2C0_MCFGR3: PINLOW Mask              */
#define LPI2C0_MCFGR3_PINLOW_SHIFT               (8U)                                                /*!< LPI2C0_MCFGR3: PINLOW Position          */
#define LPI2C0_MCFGR3_PINLOW(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCFGR3_PINLOW_SHIFT))&LPI2C0_MCFGR3_PINLOW_MASK) /*!< LPI2C0_MCFGR3                           */
/* ------- MDMR Bit Fields                          ------ */
#define LPI2C0_MDMR_MATCH0_MASK                  (0xFFU)                                             /*!< LPI2C0_MDMR: MATCH0 Mask                */
#define LPI2C0_MDMR_MATCH0_SHIFT                 (0U)                                                /*!< LPI2C0_MDMR: MATCH0 Position            */
#define LPI2C0_MDMR_MATCH0(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C0_MDMR_MATCH0_SHIFT))&LPI2C0_MDMR_MATCH0_MASK) /*!< LPI2C0_MDMR                             */
#define LPI2C0_MDMR_MATCH1_MASK                  (0xFF0000U)                                         /*!< LPI2C0_MDMR: MATCH1 Mask                */
#define LPI2C0_MDMR_MATCH1_SHIFT                 (16U)                                               /*!< LPI2C0_MDMR: MATCH1 Position            */
#define LPI2C0_MDMR_MATCH1(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C0_MDMR_MATCH1_SHIFT))&LPI2C0_MDMR_MATCH1_MASK) /*!< LPI2C0_MDMR                             */
/* ------- MCCR0 Bit Fields                         ------ */
#define LPI2C0_MCCR0_CLKLO_MASK                  (0x3FU)                                             /*!< LPI2C0_MCCR0: CLKLO Mask                */
#define LPI2C0_MCCR0_CLKLO_SHIFT                 (0U)                                                /*!< LPI2C0_MCCR0: CLKLO Position            */
#define LPI2C0_MCCR0_CLKLO(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCCR0_CLKLO_SHIFT))&LPI2C0_MCCR0_CLKLO_MASK) /*!< LPI2C0_MCCR0                            */
#define LPI2C0_MCCR0_CLKHI_MASK                  (0x3F00U)                                           /*!< LPI2C0_MCCR0: CLKHI Mask                */
#define LPI2C0_MCCR0_CLKHI_SHIFT                 (8U)                                                /*!< LPI2C0_MCCR0: CLKHI Position            */
#define LPI2C0_MCCR0_CLKHI(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCCR0_CLKHI_SHIFT))&LPI2C0_MCCR0_CLKHI_MASK) /*!< LPI2C0_MCCR0                            */
#define LPI2C0_MCCR0_SETHOLD_MASK                (0x3F0000U)                                         /*!< LPI2C0_MCCR0: SETHOLD Mask              */
#define LPI2C0_MCCR0_SETHOLD_SHIFT               (16U)                                               /*!< LPI2C0_MCCR0: SETHOLD Position          */
#define LPI2C0_MCCR0_SETHOLD(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCCR0_SETHOLD_SHIFT))&LPI2C0_MCCR0_SETHOLD_MASK) /*!< LPI2C0_MCCR0                            */
#define LPI2C0_MCCR0_DATAVD_MASK                 (0x3F000000U)                                       /*!< LPI2C0_MCCR0: DATAVD Mask               */
#define LPI2C0_MCCR0_DATAVD_SHIFT                (24U)                                               /*!< LPI2C0_MCCR0: DATAVD Position           */
#define LPI2C0_MCCR0_DATAVD(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCCR0_DATAVD_SHIFT))&LPI2C0_MCCR0_DATAVD_MASK) /*!< LPI2C0_MCCR0                            */
/* ------- MCCR1 Bit Fields                         ------ */
#define LPI2C0_MCCR1_CLKLO_MASK                  (0x3FU)                                             /*!< LPI2C0_MCCR1: CLKLO Mask                */
#define LPI2C0_MCCR1_CLKLO_SHIFT                 (0U)                                                /*!< LPI2C0_MCCR1: CLKLO Position            */
#define LPI2C0_MCCR1_CLKLO(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCCR1_CLKLO_SHIFT))&LPI2C0_MCCR1_CLKLO_MASK) /*!< LPI2C0_MCCR1                            */
#define LPI2C0_MCCR1_CLKHI_MASK                  (0x3F00U)                                           /*!< LPI2C0_MCCR1: CLKHI Mask                */
#define LPI2C0_MCCR1_CLKHI_SHIFT                 (8U)                                                /*!< LPI2C0_MCCR1: CLKHI Position            */
#define LPI2C0_MCCR1_CLKHI(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCCR1_CLKHI_SHIFT))&LPI2C0_MCCR1_CLKHI_MASK) /*!< LPI2C0_MCCR1                            */
#define LPI2C0_MCCR1_SETHOLD_MASK                (0x3F0000U)                                         /*!< LPI2C0_MCCR1: SETHOLD Mask              */
#define LPI2C0_MCCR1_SETHOLD_SHIFT               (16U)                                               /*!< LPI2C0_MCCR1: SETHOLD Position          */
#define LPI2C0_MCCR1_SETHOLD(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCCR1_SETHOLD_SHIFT))&LPI2C0_MCCR1_SETHOLD_MASK) /*!< LPI2C0_MCCR1                            */
#define LPI2C0_MCCR1_DATAVD_MASK                 (0x3F000000U)                                       /*!< LPI2C0_MCCR1: DATAVD Mask               */
#define LPI2C0_MCCR1_DATAVD_SHIFT                (24U)                                               /*!< LPI2C0_MCCR1: DATAVD Position           */
#define LPI2C0_MCCR1_DATAVD(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C0_MCCR1_DATAVD_SHIFT))&LPI2C0_MCCR1_DATAVD_MASK) /*!< LPI2C0_MCCR1                            */
/* ------- MFCR Bit Fields                          ------ */
#define LPI2C0_MFCR_TXWATER_MASK                 (0xFFU)                                             /*!< LPI2C0_MFCR: TXWATER Mask               */
#define LPI2C0_MFCR_TXWATER_SHIFT                (0U)                                                /*!< LPI2C0_MFCR: TXWATER Position           */
#define LPI2C0_MFCR_TXWATER(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C0_MFCR_TXWATER_SHIFT))&LPI2C0_MFCR_TXWATER_MASK) /*!< LPI2C0_MFCR                             */
#define LPI2C0_MFCR_RXWATER_MASK                 (0xFF0000U)                                         /*!< LPI2C0_MFCR: RXWATER Mask               */
#define LPI2C0_MFCR_RXWATER_SHIFT                (16U)                                               /*!< LPI2C0_MFCR: RXWATER Position           */
#define LPI2C0_MFCR_RXWATER(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C0_MFCR_RXWATER_SHIFT))&LPI2C0_MFCR_RXWATER_MASK) /*!< LPI2C0_MFCR                             */
/* ------- MFSR Bit Fields                          ------ */
#define LPI2C0_MFSR_TXCOUNT_MASK                 (0xFFU)                                             /*!< LPI2C0_MFSR: TXCOUNT Mask               */
#define LPI2C0_MFSR_TXCOUNT_SHIFT                (0U)                                                /*!< LPI2C0_MFSR: TXCOUNT Position           */
#define LPI2C0_MFSR_TXCOUNT(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C0_MFSR_TXCOUNT_SHIFT))&LPI2C0_MFSR_TXCOUNT_MASK) /*!< LPI2C0_MFSR                             */
#define LPI2C0_MFSR_RXCOUNT_MASK                 (0xFF0000U)                                         /*!< LPI2C0_MFSR: RXCOUNT Mask               */
#define LPI2C0_MFSR_RXCOUNT_SHIFT                (16U)                                               /*!< LPI2C0_MFSR: RXCOUNT Position           */
#define LPI2C0_MFSR_RXCOUNT(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C0_MFSR_RXCOUNT_SHIFT))&LPI2C0_MFSR_RXCOUNT_MASK) /*!< LPI2C0_MFSR                             */
/* ------- MTDR Bit Fields                          ------ */
#define LPI2C0_MTDR_DATA_MASK                    (0xFFU)                                             /*!< LPI2C0_MTDR: DATA Mask                  */
#define LPI2C0_MTDR_DATA_SHIFT                   (0U)                                                /*!< LPI2C0_MTDR: DATA Position              */
#define LPI2C0_MTDR_DATA(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_MTDR_DATA_SHIFT))&LPI2C0_MTDR_DATA_MASK) /*!< LPI2C0_MTDR                             */
#define LPI2C0_MTDR_CMD_MASK                     (0x700U)                                            /*!< LPI2C0_MTDR: CMD Mask                   */
#define LPI2C0_MTDR_CMD_SHIFT                    (8U)                                                /*!< LPI2C0_MTDR: CMD Position               */
#define LPI2C0_MTDR_CMD(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C0_MTDR_CMD_SHIFT))&LPI2C0_MTDR_CMD_MASK) /*!< LPI2C0_MTDR                             */
/* ------- MRDR Bit Fields                          ------ */
#define LPI2C0_MRDR_DATA_MASK                    (0xFFU)                                             /*!< LPI2C0_MRDR: DATA Mask                  */
#define LPI2C0_MRDR_DATA_SHIFT                   (0U)                                                /*!< LPI2C0_MRDR: DATA Position              */
#define LPI2C0_MRDR_DATA(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_MRDR_DATA_SHIFT))&LPI2C0_MRDR_DATA_MASK) /*!< LPI2C0_MRDR                             */
#define LPI2C0_MRDR_RXEMPTY_MASK                 (0x4000U)                                           /*!< LPI2C0_MRDR: RXEMPTY Mask               */
#define LPI2C0_MRDR_RXEMPTY_SHIFT                (14U)                                               /*!< LPI2C0_MRDR: RXEMPTY Position           */
#define LPI2C0_MRDR_RXEMPTY(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C0_MRDR_RXEMPTY_SHIFT))&LPI2C0_MRDR_RXEMPTY_MASK) /*!< LPI2C0_MRDR                             */
/* ------- SCR Bit Fields                           ------ */
#define LPI2C0_SCR_SEN_MASK                      (0x1U)                                              /*!< LPI2C0_SCR: SEN Mask                    */
#define LPI2C0_SCR_SEN_SHIFT                     (0U)                                                /*!< LPI2C0_SCR: SEN Position                */
#define LPI2C0_SCR_SEN(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCR_SEN_SHIFT))&LPI2C0_SCR_SEN_MASK) /*!< LPI2C0_SCR                              */
#define LPI2C0_SCR_RST_MASK                      (0x2U)                                              /*!< LPI2C0_SCR: RST Mask                    */
#define LPI2C0_SCR_RST_SHIFT                     (1U)                                                /*!< LPI2C0_SCR: RST Position                */
#define LPI2C0_SCR_RST(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCR_RST_SHIFT))&LPI2C0_SCR_RST_MASK) /*!< LPI2C0_SCR                              */
#define LPI2C0_SCR_FILTEN_MASK                   (0x10U)                                             /*!< LPI2C0_SCR: FILTEN Mask                 */
#define LPI2C0_SCR_FILTEN_SHIFT                  (4U)                                                /*!< LPI2C0_SCR: FILTEN Position             */
#define LPI2C0_SCR_FILTEN(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCR_FILTEN_SHIFT))&LPI2C0_SCR_FILTEN_MASK) /*!< LPI2C0_SCR                              */
#define LPI2C0_SCR_FILTDZ_MASK                   (0x20U)                                             /*!< LPI2C0_SCR: FILTDZ Mask                 */
#define LPI2C0_SCR_FILTDZ_SHIFT                  (5U)                                                /*!< LPI2C0_SCR: FILTDZ Position             */
#define LPI2C0_SCR_FILTDZ(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCR_FILTDZ_SHIFT))&LPI2C0_SCR_FILTDZ_MASK) /*!< LPI2C0_SCR                              */
#define LPI2C0_SCR_RTF_MASK                      (0x100U)                                            /*!< LPI2C0_SCR: RTF Mask                    */
#define LPI2C0_SCR_RTF_SHIFT                     (8U)                                                /*!< LPI2C0_SCR: RTF Position                */
#define LPI2C0_SCR_RTF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCR_RTF_SHIFT))&LPI2C0_SCR_RTF_MASK) /*!< LPI2C0_SCR                              */
#define LPI2C0_SCR_RRF_MASK                      (0x200U)                                            /*!< LPI2C0_SCR: RRF Mask                    */
#define LPI2C0_SCR_RRF_SHIFT                     (9U)                                                /*!< LPI2C0_SCR: RRF Position                */
#define LPI2C0_SCR_RRF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCR_RRF_SHIFT))&LPI2C0_SCR_RRF_MASK) /*!< LPI2C0_SCR                              */
/* ------- SSR Bit Fields                           ------ */
#define LPI2C0_SSR_TDF_MASK                      (0x1U)                                              /*!< LPI2C0_SSR: TDF Mask                    */
#define LPI2C0_SSR_TDF_SHIFT                     (0U)                                                /*!< LPI2C0_SSR: TDF Position                */
#define LPI2C0_SSR_TDF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SSR_TDF_SHIFT))&LPI2C0_SSR_TDF_MASK) /*!< LPI2C0_SSR                              */
#define LPI2C0_SSR_RDF_MASK                      (0x2U)                                              /*!< LPI2C0_SSR: RDF Mask                    */
#define LPI2C0_SSR_RDF_SHIFT                     (1U)                                                /*!< LPI2C0_SSR: RDF Position                */
#define LPI2C0_SSR_RDF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SSR_RDF_SHIFT))&LPI2C0_SSR_RDF_MASK) /*!< LPI2C0_SSR                              */
#define LPI2C0_SSR_AVF_MASK                      (0x4U)                                              /*!< LPI2C0_SSR: AVF Mask                    */
#define LPI2C0_SSR_AVF_SHIFT                     (2U)                                                /*!< LPI2C0_SSR: AVF Position                */
#define LPI2C0_SSR_AVF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SSR_AVF_SHIFT))&LPI2C0_SSR_AVF_MASK) /*!< LPI2C0_SSR                              */
#define LPI2C0_SSR_TAF_MASK                      (0x8U)                                              /*!< LPI2C0_SSR: TAF Mask                    */
#define LPI2C0_SSR_TAF_SHIFT                     (3U)                                                /*!< LPI2C0_SSR: TAF Position                */
#define LPI2C0_SSR_TAF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SSR_TAF_SHIFT))&LPI2C0_SSR_TAF_MASK) /*!< LPI2C0_SSR                              */
#define LPI2C0_SSR_RSF_MASK                      (0x100U)                                            /*!< LPI2C0_SSR: RSF Mask                    */
#define LPI2C0_SSR_RSF_SHIFT                     (8U)                                                /*!< LPI2C0_SSR: RSF Position                */
#define LPI2C0_SSR_RSF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SSR_RSF_SHIFT))&LPI2C0_SSR_RSF_MASK) /*!< LPI2C0_SSR                              */
#define LPI2C0_SSR_SDF_MASK                      (0x200U)                                            /*!< LPI2C0_SSR: SDF Mask                    */
#define LPI2C0_SSR_SDF_SHIFT                     (9U)                                                /*!< LPI2C0_SSR: SDF Position                */
#define LPI2C0_SSR_SDF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SSR_SDF_SHIFT))&LPI2C0_SSR_SDF_MASK) /*!< LPI2C0_SSR                              */
#define LPI2C0_SSR_BEF_MASK                      (0x400U)                                            /*!< LPI2C0_SSR: BEF Mask                    */
#define LPI2C0_SSR_BEF_SHIFT                     (10U)                                               /*!< LPI2C0_SSR: BEF Position                */
#define LPI2C0_SSR_BEF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SSR_BEF_SHIFT))&LPI2C0_SSR_BEF_MASK) /*!< LPI2C0_SSR                              */
#define LPI2C0_SSR_FEF_MASK                      (0x800U)                                            /*!< LPI2C0_SSR: FEF Mask                    */
#define LPI2C0_SSR_FEF_SHIFT                     (11U)                                               /*!< LPI2C0_SSR: FEF Position                */
#define LPI2C0_SSR_FEF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SSR_FEF_SHIFT))&LPI2C0_SSR_FEF_MASK) /*!< LPI2C0_SSR                              */
#define LPI2C0_SSR_AM0F_MASK                     (0x1000U)                                           /*!< LPI2C0_SSR: AM0F Mask                   */
#define LPI2C0_SSR_AM0F_SHIFT                    (12U)                                               /*!< LPI2C0_SSR: AM0F Position               */
#define LPI2C0_SSR_AM0F(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C0_SSR_AM0F_SHIFT))&LPI2C0_SSR_AM0F_MASK) /*!< LPI2C0_SSR                              */
#define LPI2C0_SSR_AM1F_MASK                     (0x2000U)                                           /*!< LPI2C0_SSR: AM1F Mask                   */
#define LPI2C0_SSR_AM1F_SHIFT                    (13U)                                               /*!< LPI2C0_SSR: AM1F Position               */
#define LPI2C0_SSR_AM1F(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C0_SSR_AM1F_SHIFT))&LPI2C0_SSR_AM1F_MASK) /*!< LPI2C0_SSR                              */
#define LPI2C0_SSR_GCF_MASK                      (0x4000U)                                           /*!< LPI2C0_SSR: GCF Mask                    */
#define LPI2C0_SSR_GCF_SHIFT                     (14U)                                               /*!< LPI2C0_SSR: GCF Position                */
#define LPI2C0_SSR_GCF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SSR_GCF_SHIFT))&LPI2C0_SSR_GCF_MASK) /*!< LPI2C0_SSR                              */
#define LPI2C0_SSR_SARF_MASK                     (0x8000U)                                           /*!< LPI2C0_SSR: SARF Mask                   */
#define LPI2C0_SSR_SARF_SHIFT                    (15U)                                               /*!< LPI2C0_SSR: SARF Position               */
#define LPI2C0_SSR_SARF(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C0_SSR_SARF_SHIFT))&LPI2C0_SSR_SARF_MASK) /*!< LPI2C0_SSR                              */
#define LPI2C0_SSR_SBF_MASK                      (0x1000000U)                                        /*!< LPI2C0_SSR: SBF Mask                    */
#define LPI2C0_SSR_SBF_SHIFT                     (24U)                                               /*!< LPI2C0_SSR: SBF Position                */
#define LPI2C0_SSR_SBF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SSR_SBF_SHIFT))&LPI2C0_SSR_SBF_MASK) /*!< LPI2C0_SSR                              */
#define LPI2C0_SSR_BBF_MASK                      (0x2000000U)                                        /*!< LPI2C0_SSR: BBF Mask                    */
#define LPI2C0_SSR_BBF_SHIFT                     (25U)                                               /*!< LPI2C0_SSR: BBF Position                */
#define LPI2C0_SSR_BBF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C0_SSR_BBF_SHIFT))&LPI2C0_SSR_BBF_MASK) /*!< LPI2C0_SSR                              */
/* ------- SIER Bit Fields                          ------ */
#define LPI2C0_SIER_TDIE_MASK                    (0x1U)                                              /*!< LPI2C0_SIER: TDIE Mask                  */
#define LPI2C0_SIER_TDIE_SHIFT                   (0U)                                                /*!< LPI2C0_SIER: TDIE Position              */
#define LPI2C0_SIER_TDIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_SIER_TDIE_SHIFT))&LPI2C0_SIER_TDIE_MASK) /*!< LPI2C0_SIER                             */
#define LPI2C0_SIER_RDIE_MASK                    (0x2U)                                              /*!< LPI2C0_SIER: RDIE Mask                  */
#define LPI2C0_SIER_RDIE_SHIFT                   (1U)                                                /*!< LPI2C0_SIER: RDIE Position              */
#define LPI2C0_SIER_RDIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_SIER_RDIE_SHIFT))&LPI2C0_SIER_RDIE_MASK) /*!< LPI2C0_SIER                             */
#define LPI2C0_SIER_AVIE_MASK                    (0x4U)                                              /*!< LPI2C0_SIER: AVIE Mask                  */
#define LPI2C0_SIER_AVIE_SHIFT                   (2U)                                                /*!< LPI2C0_SIER: AVIE Position              */
#define LPI2C0_SIER_AVIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_SIER_AVIE_SHIFT))&LPI2C0_SIER_AVIE_MASK) /*!< LPI2C0_SIER                             */
#define LPI2C0_SIER_TAIE_MASK                    (0x8U)                                              /*!< LPI2C0_SIER: TAIE Mask                  */
#define LPI2C0_SIER_TAIE_SHIFT                   (3U)                                                /*!< LPI2C0_SIER: TAIE Position              */
#define LPI2C0_SIER_TAIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_SIER_TAIE_SHIFT))&LPI2C0_SIER_TAIE_MASK) /*!< LPI2C0_SIER                             */
#define LPI2C0_SIER_RSIE_MASK                    (0x100U)                                            /*!< LPI2C0_SIER: RSIE Mask                  */
#define LPI2C0_SIER_RSIE_SHIFT                   (8U)                                                /*!< LPI2C0_SIER: RSIE Position              */
#define LPI2C0_SIER_RSIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_SIER_RSIE_SHIFT))&LPI2C0_SIER_RSIE_MASK) /*!< LPI2C0_SIER                             */
#define LPI2C0_SIER_SDIE_MASK                    (0x200U)                                            /*!< LPI2C0_SIER: SDIE Mask                  */
#define LPI2C0_SIER_SDIE_SHIFT                   (9U)                                                /*!< LPI2C0_SIER: SDIE Position              */
#define LPI2C0_SIER_SDIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_SIER_SDIE_SHIFT))&LPI2C0_SIER_SDIE_MASK) /*!< LPI2C0_SIER                             */
#define LPI2C0_SIER_BEIE_MASK                    (0x400U)                                            /*!< LPI2C0_SIER: BEIE Mask                  */
#define LPI2C0_SIER_BEIE_SHIFT                   (10U)                                               /*!< LPI2C0_SIER: BEIE Position              */
#define LPI2C0_SIER_BEIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_SIER_BEIE_SHIFT))&LPI2C0_SIER_BEIE_MASK) /*!< LPI2C0_SIER                             */
#define LPI2C0_SIER_FEIE_MASK                    (0x800U)                                            /*!< LPI2C0_SIER: FEIE Mask                  */
#define LPI2C0_SIER_FEIE_SHIFT                   (11U)                                               /*!< LPI2C0_SIER: FEIE Position              */
#define LPI2C0_SIER_FEIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_SIER_FEIE_SHIFT))&LPI2C0_SIER_FEIE_MASK) /*!< LPI2C0_SIER                             */
#define LPI2C0_SIER_AM0IE_MASK                   (0x1000U)                                           /*!< LPI2C0_SIER: AM0IE Mask                 */
#define LPI2C0_SIER_AM0IE_SHIFT                  (12U)                                               /*!< LPI2C0_SIER: AM0IE Position             */
#define LPI2C0_SIER_AM0IE(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C0_SIER_AM0IE_SHIFT))&LPI2C0_SIER_AM0IE_MASK) /*!< LPI2C0_SIER                             */
#define LPI2C0_SIER_AM1F_MASK                    (0x2000U)                                           /*!< LPI2C0_SIER: AM1F Mask                  */
#define LPI2C0_SIER_AM1F_SHIFT                   (13U)                                               /*!< LPI2C0_SIER: AM1F Position              */
#define LPI2C0_SIER_AM1F(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_SIER_AM1F_SHIFT))&LPI2C0_SIER_AM1F_MASK) /*!< LPI2C0_SIER                             */
#define LPI2C0_SIER_GCIE_MASK                    (0x4000U)                                           /*!< LPI2C0_SIER: GCIE Mask                  */
#define LPI2C0_SIER_GCIE_SHIFT                   (14U)                                               /*!< LPI2C0_SIER: GCIE Position              */
#define LPI2C0_SIER_GCIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_SIER_GCIE_SHIFT))&LPI2C0_SIER_GCIE_MASK) /*!< LPI2C0_SIER                             */
#define LPI2C0_SIER_SARIE_MASK                   (0x8000U)                                           /*!< LPI2C0_SIER: SARIE Mask                 */
#define LPI2C0_SIER_SARIE_SHIFT                  (15U)                                               /*!< LPI2C0_SIER: SARIE Position             */
#define LPI2C0_SIER_SARIE(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C0_SIER_SARIE_SHIFT))&LPI2C0_SIER_SARIE_MASK) /*!< LPI2C0_SIER                             */
/* ------- SDER Bit Fields                          ------ */
#define LPI2C0_SDER_TDDE_MASK                    (0x1U)                                              /*!< LPI2C0_SDER: TDDE Mask                  */
#define LPI2C0_SDER_TDDE_SHIFT                   (0U)                                                /*!< LPI2C0_SDER: TDDE Position              */
#define LPI2C0_SDER_TDDE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_SDER_TDDE_SHIFT))&LPI2C0_SDER_TDDE_MASK) /*!< LPI2C0_SDER                             */
#define LPI2C0_SDER_RDDE_MASK                    (0x2U)                                              /*!< LPI2C0_SDER: RDDE Mask                  */
#define LPI2C0_SDER_RDDE_SHIFT                   (1U)                                                /*!< LPI2C0_SDER: RDDE Position              */
#define LPI2C0_SDER_RDDE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_SDER_RDDE_SHIFT))&LPI2C0_SDER_RDDE_MASK) /*!< LPI2C0_SDER                             */
#define LPI2C0_SDER_AVDE_MASK                    (0x4U)                                              /*!< LPI2C0_SDER: AVDE Mask                  */
#define LPI2C0_SDER_AVDE_SHIFT                   (2U)                                                /*!< LPI2C0_SDER: AVDE Position              */
#define LPI2C0_SDER_AVDE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_SDER_AVDE_SHIFT))&LPI2C0_SDER_AVDE_MASK) /*!< LPI2C0_SDER                             */
/* ------- SCFGR1 Bit Fields                        ------ */
#define LPI2C0_SCFGR1_ADRSTALL_MASK              (0x1U)                                              /*!< LPI2C0_SCFGR1: ADRSTALL Mask            */
#define LPI2C0_SCFGR1_ADRSTALL_SHIFT             (0U)                                                /*!< LPI2C0_SCFGR1: ADRSTALL Position        */
#define LPI2C0_SCFGR1_ADRSTALL(x)                (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR1_ADRSTALL_SHIFT))&LPI2C0_SCFGR1_ADRSTALL_MASK) /*!< LPI2C0_SCFGR1                           */
#define LPI2C0_SCFGR1_RXSTALL_MASK               (0x2U)                                              /*!< LPI2C0_SCFGR1: RXSTALL Mask             */
#define LPI2C0_SCFGR1_RXSTALL_SHIFT              (1U)                                                /*!< LPI2C0_SCFGR1: RXSTALL Position         */
#define LPI2C0_SCFGR1_RXSTALL(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR1_RXSTALL_SHIFT))&LPI2C0_SCFGR1_RXSTALL_MASK) /*!< LPI2C0_SCFGR1                           */
#define LPI2C0_SCFGR1_TXDSTALL_MASK              (0x4U)                                              /*!< LPI2C0_SCFGR1: TXDSTALL Mask            */
#define LPI2C0_SCFGR1_TXDSTALL_SHIFT             (2U)                                                /*!< LPI2C0_SCFGR1: TXDSTALL Position        */
#define LPI2C0_SCFGR1_TXDSTALL(x)                (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR1_TXDSTALL_SHIFT))&LPI2C0_SCFGR1_TXDSTALL_MASK) /*!< LPI2C0_SCFGR1                           */
#define LPI2C0_SCFGR1_ACKSTALL_MASK              (0x8U)                                              /*!< LPI2C0_SCFGR1: ACKSTALL Mask            */
#define LPI2C0_SCFGR1_ACKSTALL_SHIFT             (3U)                                                /*!< LPI2C0_SCFGR1: ACKSTALL Position        */
#define LPI2C0_SCFGR1_ACKSTALL(x)                (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR1_ACKSTALL_SHIFT))&LPI2C0_SCFGR1_ACKSTALL_MASK) /*!< LPI2C0_SCFGR1                           */
#define LPI2C0_SCFGR1_GCEN_MASK                  (0x100U)                                            /*!< LPI2C0_SCFGR1: GCEN Mask                */
#define LPI2C0_SCFGR1_GCEN_SHIFT                 (8U)                                                /*!< LPI2C0_SCFGR1: GCEN Position            */
#define LPI2C0_SCFGR1_GCEN(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR1_GCEN_SHIFT))&LPI2C0_SCFGR1_GCEN_MASK) /*!< LPI2C0_SCFGR1                           */
#define LPI2C0_SCFGR1_SAEN_MASK                  (0x200U)                                            /*!< LPI2C0_SCFGR1: SAEN Mask                */
#define LPI2C0_SCFGR1_SAEN_SHIFT                 (9U)                                                /*!< LPI2C0_SCFGR1: SAEN Position            */
#define LPI2C0_SCFGR1_SAEN(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR1_SAEN_SHIFT))&LPI2C0_SCFGR1_SAEN_MASK) /*!< LPI2C0_SCFGR1                           */
#define LPI2C0_SCFGR1_TXCFG_MASK                 (0x400U)                                            /*!< LPI2C0_SCFGR1: TXCFG Mask               */
#define LPI2C0_SCFGR1_TXCFG_SHIFT                (10U)                                               /*!< LPI2C0_SCFGR1: TXCFG Position           */
#define LPI2C0_SCFGR1_TXCFG(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR1_TXCFG_SHIFT))&LPI2C0_SCFGR1_TXCFG_MASK) /*!< LPI2C0_SCFGR1                           */
#define LPI2C0_SCFGR1_RXCFG_MASK                 (0x800U)                                            /*!< LPI2C0_SCFGR1: RXCFG Mask               */
#define LPI2C0_SCFGR1_RXCFG_SHIFT                (11U)                                               /*!< LPI2C0_SCFGR1: RXCFG Position           */
#define LPI2C0_SCFGR1_RXCFG(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR1_RXCFG_SHIFT))&LPI2C0_SCFGR1_RXCFG_MASK) /*!< LPI2C0_SCFGR1                           */
#define LPI2C0_SCFGR1_IGNACK_MASK                (0x1000U)                                           /*!< LPI2C0_SCFGR1: IGNACK Mask              */
#define LPI2C0_SCFGR1_IGNACK_SHIFT               (12U)                                               /*!< LPI2C0_SCFGR1: IGNACK Position          */
#define LPI2C0_SCFGR1_IGNACK(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR1_IGNACK_SHIFT))&LPI2C0_SCFGR1_IGNACK_MASK) /*!< LPI2C0_SCFGR1                           */
#define LPI2C0_SCFGR1_HSMEN_MASK                 (0x2000U)                                           /*!< LPI2C0_SCFGR1: HSMEN Mask               */
#define LPI2C0_SCFGR1_HSMEN_SHIFT                (13U)                                               /*!< LPI2C0_SCFGR1: HSMEN Position           */
#define LPI2C0_SCFGR1_HSMEN(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR1_HSMEN_SHIFT))&LPI2C0_SCFGR1_HSMEN_MASK) /*!< LPI2C0_SCFGR1                           */
#define LPI2C0_SCFGR1_ADDRCFG_MASK               (0x70000U)                                          /*!< LPI2C0_SCFGR1: ADDRCFG Mask             */
#define LPI2C0_SCFGR1_ADDRCFG_SHIFT              (16U)                                               /*!< LPI2C0_SCFGR1: ADDRCFG Position         */
#define LPI2C0_SCFGR1_ADDRCFG(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR1_ADDRCFG_SHIFT))&LPI2C0_SCFGR1_ADDRCFG_MASK) /*!< LPI2C0_SCFGR1                           */
/* ------- SCFGR2 Bit Fields                        ------ */
#define LPI2C0_SCFGR2_CLKHOLD_MASK               (0xFU)                                              /*!< LPI2C0_SCFGR2: CLKHOLD Mask             */
#define LPI2C0_SCFGR2_CLKHOLD_SHIFT              (0U)                                                /*!< LPI2C0_SCFGR2: CLKHOLD Position         */
#define LPI2C0_SCFGR2_CLKHOLD(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR2_CLKHOLD_SHIFT))&LPI2C0_SCFGR2_CLKHOLD_MASK) /*!< LPI2C0_SCFGR2                           */
#define LPI2C0_SCFGR2_DATAVD_MASK                (0x3F00U)                                           /*!< LPI2C0_SCFGR2: DATAVD Mask              */
#define LPI2C0_SCFGR2_DATAVD_SHIFT               (8U)                                                /*!< LPI2C0_SCFGR2: DATAVD Position          */
#define LPI2C0_SCFGR2_DATAVD(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR2_DATAVD_SHIFT))&LPI2C0_SCFGR2_DATAVD_MASK) /*!< LPI2C0_SCFGR2                           */
#define LPI2C0_SCFGR2_FILTSCL_MASK               (0xF0000U)                                          /*!< LPI2C0_SCFGR2: FILTSCL Mask             */
#define LPI2C0_SCFGR2_FILTSCL_SHIFT              (16U)                                               /*!< LPI2C0_SCFGR2: FILTSCL Position         */
#define LPI2C0_SCFGR2_FILTSCL(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR2_FILTSCL_SHIFT))&LPI2C0_SCFGR2_FILTSCL_MASK) /*!< LPI2C0_SCFGR2                           */
#define LPI2C0_SCFGR2_FILTSDA_MASK               (0xF000000U)                                        /*!< LPI2C0_SCFGR2: FILTSDA Mask             */
#define LPI2C0_SCFGR2_FILTSDA_SHIFT              (24U)                                               /*!< LPI2C0_SCFGR2: FILTSDA Position         */
#define LPI2C0_SCFGR2_FILTSDA(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C0_SCFGR2_FILTSDA_SHIFT))&LPI2C0_SCFGR2_FILTSDA_MASK) /*!< LPI2C0_SCFGR2                           */
/* ------- SAMR Bit Fields                          ------ */
#define LPI2C0_SAMR_ADDR0_MASK                   (0x7FEU)                                            /*!< LPI2C0_SAMR: ADDR0 Mask                 */
#define LPI2C0_SAMR_ADDR0_SHIFT                  (1U)                                                /*!< LPI2C0_SAMR: ADDR0 Position             */
#define LPI2C0_SAMR_ADDR0(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C0_SAMR_ADDR0_SHIFT))&LPI2C0_SAMR_ADDR0_MASK) /*!< LPI2C0_SAMR                             */
#define LPI2C0_SAMR_ADDR1_MASK                   (0x7FE0000U)                                        /*!< LPI2C0_SAMR: ADDR1 Mask                 */
#define LPI2C0_SAMR_ADDR1_SHIFT                  (17U)                                               /*!< LPI2C0_SAMR: ADDR1 Position             */
#define LPI2C0_SAMR_ADDR1(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C0_SAMR_ADDR1_SHIFT))&LPI2C0_SAMR_ADDR1_MASK) /*!< LPI2C0_SAMR                             */
/* ------- SASR Bit Fields                          ------ */
#define LPI2C0_SASR_RADDR_MASK                   (0x7FFU)                                            /*!< LPI2C0_SASR: RADDR Mask                 */
#define LPI2C0_SASR_RADDR_SHIFT                  (0U)                                                /*!< LPI2C0_SASR: RADDR Position             */
#define LPI2C0_SASR_RADDR(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C0_SASR_RADDR_SHIFT))&LPI2C0_SASR_RADDR_MASK) /*!< LPI2C0_SASR                             */
#define LPI2C0_SASR_ANV_MASK                     (0x4000U)                                           /*!< LPI2C0_SASR: ANV Mask                   */
#define LPI2C0_SASR_ANV_SHIFT                    (14U)                                               /*!< LPI2C0_SASR: ANV Position               */
#define LPI2C0_SASR_ANV(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C0_SASR_ANV_SHIFT))&LPI2C0_SASR_ANV_MASK) /*!< LPI2C0_SASR                             */
/* ------- STAR Bit Fields                          ------ */
#define LPI2C0_STAR_TXNACK_MASK                  (0x1U)                                              /*!< LPI2C0_STAR: TXNACK Mask                */
#define LPI2C0_STAR_TXNACK_SHIFT                 (0U)                                                /*!< LPI2C0_STAR: TXNACK Position            */
#define LPI2C0_STAR_TXNACK(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C0_STAR_TXNACK_SHIFT))&LPI2C0_STAR_TXNACK_MASK) /*!< LPI2C0_STAR                             */
/* ------- STDR Bit Fields                          ------ */
#define LPI2C0_STDR_DATA_MASK                    (0xFFU)                                             /*!< LPI2C0_STDR: DATA Mask                  */
#define LPI2C0_STDR_DATA_SHIFT                   (0U)                                                /*!< LPI2C0_STDR: DATA Position              */
#define LPI2C0_STDR_DATA(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_STDR_DATA_SHIFT))&LPI2C0_STDR_DATA_MASK) /*!< LPI2C0_STDR                             */
/* ------- SRDR Bit Fields                          ------ */
#define LPI2C0_SRDR_DATA_MASK                    (0xFFU)                                             /*!< LPI2C0_SRDR: DATA Mask                  */
#define LPI2C0_SRDR_DATA_SHIFT                   (0U)                                                /*!< LPI2C0_SRDR: DATA Position              */
#define LPI2C0_SRDR_DATA(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C0_SRDR_DATA_SHIFT))&LPI2C0_SRDR_DATA_MASK) /*!< LPI2C0_SRDR                             */
#define LPI2C0_SRDR_RXEMPTY_MASK                 (0x4000U)                                           /*!< LPI2C0_SRDR: RXEMPTY Mask               */
#define LPI2C0_SRDR_RXEMPTY_SHIFT                (14U)                                               /*!< LPI2C0_SRDR: RXEMPTY Position           */
#define LPI2C0_SRDR_RXEMPTY(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C0_SRDR_RXEMPTY_SHIFT))&LPI2C0_SRDR_RXEMPTY_MASK) /*!< LPI2C0_SRDR                             */
#define LPI2C0_SRDR_SOF_MASK                     (0x8000U)                                           /*!< LPI2C0_SRDR: SOF Mask                   */
#define LPI2C0_SRDR_SOF_SHIFT                    (15U)                                               /*!< LPI2C0_SRDR: SOF Position               */
#define LPI2C0_SRDR_SOF(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C0_SRDR_SOF_SHIFT))&LPI2C0_SRDR_SOF_MASK) /*!< LPI2C0_SRDR                             */
/**
 * @} */ /* End group LPI2C_Register_Masks_GROUP 
 */

/* LPI2C0 - Peripheral instance base addresses */
#define LPI2C0_BasePtr                 0x40066000UL //!< Peripheral base address
#define LPI2C0                         ((LPI2C0_Type *) LPI2C0_BasePtr) //!< Freescale base pointer
#define LPI2C0_BASE_PTR                (LPI2C0) //!< Freescale style base pointer
/**
 * @} */ /* End group LPI2C_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup LPI2C_Peripheral_access_layer_GROUP LPI2C Peripheral Access Layer
* @brief C Struct for LPI2C
* @{
*/

/* ================================================================================ */
/* ================           LPI2C1 (derived from LPI2C0)         ================ */
/* ================================================================================ */

/**
 * @brief Low power I2C
 */

/* LPI2C1 - Peripheral instance base addresses */
#define LPI2C1_BasePtr                 0x40067000UL //!< Peripheral base address
#define LPI2C1                         ((LPI2C0_Type *) LPI2C1_BasePtr) //!< Freescale base pointer
#define LPI2C1_BASE_PTR                (LPI2C1) //!< Freescale style base pointer
/**
 * @} */ /* End group LPI2C_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup LPIT_Peripheral_access_layer_GROUP LPIT Peripheral Access Layer
* @brief C Struct for LPIT
* @{
*/

/* ================================================================================ */
/* ================           LPIT0 (file:LPIT0_MKE15Z7)           ================ */
/* ================================================================================ */

/**
 * @brief Low Power Periodic Interrupt Timer
 */
/**
* @addtogroup LPIT_structs_GROUP LPIT struct
* @brief Struct for LPIT
* @{
*/
typedef struct {                                /*       LPIT0 Structure                                              */
   __I  uint32_t  VERID;                        /**< 0000: Version ID Register                                          */
   __I  uint32_t  PARAM;                        /**< 0004: Parameter Register                                           */
   __IO uint32_t  MCR;                          /**< 0008: Module Control Register                                      */
   __IO uint32_t  MSR;                          /**< 000C: Module Status Register                                       */
   __IO uint32_t  MIER;                         /**< 0010: Module Interrupt Enable Register                             */
   __IO uint32_t  SETTEN;                       /**< 0014: Set Timer Enable Register                                    */
   __O  uint32_t  CLRTEN;                       /**< 0018: Clear Timer Enable Register                                  */
        uint8_t   RESERVED_0[4];               
   __IO uint32_t  TVAL0;                        /**< 0020: Timer Value Register                                         */
   __I  uint32_t  CVAL0;                        /**< 0024: Current Timer Value                                          */
   __IO uint32_t  TCTRL0;                       /**< 0028: Timer Control Register                                       */
        uint8_t   RESERVED_1[4];               
   __IO uint32_t  TVAL1;                        /**< 0030: Timer Value Register                                         */
   __I  uint32_t  CVAL1;                        /**< 0034: Current Timer Value                                          */
   __IO uint32_t  TCTRL1;                       /**< 0038: Timer Control Register                                       */
        uint8_t   RESERVED_2[4];               
   __IO uint32_t  TVAL2;                        /**< 0040: Timer Value Register                                         */
   __I  uint32_t  CVAL2;                        /**< 0044: Current Timer Value                                          */
   __IO uint32_t  TCTRL2;                       /**< 0048: Timer Control Register                                       */
        uint8_t   RESERVED_3[4];               
   __IO uint32_t  TVAL3;                        /**< 0050: Timer Value Register                                         */
   __I  uint32_t  CVAL3;                        /**< 0054: Current Timer Value                                          */
   __IO uint32_t  TCTRL3;                       /**< 0058: Timer Control Register                                       */
} LPIT0_Type;

/**
 * @} */ /* End group LPIT_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'LPIT0' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup LPIT_Register_Masks_GROUP LPIT Register Masks
* @brief Register Masks for LPIT
* @{
*/
/* ------- VERID Bit Fields                         ------ */
#define LPIT0_VERID_FEATURE_MASK                 (0xFFFFU)                                           /*!< LPIT0_VERID: FEATURE Mask               */
#define LPIT0_VERID_FEATURE_SHIFT                (0U)                                                /*!< LPIT0_VERID: FEATURE Position           */
#define LPIT0_VERID_FEATURE(x)                   (((uint32_t)(((uint32_t)(x))<<LPIT0_VERID_FEATURE_SHIFT))&LPIT0_VERID_FEATURE_MASK) /*!< LPIT0_VERID                             */
#define LPIT0_VERID_MINOR_MASK                   (0xFF0000U)                                         /*!< LPIT0_VERID: MINOR Mask                 */
#define LPIT0_VERID_MINOR_SHIFT                  (16U)                                               /*!< LPIT0_VERID: MINOR Position             */
#define LPIT0_VERID_MINOR(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_VERID_MINOR_SHIFT))&LPIT0_VERID_MINOR_MASK) /*!< LPIT0_VERID                             */
#define LPIT0_VERID_MAJOR_MASK                   (0xFF000000U)                                       /*!< LPIT0_VERID: MAJOR Mask                 */
#define LPIT0_VERID_MAJOR_SHIFT                  (24U)                                               /*!< LPIT0_VERID: MAJOR Position             */
#define LPIT0_VERID_MAJOR(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_VERID_MAJOR_SHIFT))&LPIT0_VERID_MAJOR_MASK) /*!< LPIT0_VERID                             */
/* ------- PARAM Bit Fields                         ------ */
#define LPIT0_PARAM_CHANNEL_MASK                 (0xFFU)                                             /*!< LPIT0_PARAM: CHANNEL Mask               */
#define LPIT0_PARAM_CHANNEL_SHIFT                (0U)                                                /*!< LPIT0_PARAM: CHANNEL Position           */
#define LPIT0_PARAM_CHANNEL(x)                   (((uint32_t)(((uint32_t)(x))<<LPIT0_PARAM_CHANNEL_SHIFT))&LPIT0_PARAM_CHANNEL_MASK) /*!< LPIT0_PARAM                             */
#define LPIT0_PARAM_EXT_TRIG_MASK                (0xFF00U)                                           /*!< LPIT0_PARAM: EXT_TRIG Mask              */
#define LPIT0_PARAM_EXT_TRIG_SHIFT               (8U)                                                /*!< LPIT0_PARAM: EXT_TRIG Position          */
#define LPIT0_PARAM_EXT_TRIG(x)                  (((uint32_t)(((uint32_t)(x))<<LPIT0_PARAM_EXT_TRIG_SHIFT))&LPIT0_PARAM_EXT_TRIG_MASK) /*!< LPIT0_PARAM                             */
/* ------- MCR Bit Fields                           ------ */
#define LPIT0_MCR_M_CEN_MASK                     (0x1U)                                              /*!< LPIT0_MCR: M_CEN Mask                   */
#define LPIT0_MCR_M_CEN_SHIFT                    (0U)                                                /*!< LPIT0_MCR: M_CEN Position               */
#define LPIT0_MCR_M_CEN(x)                       (((uint32_t)(((uint32_t)(x))<<LPIT0_MCR_M_CEN_SHIFT))&LPIT0_MCR_M_CEN_MASK) /*!< LPIT0_MCR                               */
#define LPIT0_MCR_SW_RST_MASK                    (0x2U)                                              /*!< LPIT0_MCR: SW_RST Mask                  */
#define LPIT0_MCR_SW_RST_SHIFT                   (1U)                                                /*!< LPIT0_MCR: SW_RST Position              */
#define LPIT0_MCR_SW_RST(x)                      (((uint32_t)(((uint32_t)(x))<<LPIT0_MCR_SW_RST_SHIFT))&LPIT0_MCR_SW_RST_MASK) /*!< LPIT0_MCR                               */
#define LPIT0_MCR_DOZE_EN_MASK                   (0x4U)                                              /*!< LPIT0_MCR: DOZE_EN Mask                 */
#define LPIT0_MCR_DOZE_EN_SHIFT                  (2U)                                                /*!< LPIT0_MCR: DOZE_EN Position             */
#define LPIT0_MCR_DOZE_EN(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_MCR_DOZE_EN_SHIFT))&LPIT0_MCR_DOZE_EN_MASK) /*!< LPIT0_MCR                               */
#define LPIT0_MCR_DBG_EN_MASK                    (0x8U)                                              /*!< LPIT0_MCR: DBG_EN Mask                  */
#define LPIT0_MCR_DBG_EN_SHIFT                   (3U)                                                /*!< LPIT0_MCR: DBG_EN Position              */
#define LPIT0_MCR_DBG_EN(x)                      (((uint32_t)(((uint32_t)(x))<<LPIT0_MCR_DBG_EN_SHIFT))&LPIT0_MCR_DBG_EN_MASK) /*!< LPIT0_MCR                               */
/* ------- MSR Bit Fields                           ------ */
#define LPIT0_MSR_TIF0_MASK                      (0x1U)                                              /*!< LPIT0_MSR: TIF0 Mask                    */
#define LPIT0_MSR_TIF0_SHIFT                     (0U)                                                /*!< LPIT0_MSR: TIF0 Position                */
#define LPIT0_MSR_TIF0(x)                        (((uint32_t)(((uint32_t)(x))<<LPIT0_MSR_TIF0_SHIFT))&LPIT0_MSR_TIF0_MASK) /*!< LPIT0_MSR                               */
#define LPIT0_MSR_TIF1_MASK                      (0x2U)                                              /*!< LPIT0_MSR: TIF1 Mask                    */
#define LPIT0_MSR_TIF1_SHIFT                     (1U)                                                /*!< LPIT0_MSR: TIF1 Position                */
#define LPIT0_MSR_TIF1(x)                        (((uint32_t)(((uint32_t)(x))<<LPIT0_MSR_TIF1_SHIFT))&LPIT0_MSR_TIF1_MASK) /*!< LPIT0_MSR                               */
#define LPIT0_MSR_TIF2_MASK                      (0x4U)                                              /*!< LPIT0_MSR: TIF2 Mask                    */
#define LPIT0_MSR_TIF2_SHIFT                     (2U)                                                /*!< LPIT0_MSR: TIF2 Position                */
#define LPIT0_MSR_TIF2(x)                        (((uint32_t)(((uint32_t)(x))<<LPIT0_MSR_TIF2_SHIFT))&LPIT0_MSR_TIF2_MASK) /*!< LPIT0_MSR                               */
#define LPIT0_MSR_TIF3_MASK                      (0x8U)                                              /*!< LPIT0_MSR: TIF3 Mask                    */
#define LPIT0_MSR_TIF3_SHIFT                     (3U)                                                /*!< LPIT0_MSR: TIF3 Position                */
#define LPIT0_MSR_TIF3(x)                        (((uint32_t)(((uint32_t)(x))<<LPIT0_MSR_TIF3_SHIFT))&LPIT0_MSR_TIF3_MASK) /*!< LPIT0_MSR                               */
/* ------- MIER Bit Fields                          ------ */
#define LPIT0_MIER_TIE0_MASK                     (0x1U)                                              /*!< LPIT0_MIER: TIE0 Mask                   */
#define LPIT0_MIER_TIE0_SHIFT                    (0U)                                                /*!< LPIT0_MIER: TIE0 Position               */
#define LPIT0_MIER_TIE0(x)                       (((uint32_t)(((uint32_t)(x))<<LPIT0_MIER_TIE0_SHIFT))&LPIT0_MIER_TIE0_MASK) /*!< LPIT0_MIER                              */
#define LPIT0_MIER_TIE1_MASK                     (0x2U)                                              /*!< LPIT0_MIER: TIE1 Mask                   */
#define LPIT0_MIER_TIE1_SHIFT                    (1U)                                                /*!< LPIT0_MIER: TIE1 Position               */
#define LPIT0_MIER_TIE1(x)                       (((uint32_t)(((uint32_t)(x))<<LPIT0_MIER_TIE1_SHIFT))&LPIT0_MIER_TIE1_MASK) /*!< LPIT0_MIER                              */
#define LPIT0_MIER_TIE2_MASK                     (0x4U)                                              /*!< LPIT0_MIER: TIE2 Mask                   */
#define LPIT0_MIER_TIE2_SHIFT                    (2U)                                                /*!< LPIT0_MIER: TIE2 Position               */
#define LPIT0_MIER_TIE2(x)                       (((uint32_t)(((uint32_t)(x))<<LPIT0_MIER_TIE2_SHIFT))&LPIT0_MIER_TIE2_MASK) /*!< LPIT0_MIER                              */
#define LPIT0_MIER_TIE3_MASK                     (0x8U)                                              /*!< LPIT0_MIER: TIE3 Mask                   */
#define LPIT0_MIER_TIE3_SHIFT                    (3U)                                                /*!< LPIT0_MIER: TIE3 Position               */
#define LPIT0_MIER_TIE3(x)                       (((uint32_t)(((uint32_t)(x))<<LPIT0_MIER_TIE3_SHIFT))&LPIT0_MIER_TIE3_MASK) /*!< LPIT0_MIER                              */
/* ------- SETTEN Bit Fields                        ------ */
#define LPIT0_SETTEN_SET_T_EN_0_MASK             (0x1U)                                              /*!< LPIT0_SETTEN: SET_T_EN_0 Mask           */
#define LPIT0_SETTEN_SET_T_EN_0_SHIFT            (0U)                                                /*!< LPIT0_SETTEN: SET_T_EN_0 Position       */
#define LPIT0_SETTEN_SET_T_EN_0(x)               (((uint32_t)(((uint32_t)(x))<<LPIT0_SETTEN_SET_T_EN_0_SHIFT))&LPIT0_SETTEN_SET_T_EN_0_MASK) /*!< LPIT0_SETTEN                            */
#define LPIT0_SETTEN_SET_T_EN_1_MASK             (0x2U)                                              /*!< LPIT0_SETTEN: SET_T_EN_1 Mask           */
#define LPIT0_SETTEN_SET_T_EN_1_SHIFT            (1U)                                                /*!< LPIT0_SETTEN: SET_T_EN_1 Position       */
#define LPIT0_SETTEN_SET_T_EN_1(x)               (((uint32_t)(((uint32_t)(x))<<LPIT0_SETTEN_SET_T_EN_1_SHIFT))&LPIT0_SETTEN_SET_T_EN_1_MASK) /*!< LPIT0_SETTEN                            */
#define LPIT0_SETTEN_SET_T_EN_2_MASK             (0x4U)                                              /*!< LPIT0_SETTEN: SET_T_EN_2 Mask           */
#define LPIT0_SETTEN_SET_T_EN_2_SHIFT            (2U)                                                /*!< LPIT0_SETTEN: SET_T_EN_2 Position       */
#define LPIT0_SETTEN_SET_T_EN_2(x)               (((uint32_t)(((uint32_t)(x))<<LPIT0_SETTEN_SET_T_EN_2_SHIFT))&LPIT0_SETTEN_SET_T_EN_2_MASK) /*!< LPIT0_SETTEN                            */
#define LPIT0_SETTEN_SET_T_EN_3_MASK             (0x8U)                                              /*!< LPIT0_SETTEN: SET_T_EN_3 Mask           */
#define LPIT0_SETTEN_SET_T_EN_3_SHIFT            (3U)                                                /*!< LPIT0_SETTEN: SET_T_EN_3 Position       */
#define LPIT0_SETTEN_SET_T_EN_3(x)               (((uint32_t)(((uint32_t)(x))<<LPIT0_SETTEN_SET_T_EN_3_SHIFT))&LPIT0_SETTEN_SET_T_EN_3_MASK) /*!< LPIT0_SETTEN                            */
/* ------- CLRTEN Bit Fields                        ------ */
#define LPIT0_CLRTEN_CLR_T_EN_0_MASK             (0x1U)                                              /*!< LPIT0_CLRTEN: CLR_T_EN_0 Mask           */
#define LPIT0_CLRTEN_CLR_T_EN_0_SHIFT            (0U)                                                /*!< LPIT0_CLRTEN: CLR_T_EN_0 Position       */
#define LPIT0_CLRTEN_CLR_T_EN_0(x)               (((uint32_t)(((uint32_t)(x))<<LPIT0_CLRTEN_CLR_T_EN_0_SHIFT))&LPIT0_CLRTEN_CLR_T_EN_0_MASK) /*!< LPIT0_CLRTEN                            */
#define LPIT0_CLRTEN_CLR_T_EN_1_MASK             (0x2U)                                              /*!< LPIT0_CLRTEN: CLR_T_EN_1 Mask           */
#define LPIT0_CLRTEN_CLR_T_EN_1_SHIFT            (1U)                                                /*!< LPIT0_CLRTEN: CLR_T_EN_1 Position       */
#define LPIT0_CLRTEN_CLR_T_EN_1(x)               (((uint32_t)(((uint32_t)(x))<<LPIT0_CLRTEN_CLR_T_EN_1_SHIFT))&LPIT0_CLRTEN_CLR_T_EN_1_MASK) /*!< LPIT0_CLRTEN                            */
#define LPIT0_CLRTEN_CLR_T_EN_2_MASK             (0x4U)                                              /*!< LPIT0_CLRTEN: CLR_T_EN_2 Mask           */
#define LPIT0_CLRTEN_CLR_T_EN_2_SHIFT            (2U)                                                /*!< LPIT0_CLRTEN: CLR_T_EN_2 Position       */
#define LPIT0_CLRTEN_CLR_T_EN_2(x)               (((uint32_t)(((uint32_t)(x))<<LPIT0_CLRTEN_CLR_T_EN_2_SHIFT))&LPIT0_CLRTEN_CLR_T_EN_2_MASK) /*!< LPIT0_CLRTEN                            */
#define LPIT0_CLRTEN_CLR_T_EN_3_MASK             (0x8U)                                              /*!< LPIT0_CLRTEN: CLR_T_EN_3 Mask           */
#define LPIT0_CLRTEN_CLR_T_EN_3_SHIFT            (3U)                                                /*!< LPIT0_CLRTEN: CLR_T_EN_3 Position       */
#define LPIT0_CLRTEN_CLR_T_EN_3(x)               (((uint32_t)(((uint32_t)(x))<<LPIT0_CLRTEN_CLR_T_EN_3_SHIFT))&LPIT0_CLRTEN_CLR_T_EN_3_MASK) /*!< LPIT0_CLRTEN                            */
/* ------- TVAL0 Bit Fields                         ------ */
#define LPIT0_TVAL0_TMR_VAL_MASK                 (0xFFFFFFFFU)                                       /*!< LPIT0_TVAL0: TMR_VAL Mask               */
#define LPIT0_TVAL0_TMR_VAL_SHIFT                (0U)                                                /*!< LPIT0_TVAL0: TMR_VAL Position           */
#define LPIT0_TVAL0_TMR_VAL(x)                   (((uint32_t)(((uint32_t)(x))<<LPIT0_TVAL0_TMR_VAL_SHIFT))&LPIT0_TVAL0_TMR_VAL_MASK) /*!< LPIT0_TVAL0                             */
/* ------- CVAL0 Bit Fields                         ------ */
#define LPIT0_CVAL0_TMR_CUR_VAL_MASK             (0xFFFFFFFFU)                                       /*!< LPIT0_CVAL0: TMR_CUR_VAL Mask           */
#define LPIT0_CVAL0_TMR_CUR_VAL_SHIFT            (0U)                                                /*!< LPIT0_CVAL0: TMR_CUR_VAL Position       */
#define LPIT0_CVAL0_TMR_CUR_VAL(x)               (((uint32_t)(((uint32_t)(x))<<LPIT0_CVAL0_TMR_CUR_VAL_SHIFT))&LPIT0_CVAL0_TMR_CUR_VAL_MASK) /*!< LPIT0_CVAL0                             */
/* ------- TCTRL0 Bit Fields                        ------ */
#define LPIT0_TCTRL0_T_EN_MASK                   (0x1U)                                              /*!< LPIT0_TCTRL0: T_EN Mask                 */
#define LPIT0_TCTRL0_T_EN_SHIFT                  (0U)                                                /*!< LPIT0_TCTRL0: T_EN Position             */
#define LPIT0_TCTRL0_T_EN(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL0_T_EN_SHIFT))&LPIT0_TCTRL0_T_EN_MASK) /*!< LPIT0_TCTRL0                            */
#define LPIT0_TCTRL0_CHAIN_MASK                  (0x2U)                                              /*!< LPIT0_TCTRL0: CHAIN Mask                */
#define LPIT0_TCTRL0_CHAIN_SHIFT                 (1U)                                                /*!< LPIT0_TCTRL0: CHAIN Position            */
#define LPIT0_TCTRL0_CHAIN(x)                    (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL0_CHAIN_SHIFT))&LPIT0_TCTRL0_CHAIN_MASK) /*!< LPIT0_TCTRL0                            */
#define LPIT0_TCTRL0_MODE_MASK                   (0xCU)                                              /*!< LPIT0_TCTRL0: MODE Mask                 */
#define LPIT0_TCTRL0_MODE_SHIFT                  (2U)                                                /*!< LPIT0_TCTRL0: MODE Position             */
#define LPIT0_TCTRL0_MODE(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL0_MODE_SHIFT))&LPIT0_TCTRL0_MODE_MASK) /*!< LPIT0_TCTRL0                            */
#define LPIT0_TCTRL0_TSOT_MASK                   (0x10000U)                                          /*!< LPIT0_TCTRL0: TSOT Mask                 */
#define LPIT0_TCTRL0_TSOT_SHIFT                  (16U)                                               /*!< LPIT0_TCTRL0: TSOT Position             */
#define LPIT0_TCTRL0_TSOT(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL0_TSOT_SHIFT))&LPIT0_TCTRL0_TSOT_MASK) /*!< LPIT0_TCTRL0                            */
#define LPIT0_TCTRL0_TSOI_MASK                   (0x20000U)                                          /*!< LPIT0_TCTRL0: TSOI Mask                 */
#define LPIT0_TCTRL0_TSOI_SHIFT                  (17U)                                               /*!< LPIT0_TCTRL0: TSOI Position             */
#define LPIT0_TCTRL0_TSOI(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL0_TSOI_SHIFT))&LPIT0_TCTRL0_TSOI_MASK) /*!< LPIT0_TCTRL0                            */
#define LPIT0_TCTRL0_TROT_MASK                   (0x40000U)                                          /*!< LPIT0_TCTRL0: TROT Mask                 */
#define LPIT0_TCTRL0_TROT_SHIFT                  (18U)                                               /*!< LPIT0_TCTRL0: TROT Position             */
#define LPIT0_TCTRL0_TROT(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL0_TROT_SHIFT))&LPIT0_TCTRL0_TROT_MASK) /*!< LPIT0_TCTRL0                            */
#define LPIT0_TCTRL0_TRG_SRC_MASK                (0x800000U)                                         /*!< LPIT0_TCTRL0: TRG_SRC Mask              */
#define LPIT0_TCTRL0_TRG_SRC_SHIFT               (23U)                                               /*!< LPIT0_TCTRL0: TRG_SRC Position          */
#define LPIT0_TCTRL0_TRG_SRC(x)                  (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL0_TRG_SRC_SHIFT))&LPIT0_TCTRL0_TRG_SRC_MASK) /*!< LPIT0_TCTRL0                            */
#define LPIT0_TCTRL0_TRG_SEL_MASK                (0xF000000U)                                        /*!< LPIT0_TCTRL0: TRG_SEL Mask              */
#define LPIT0_TCTRL0_TRG_SEL_SHIFT               (24U)                                               /*!< LPIT0_TCTRL0: TRG_SEL Position          */
#define LPIT0_TCTRL0_TRG_SEL(x)                  (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL0_TRG_SEL_SHIFT))&LPIT0_TCTRL0_TRG_SEL_MASK) /*!< LPIT0_TCTRL0                            */
/* ------- TVAL1 Bit Fields                         ------ */
#define LPIT0_TVAL1_TMR_VAL_MASK                 (0xFFFFFFFFU)                                       /*!< LPIT0_TVAL1: TMR_VAL Mask               */
#define LPIT0_TVAL1_TMR_VAL_SHIFT                (0U)                                                /*!< LPIT0_TVAL1: TMR_VAL Position           */
#define LPIT0_TVAL1_TMR_VAL(x)                   (((uint32_t)(((uint32_t)(x))<<LPIT0_TVAL1_TMR_VAL_SHIFT))&LPIT0_TVAL1_TMR_VAL_MASK) /*!< LPIT0_TVAL1                             */
/* ------- CVAL1 Bit Fields                         ------ */
#define LPIT0_CVAL1_TMR_CUR_VAL_MASK             (0xFFFFFFFFU)                                       /*!< LPIT0_CVAL1: TMR_CUR_VAL Mask           */
#define LPIT0_CVAL1_TMR_CUR_VAL_SHIFT            (0U)                                                /*!< LPIT0_CVAL1: TMR_CUR_VAL Position       */
#define LPIT0_CVAL1_TMR_CUR_VAL(x)               (((uint32_t)(((uint32_t)(x))<<LPIT0_CVAL1_TMR_CUR_VAL_SHIFT))&LPIT0_CVAL1_TMR_CUR_VAL_MASK) /*!< LPIT0_CVAL1                             */
/* ------- TCTRL1 Bit Fields                        ------ */
#define LPIT0_TCTRL1_T_EN_MASK                   (0x1U)                                              /*!< LPIT0_TCTRL1: T_EN Mask                 */
#define LPIT0_TCTRL1_T_EN_SHIFT                  (0U)                                                /*!< LPIT0_TCTRL1: T_EN Position             */
#define LPIT0_TCTRL1_T_EN(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL1_T_EN_SHIFT))&LPIT0_TCTRL1_T_EN_MASK) /*!< LPIT0_TCTRL1                            */
#define LPIT0_TCTRL1_CHAIN_MASK                  (0x2U)                                              /*!< LPIT0_TCTRL1: CHAIN Mask                */
#define LPIT0_TCTRL1_CHAIN_SHIFT                 (1U)                                                /*!< LPIT0_TCTRL1: CHAIN Position            */
#define LPIT0_TCTRL1_CHAIN(x)                    (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL1_CHAIN_SHIFT))&LPIT0_TCTRL1_CHAIN_MASK) /*!< LPIT0_TCTRL1                            */
#define LPIT0_TCTRL1_MODE_MASK                   (0xCU)                                              /*!< LPIT0_TCTRL1: MODE Mask                 */
#define LPIT0_TCTRL1_MODE_SHIFT                  (2U)                                                /*!< LPIT0_TCTRL1: MODE Position             */
#define LPIT0_TCTRL1_MODE(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL1_MODE_SHIFT))&LPIT0_TCTRL1_MODE_MASK) /*!< LPIT0_TCTRL1                            */
#define LPIT0_TCTRL1_TSOT_MASK                   (0x10000U)                                          /*!< LPIT0_TCTRL1: TSOT Mask                 */
#define LPIT0_TCTRL1_TSOT_SHIFT                  (16U)                                               /*!< LPIT0_TCTRL1: TSOT Position             */
#define LPIT0_TCTRL1_TSOT(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL1_TSOT_SHIFT))&LPIT0_TCTRL1_TSOT_MASK) /*!< LPIT0_TCTRL1                            */
#define LPIT0_TCTRL1_TSOI_MASK                   (0x20000U)                                          /*!< LPIT0_TCTRL1: TSOI Mask                 */
#define LPIT0_TCTRL1_TSOI_SHIFT                  (17U)                                               /*!< LPIT0_TCTRL1: TSOI Position             */
#define LPIT0_TCTRL1_TSOI(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL1_TSOI_SHIFT))&LPIT0_TCTRL1_TSOI_MASK) /*!< LPIT0_TCTRL1                            */
#define LPIT0_TCTRL1_TROT_MASK                   (0x40000U)                                          /*!< LPIT0_TCTRL1: TROT Mask                 */
#define LPIT0_TCTRL1_TROT_SHIFT                  (18U)                                               /*!< LPIT0_TCTRL1: TROT Position             */
#define LPIT0_TCTRL1_TROT(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL1_TROT_SHIFT))&LPIT0_TCTRL1_TROT_MASK) /*!< LPIT0_TCTRL1                            */
#define LPIT0_TCTRL1_TRG_SRC_MASK                (0x800000U)                                         /*!< LPIT0_TCTRL1: TRG_SRC Mask              */
#define LPIT0_TCTRL1_TRG_SRC_SHIFT               (23U)                                               /*!< LPIT0_TCTRL1: TRG_SRC Position          */
#define LPIT0_TCTRL1_TRG_SRC(x)                  (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL1_TRG_SRC_SHIFT))&LPIT0_TCTRL1_TRG_SRC_MASK) /*!< LPIT0_TCTRL1                            */
#define LPIT0_TCTRL1_TRG_SEL_MASK                (0xF000000U)                                        /*!< LPIT0_TCTRL1: TRG_SEL Mask              */
#define LPIT0_TCTRL1_TRG_SEL_SHIFT               (24U)                                               /*!< LPIT0_TCTRL1: TRG_SEL Position          */
#define LPIT0_TCTRL1_TRG_SEL(x)                  (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL1_TRG_SEL_SHIFT))&LPIT0_TCTRL1_TRG_SEL_MASK) /*!< LPIT0_TCTRL1                            */
/* ------- TVAL2 Bit Fields                         ------ */
#define LPIT0_TVAL2_TMR_VAL_MASK                 (0xFFFFFFFFU)                                       /*!< LPIT0_TVAL2: TMR_VAL Mask               */
#define LPIT0_TVAL2_TMR_VAL_SHIFT                (0U)                                                /*!< LPIT0_TVAL2: TMR_VAL Position           */
#define LPIT0_TVAL2_TMR_VAL(x)                   (((uint32_t)(((uint32_t)(x))<<LPIT0_TVAL2_TMR_VAL_SHIFT))&LPIT0_TVAL2_TMR_VAL_MASK) /*!< LPIT0_TVAL2                             */
/* ------- CVAL2 Bit Fields                         ------ */
#define LPIT0_CVAL2_TMR_CUR_VAL_MASK             (0xFFFFFFFFU)                                       /*!< LPIT0_CVAL2: TMR_CUR_VAL Mask           */
#define LPIT0_CVAL2_TMR_CUR_VAL_SHIFT            (0U)                                                /*!< LPIT0_CVAL2: TMR_CUR_VAL Position       */
#define LPIT0_CVAL2_TMR_CUR_VAL(x)               (((uint32_t)(((uint32_t)(x))<<LPIT0_CVAL2_TMR_CUR_VAL_SHIFT))&LPIT0_CVAL2_TMR_CUR_VAL_MASK) /*!< LPIT0_CVAL2                             */
/* ------- TCTRL2 Bit Fields                        ------ */
#define LPIT0_TCTRL2_T_EN_MASK                   (0x1U)                                              /*!< LPIT0_TCTRL2: T_EN Mask                 */
#define LPIT0_TCTRL2_T_EN_SHIFT                  (0U)                                                /*!< LPIT0_TCTRL2: T_EN Position             */
#define LPIT0_TCTRL2_T_EN(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL2_T_EN_SHIFT))&LPIT0_TCTRL2_T_EN_MASK) /*!< LPIT0_TCTRL2                            */
#define LPIT0_TCTRL2_CHAIN_MASK                  (0x2U)                                              /*!< LPIT0_TCTRL2: CHAIN Mask                */
#define LPIT0_TCTRL2_CHAIN_SHIFT                 (1U)                                                /*!< LPIT0_TCTRL2: CHAIN Position            */
#define LPIT0_TCTRL2_CHAIN(x)                    (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL2_CHAIN_SHIFT))&LPIT0_TCTRL2_CHAIN_MASK) /*!< LPIT0_TCTRL2                            */
#define LPIT0_TCTRL2_MODE_MASK                   (0xCU)                                              /*!< LPIT0_TCTRL2: MODE Mask                 */
#define LPIT0_TCTRL2_MODE_SHIFT                  (2U)                                                /*!< LPIT0_TCTRL2: MODE Position             */
#define LPIT0_TCTRL2_MODE(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL2_MODE_SHIFT))&LPIT0_TCTRL2_MODE_MASK) /*!< LPIT0_TCTRL2                            */
#define LPIT0_TCTRL2_TSOT_MASK                   (0x10000U)                                          /*!< LPIT0_TCTRL2: TSOT Mask                 */
#define LPIT0_TCTRL2_TSOT_SHIFT                  (16U)                                               /*!< LPIT0_TCTRL2: TSOT Position             */
#define LPIT0_TCTRL2_TSOT(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL2_TSOT_SHIFT))&LPIT0_TCTRL2_TSOT_MASK) /*!< LPIT0_TCTRL2                            */
#define LPIT0_TCTRL2_TSOI_MASK                   (0x20000U)                                          /*!< LPIT0_TCTRL2: TSOI Mask                 */
#define LPIT0_TCTRL2_TSOI_SHIFT                  (17U)                                               /*!< LPIT0_TCTRL2: TSOI Position             */
#define LPIT0_TCTRL2_TSOI(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL2_TSOI_SHIFT))&LPIT0_TCTRL2_TSOI_MASK) /*!< LPIT0_TCTRL2                            */
#define LPIT0_TCTRL2_TROT_MASK                   (0x40000U)                                          /*!< LPIT0_TCTRL2: TROT Mask                 */
#define LPIT0_TCTRL2_TROT_SHIFT                  (18U)                                               /*!< LPIT0_TCTRL2: TROT Position             */
#define LPIT0_TCTRL2_TROT(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL2_TROT_SHIFT))&LPIT0_TCTRL2_TROT_MASK) /*!< LPIT0_TCTRL2                            */
#define LPIT0_TCTRL2_TRG_SRC_MASK                (0x800000U)                                         /*!< LPIT0_TCTRL2: TRG_SRC Mask              */
#define LPIT0_TCTRL2_TRG_SRC_SHIFT               (23U)                                               /*!< LPIT0_TCTRL2: TRG_SRC Position          */
#define LPIT0_TCTRL2_TRG_SRC(x)                  (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL2_TRG_SRC_SHIFT))&LPIT0_TCTRL2_TRG_SRC_MASK) /*!< LPIT0_TCTRL2                            */
#define LPIT0_TCTRL2_TRG_SEL_MASK                (0xF000000U)                                        /*!< LPIT0_TCTRL2: TRG_SEL Mask              */
#define LPIT0_TCTRL2_TRG_SEL_SHIFT               (24U)                                               /*!< LPIT0_TCTRL2: TRG_SEL Position          */
#define LPIT0_TCTRL2_TRG_SEL(x)                  (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL2_TRG_SEL_SHIFT))&LPIT0_TCTRL2_TRG_SEL_MASK) /*!< LPIT0_TCTRL2                            */
/* ------- TVAL3 Bit Fields                         ------ */
#define LPIT0_TVAL3_TMR_VAL_MASK                 (0xFFFFFFFFU)                                       /*!< LPIT0_TVAL3: TMR_VAL Mask               */
#define LPIT0_TVAL3_TMR_VAL_SHIFT                (0U)                                                /*!< LPIT0_TVAL3: TMR_VAL Position           */
#define LPIT0_TVAL3_TMR_VAL(x)                   (((uint32_t)(((uint32_t)(x))<<LPIT0_TVAL3_TMR_VAL_SHIFT))&LPIT0_TVAL3_TMR_VAL_MASK) /*!< LPIT0_TVAL3                             */
/* ------- CVAL3 Bit Fields                         ------ */
#define LPIT0_CVAL3_TMR_CUR_VAL_MASK             (0xFFFFFFFFU)                                       /*!< LPIT0_CVAL3: TMR_CUR_VAL Mask           */
#define LPIT0_CVAL3_TMR_CUR_VAL_SHIFT            (0U)                                                /*!< LPIT0_CVAL3: TMR_CUR_VAL Position       */
#define LPIT0_CVAL3_TMR_CUR_VAL(x)               (((uint32_t)(((uint32_t)(x))<<LPIT0_CVAL3_TMR_CUR_VAL_SHIFT))&LPIT0_CVAL3_TMR_CUR_VAL_MASK) /*!< LPIT0_CVAL3                             */
/* ------- TCTRL3 Bit Fields                        ------ */
#define LPIT0_TCTRL3_T_EN_MASK                   (0x1U)                                              /*!< LPIT0_TCTRL3: T_EN Mask                 */
#define LPIT0_TCTRL3_T_EN_SHIFT                  (0U)                                                /*!< LPIT0_TCTRL3: T_EN Position             */
#define LPIT0_TCTRL3_T_EN(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL3_T_EN_SHIFT))&LPIT0_TCTRL3_T_EN_MASK) /*!< LPIT0_TCTRL3                            */
#define LPIT0_TCTRL3_CHAIN_MASK                  (0x2U)                                              /*!< LPIT0_TCTRL3: CHAIN Mask                */
#define LPIT0_TCTRL3_CHAIN_SHIFT                 (1U)                                                /*!< LPIT0_TCTRL3: CHAIN Position            */
#define LPIT0_TCTRL3_CHAIN(x)                    (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL3_CHAIN_SHIFT))&LPIT0_TCTRL3_CHAIN_MASK) /*!< LPIT0_TCTRL3                            */
#define LPIT0_TCTRL3_MODE_MASK                   (0xCU)                                              /*!< LPIT0_TCTRL3: MODE Mask                 */
#define LPIT0_TCTRL3_MODE_SHIFT                  (2U)                                                /*!< LPIT0_TCTRL3: MODE Position             */
#define LPIT0_TCTRL3_MODE(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL3_MODE_SHIFT))&LPIT0_TCTRL3_MODE_MASK) /*!< LPIT0_TCTRL3                            */
#define LPIT0_TCTRL3_TSOT_MASK                   (0x10000U)                                          /*!< LPIT0_TCTRL3: TSOT Mask                 */
#define LPIT0_TCTRL3_TSOT_SHIFT                  (16U)                                               /*!< LPIT0_TCTRL3: TSOT Position             */
#define LPIT0_TCTRL3_TSOT(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL3_TSOT_SHIFT))&LPIT0_TCTRL3_TSOT_MASK) /*!< LPIT0_TCTRL3                            */
#define LPIT0_TCTRL3_TSOI_MASK                   (0x20000U)                                          /*!< LPIT0_TCTRL3: TSOI Mask                 */
#define LPIT0_TCTRL3_TSOI_SHIFT                  (17U)                                               /*!< LPIT0_TCTRL3: TSOI Position             */
#define LPIT0_TCTRL3_TSOI(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL3_TSOI_SHIFT))&LPIT0_TCTRL3_TSOI_MASK) /*!< LPIT0_TCTRL3                            */
#define LPIT0_TCTRL3_TROT_MASK                   (0x40000U)                                          /*!< LPIT0_TCTRL3: TROT Mask                 */
#define LPIT0_TCTRL3_TROT_SHIFT                  (18U)                                               /*!< LPIT0_TCTRL3: TROT Position             */
#define LPIT0_TCTRL3_TROT(x)                     (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL3_TROT_SHIFT))&LPIT0_TCTRL3_TROT_MASK) /*!< LPIT0_TCTRL3                            */
#define LPIT0_TCTRL3_TRG_SRC_MASK                (0x800000U)                                         /*!< LPIT0_TCTRL3: TRG_SRC Mask              */
#define LPIT0_TCTRL3_TRG_SRC_SHIFT               (23U)                                               /*!< LPIT0_TCTRL3: TRG_SRC Position          */
#define LPIT0_TCTRL3_TRG_SRC(x)                  (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL3_TRG_SRC_SHIFT))&LPIT0_TCTRL3_TRG_SRC_MASK) /*!< LPIT0_TCTRL3                            */
#define LPIT0_TCTRL3_TRG_SEL_MASK                (0xF000000U)                                        /*!< LPIT0_TCTRL3: TRG_SEL Mask              */
#define LPIT0_TCTRL3_TRG_SEL_SHIFT               (24U)                                               /*!< LPIT0_TCTRL3: TRG_SEL Position          */
#define LPIT0_TCTRL3_TRG_SEL(x)                  (((uint32_t)(((uint32_t)(x))<<LPIT0_TCTRL3_TRG_SEL_SHIFT))&LPIT0_TCTRL3_TRG_SEL_MASK) /*!< LPIT0_TCTRL3                            */
/**
 * @} */ /* End group LPIT_Register_Masks_GROUP 
 */

/* LPIT0 - Peripheral instance base addresses */
#define LPIT0_BasePtr                  0x40037000UL //!< Peripheral base address
#define LPIT0                          ((LPIT0_Type *) LPIT0_BasePtr) //!< Freescale base pointer
#define LPIT0_BASE_PTR                 (LPIT0) //!< Freescale style base pointer
/**
 * @} */ /* End group LPIT_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup LPSPI_Peripheral_access_layer_GROUP LPSPI Peripheral Access Layer
* @brief C Struct for LPSPI
* @{
*/

/* ================================================================================ */
/* ================           LPSPI0 (file:LPSPI0_MKE15Z7)         ================ */
/* ================================================================================ */

/**
 * @brief Low power SPI
 */
/**
* @addtogroup LPSPI_structs_GROUP LPSPI struct
* @brief Struct for LPSPI
* @{
*/
typedef struct {                                /*       LPSPI0 Structure                                             */
   __I  uint32_t  VERID;                        /**< 0000: Version ID Register                                          */
   __I  uint32_t  PARAM;                        /**< 0004: Parameter Register                                           */
        uint8_t   RESERVED_0[8];               
   __IO uint32_t  CR;                           /**< 0010: Control Register                                             */
   __IO uint32_t  SR;                           /**< 0014: Status Register                                              */
   __IO uint32_t  IER;                          /**< 0018: Interrupt Enable Register                                    */
   __IO uint32_t  DER;                          /**< 001C: DMA Enable Register                                          */
   __IO uint32_t  CFGR0;                        /**< 0020: Configuration Register 0                                     */
   __IO uint32_t  CFGR1;                        /**< 0024: Configuration Register 1                                     */
        uint8_t   RESERVED_1[8];               
   __IO uint32_t  DMR[2];                       /**< 0030: Data Match Register                                          */
        uint8_t   RESERVED_2[8];               
   __IO uint32_t  CCR;                          /**< 0040: Clock Configuration Register                                 */
        uint8_t   RESERVED_3[20];              
   __IO uint32_t  FCR;                          /**< 0058: FIFO Control Register                                        */
   __I  uint32_t  FSR;                          /**< 005C: FIFO Status Register                                         */
   __IO uint32_t  TCR;                          /**< 0060: Transmit Command Register                                    */
   __O  uint32_t  TDR;                          /**< 0064: Transmit Data Register                                       */
        uint8_t   RESERVED_4[8];               
   __I  uint32_t  RSR;                          /**< 0070: Receive Status Register                                      */
   __I  uint32_t  RDR;                          /**< 0074: Receive Data Register                                        */
} LPSPI0_Type;

/**
 * @} */ /* End group LPSPI_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'LPSPI0' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup LPSPI_Register_Masks_GROUP LPSPI Register Masks
* @brief Register Masks for LPSPI
* @{
*/
/* ------- VERID Bit Fields                         ------ */
#define LPSPI0_VERID_FEATURE_MASK                (0xFFFFU)                                           /*!< LPSPI0_VERID: FEATURE Mask              */
#define LPSPI0_VERID_FEATURE_SHIFT               (0U)                                                /*!< LPSPI0_VERID: FEATURE Position          */
#define LPSPI0_VERID_FEATURE(x)                  (((uint32_t)(((uint32_t)(x))<<LPSPI0_VERID_FEATURE_SHIFT))&LPSPI0_VERID_FEATURE_MASK) /*!< LPSPI0_VERID                            */
#define LPSPI0_VERID_MINOR_MASK                  (0xFF0000U)                                         /*!< LPSPI0_VERID: MINOR Mask                */
#define LPSPI0_VERID_MINOR_SHIFT                 (16U)                                               /*!< LPSPI0_VERID: MINOR Position            */
#define LPSPI0_VERID_MINOR(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI0_VERID_MINOR_SHIFT))&LPSPI0_VERID_MINOR_MASK) /*!< LPSPI0_VERID                            */
#define LPSPI0_VERID_MAJOR_MASK                  (0xFF000000U)                                       /*!< LPSPI0_VERID: MAJOR Mask                */
#define LPSPI0_VERID_MAJOR_SHIFT                 (24U)                                               /*!< LPSPI0_VERID: MAJOR Position            */
#define LPSPI0_VERID_MAJOR(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI0_VERID_MAJOR_SHIFT))&LPSPI0_VERID_MAJOR_MASK) /*!< LPSPI0_VERID                            */
/* ------- PARAM Bit Fields                         ------ */
#define LPSPI0_PARAM_TXFIFO_MASK                 (0xFFU)                                             /*!< LPSPI0_PARAM: TXFIFO Mask               */
#define LPSPI0_PARAM_TXFIFO_SHIFT                (0U)                                                /*!< LPSPI0_PARAM: TXFIFO Position           */
#define LPSPI0_PARAM_TXFIFO(x)                   (((uint32_t)(((uint32_t)(x))<<LPSPI0_PARAM_TXFIFO_SHIFT))&LPSPI0_PARAM_TXFIFO_MASK) /*!< LPSPI0_PARAM                            */
#define LPSPI0_PARAM_RXFIFO_MASK                 (0xFF00U)                                           /*!< LPSPI0_PARAM: RXFIFO Mask               */
#define LPSPI0_PARAM_RXFIFO_SHIFT                (8U)                                                /*!< LPSPI0_PARAM: RXFIFO Position           */
#define LPSPI0_PARAM_RXFIFO(x)                   (((uint32_t)(((uint32_t)(x))<<LPSPI0_PARAM_RXFIFO_SHIFT))&LPSPI0_PARAM_RXFIFO_MASK) /*!< LPSPI0_PARAM                            */
/* ------- CR Bit Fields                            ------ */
#define LPSPI0_CR_MEN_MASK                       (0x1U)                                              /*!< LPSPI0_CR: MEN Mask                     */
#define LPSPI0_CR_MEN_SHIFT                      (0U)                                                /*!< LPSPI0_CR: MEN Position                 */
#define LPSPI0_CR_MEN(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI0_CR_MEN_SHIFT))&LPSPI0_CR_MEN_MASK) /*!< LPSPI0_CR                               */
#define LPSPI0_CR_RST_MASK                       (0x2U)                                              /*!< LPSPI0_CR: RST Mask                     */
#define LPSPI0_CR_RST_SHIFT                      (1U)                                                /*!< LPSPI0_CR: RST Position                 */
#define LPSPI0_CR_RST(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI0_CR_RST_SHIFT))&LPSPI0_CR_RST_MASK) /*!< LPSPI0_CR                               */
#define LPSPI0_CR_DOZEN_MASK                     (0x4U)                                              /*!< LPSPI0_CR: DOZEN Mask                   */
#define LPSPI0_CR_DOZEN_SHIFT                    (2U)                                                /*!< LPSPI0_CR: DOZEN Position               */
#define LPSPI0_CR_DOZEN(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_CR_DOZEN_SHIFT))&LPSPI0_CR_DOZEN_MASK) /*!< LPSPI0_CR                               */
#define LPSPI0_CR_DBGEN_MASK                     (0x8U)                                              /*!< LPSPI0_CR: DBGEN Mask                   */
#define LPSPI0_CR_DBGEN_SHIFT                    (3U)                                                /*!< LPSPI0_CR: DBGEN Position               */
#define LPSPI0_CR_DBGEN(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_CR_DBGEN_SHIFT))&LPSPI0_CR_DBGEN_MASK) /*!< LPSPI0_CR                               */
#define LPSPI0_CR_RTF_MASK                       (0x100U)                                            /*!< LPSPI0_CR: RTF Mask                     */
#define LPSPI0_CR_RTF_SHIFT                      (8U)                                                /*!< LPSPI0_CR: RTF Position                 */
#define LPSPI0_CR_RTF(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI0_CR_RTF_SHIFT))&LPSPI0_CR_RTF_MASK) /*!< LPSPI0_CR                               */
#define LPSPI0_CR_RRF_MASK                       (0x200U)                                            /*!< LPSPI0_CR: RRF Mask                     */
#define LPSPI0_CR_RRF_SHIFT                      (9U)                                                /*!< LPSPI0_CR: RRF Position                 */
#define LPSPI0_CR_RRF(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI0_CR_RRF_SHIFT))&LPSPI0_CR_RRF_MASK) /*!< LPSPI0_CR                               */
/* ------- SR Bit Fields                            ------ */
#define LPSPI0_SR_TDF_MASK                       (0x1U)                                              /*!< LPSPI0_SR: TDF Mask                     */
#define LPSPI0_SR_TDF_SHIFT                      (0U)                                                /*!< LPSPI0_SR: TDF Position                 */
#define LPSPI0_SR_TDF(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI0_SR_TDF_SHIFT))&LPSPI0_SR_TDF_MASK) /*!< LPSPI0_SR                               */
#define LPSPI0_SR_RDF_MASK                       (0x2U)                                              /*!< LPSPI0_SR: RDF Mask                     */
#define LPSPI0_SR_RDF_SHIFT                      (1U)                                                /*!< LPSPI0_SR: RDF Position                 */
#define LPSPI0_SR_RDF(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI0_SR_RDF_SHIFT))&LPSPI0_SR_RDF_MASK) /*!< LPSPI0_SR                               */
#define LPSPI0_SR_WCF_MASK                       (0x100U)                                            /*!< LPSPI0_SR: WCF Mask                     */
#define LPSPI0_SR_WCF_SHIFT                      (8U)                                                /*!< LPSPI0_SR: WCF Position                 */
#define LPSPI0_SR_WCF(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI0_SR_WCF_SHIFT))&LPSPI0_SR_WCF_MASK) /*!< LPSPI0_SR                               */
#define LPSPI0_SR_FCF_MASK                       (0x200U)                                            /*!< LPSPI0_SR: FCF Mask                     */
#define LPSPI0_SR_FCF_SHIFT                      (9U)                                                /*!< LPSPI0_SR: FCF Position                 */
#define LPSPI0_SR_FCF(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI0_SR_FCF_SHIFT))&LPSPI0_SR_FCF_MASK) /*!< LPSPI0_SR                               */
#define LPSPI0_SR_TCF_MASK                       (0x400U)                                            /*!< LPSPI0_SR: TCF Mask                     */
#define LPSPI0_SR_TCF_SHIFT                      (10U)                                               /*!< LPSPI0_SR: TCF Position                 */
#define LPSPI0_SR_TCF(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI0_SR_TCF_SHIFT))&LPSPI0_SR_TCF_MASK) /*!< LPSPI0_SR                               */
#define LPSPI0_SR_TEF_MASK                       (0x800U)                                            /*!< LPSPI0_SR: TEF Mask                     */
#define LPSPI0_SR_TEF_SHIFT                      (11U)                                               /*!< LPSPI0_SR: TEF Position                 */
#define LPSPI0_SR_TEF(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI0_SR_TEF_SHIFT))&LPSPI0_SR_TEF_MASK) /*!< LPSPI0_SR                               */
#define LPSPI0_SR_REF_MASK                       (0x1000U)                                           /*!< LPSPI0_SR: REF Mask                     */
#define LPSPI0_SR_REF_SHIFT                      (12U)                                               /*!< LPSPI0_SR: REF Position                 */
#define LPSPI0_SR_REF(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI0_SR_REF_SHIFT))&LPSPI0_SR_REF_MASK) /*!< LPSPI0_SR                               */
#define LPSPI0_SR_DMF_MASK                       (0x2000U)                                           /*!< LPSPI0_SR: DMF Mask                     */
#define LPSPI0_SR_DMF_SHIFT                      (13U)                                               /*!< LPSPI0_SR: DMF Position                 */
#define LPSPI0_SR_DMF(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI0_SR_DMF_SHIFT))&LPSPI0_SR_DMF_MASK) /*!< LPSPI0_SR                               */
#define LPSPI0_SR_MBF_MASK                       (0x1000000U)                                        /*!< LPSPI0_SR: MBF Mask                     */
#define LPSPI0_SR_MBF_SHIFT                      (24U)                                               /*!< LPSPI0_SR: MBF Position                 */
#define LPSPI0_SR_MBF(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI0_SR_MBF_SHIFT))&LPSPI0_SR_MBF_MASK) /*!< LPSPI0_SR                               */
/* ------- IER Bit Fields                           ------ */
#define LPSPI0_IER_TDIE_MASK                     (0x1U)                                              /*!< LPSPI0_IER: TDIE Mask                   */
#define LPSPI0_IER_TDIE_SHIFT                    (0U)                                                /*!< LPSPI0_IER: TDIE Position               */
#define LPSPI0_IER_TDIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_IER_TDIE_SHIFT))&LPSPI0_IER_TDIE_MASK) /*!< LPSPI0_IER                              */
#define LPSPI0_IER_RDIE_MASK                     (0x2U)                                              /*!< LPSPI0_IER: RDIE Mask                   */
#define LPSPI0_IER_RDIE_SHIFT                    (1U)                                                /*!< LPSPI0_IER: RDIE Position               */
#define LPSPI0_IER_RDIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_IER_RDIE_SHIFT))&LPSPI0_IER_RDIE_MASK) /*!< LPSPI0_IER                              */
#define LPSPI0_IER_WCIE_MASK                     (0x100U)                                            /*!< LPSPI0_IER: WCIE Mask                   */
#define LPSPI0_IER_WCIE_SHIFT                    (8U)                                                /*!< LPSPI0_IER: WCIE Position               */
#define LPSPI0_IER_WCIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_IER_WCIE_SHIFT))&LPSPI0_IER_WCIE_MASK) /*!< LPSPI0_IER                              */
#define LPSPI0_IER_FCIE_MASK                     (0x200U)                                            /*!< LPSPI0_IER: FCIE Mask                   */
#define LPSPI0_IER_FCIE_SHIFT                    (9U)                                                /*!< LPSPI0_IER: FCIE Position               */
#define LPSPI0_IER_FCIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_IER_FCIE_SHIFT))&LPSPI0_IER_FCIE_MASK) /*!< LPSPI0_IER                              */
#define LPSPI0_IER_TCIE_MASK                     (0x400U)                                            /*!< LPSPI0_IER: TCIE Mask                   */
#define LPSPI0_IER_TCIE_SHIFT                    (10U)                                               /*!< LPSPI0_IER: TCIE Position               */
#define LPSPI0_IER_TCIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_IER_TCIE_SHIFT))&LPSPI0_IER_TCIE_MASK) /*!< LPSPI0_IER                              */
#define LPSPI0_IER_TEIE_MASK                     (0x800U)                                            /*!< LPSPI0_IER: TEIE Mask                   */
#define LPSPI0_IER_TEIE_SHIFT                    (11U)                                               /*!< LPSPI0_IER: TEIE Position               */
#define LPSPI0_IER_TEIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_IER_TEIE_SHIFT))&LPSPI0_IER_TEIE_MASK) /*!< LPSPI0_IER                              */
#define LPSPI0_IER_REIE_MASK                     (0x1000U)                                           /*!< LPSPI0_IER: REIE Mask                   */
#define LPSPI0_IER_REIE_SHIFT                    (12U)                                               /*!< LPSPI0_IER: REIE Position               */
#define LPSPI0_IER_REIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_IER_REIE_SHIFT))&LPSPI0_IER_REIE_MASK) /*!< LPSPI0_IER                              */
#define LPSPI0_IER_DMIE_MASK                     (0x2000U)                                           /*!< LPSPI0_IER: DMIE Mask                   */
#define LPSPI0_IER_DMIE_SHIFT                    (13U)                                               /*!< LPSPI0_IER: DMIE Position               */
#define LPSPI0_IER_DMIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_IER_DMIE_SHIFT))&LPSPI0_IER_DMIE_MASK) /*!< LPSPI0_IER                              */
/* ------- DER Bit Fields                           ------ */
#define LPSPI0_DER_TDDE_MASK                     (0x1U)                                              /*!< LPSPI0_DER: TDDE Mask                   */
#define LPSPI0_DER_TDDE_SHIFT                    (0U)                                                /*!< LPSPI0_DER: TDDE Position               */
#define LPSPI0_DER_TDDE(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_DER_TDDE_SHIFT))&LPSPI0_DER_TDDE_MASK) /*!< LPSPI0_DER                              */
#define LPSPI0_DER_RDDE_MASK                     (0x2U)                                              /*!< LPSPI0_DER: RDDE Mask                   */
#define LPSPI0_DER_RDDE_SHIFT                    (1U)                                                /*!< LPSPI0_DER: RDDE Position               */
#define LPSPI0_DER_RDDE(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_DER_RDDE_SHIFT))&LPSPI0_DER_RDDE_MASK) /*!< LPSPI0_DER                              */
/* ------- CFGR0 Bit Fields                         ------ */
#define LPSPI0_CFGR0_HREN_MASK                   (0x1U)                                              /*!< LPSPI0_CFGR0: HREN Mask                 */
#define LPSPI0_CFGR0_HREN_SHIFT                  (0U)                                                /*!< LPSPI0_CFGR0: HREN Position             */
#define LPSPI0_CFGR0_HREN(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI0_CFGR0_HREN_SHIFT))&LPSPI0_CFGR0_HREN_MASK) /*!< LPSPI0_CFGR0                            */
#define LPSPI0_CFGR0_HRPOL_MASK                  (0x2U)                                              /*!< LPSPI0_CFGR0: HRPOL Mask                */
#define LPSPI0_CFGR0_HRPOL_SHIFT                 (1U)                                                /*!< LPSPI0_CFGR0: HRPOL Position            */
#define LPSPI0_CFGR0_HRPOL(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI0_CFGR0_HRPOL_SHIFT))&LPSPI0_CFGR0_HRPOL_MASK) /*!< LPSPI0_CFGR0                            */
#define LPSPI0_CFGR0_HRSEL_MASK                  (0x4U)                                              /*!< LPSPI0_CFGR0: HRSEL Mask                */
#define LPSPI0_CFGR0_HRSEL_SHIFT                 (2U)                                                /*!< LPSPI0_CFGR0: HRSEL Position            */
#define LPSPI0_CFGR0_HRSEL(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI0_CFGR0_HRSEL_SHIFT))&LPSPI0_CFGR0_HRSEL_MASK) /*!< LPSPI0_CFGR0                            */
#define LPSPI0_CFGR0_CIRFIFO_MASK                (0x100U)                                            /*!< LPSPI0_CFGR0: CIRFIFO Mask              */
#define LPSPI0_CFGR0_CIRFIFO_SHIFT               (8U)                                                /*!< LPSPI0_CFGR0: CIRFIFO Position          */
#define LPSPI0_CFGR0_CIRFIFO(x)                  (((uint32_t)(((uint32_t)(x))<<LPSPI0_CFGR0_CIRFIFO_SHIFT))&LPSPI0_CFGR0_CIRFIFO_MASK) /*!< LPSPI0_CFGR0                            */
#define LPSPI0_CFGR0_RDMO_MASK                   (0x200U)                                            /*!< LPSPI0_CFGR0: RDMO Mask                 */
#define LPSPI0_CFGR0_RDMO_SHIFT                  (9U)                                                /*!< LPSPI0_CFGR0: RDMO Position             */
#define LPSPI0_CFGR0_RDMO(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI0_CFGR0_RDMO_SHIFT))&LPSPI0_CFGR0_RDMO_MASK) /*!< LPSPI0_CFGR0                            */
/* ------- CFGR1 Bit Fields                         ------ */
#define LPSPI0_CFGR1_MASTER_MASK                 (0x1U)                                              /*!< LPSPI0_CFGR1: MASTER Mask               */
#define LPSPI0_CFGR1_MASTER_SHIFT                (0U)                                                /*!< LPSPI0_CFGR1: MASTER Position           */
#define LPSPI0_CFGR1_MASTER(x)                   (((uint32_t)(((uint32_t)(x))<<LPSPI0_CFGR1_MASTER_SHIFT))&LPSPI0_CFGR1_MASTER_MASK) /*!< LPSPI0_CFGR1                            */
#define LPSPI0_CFGR1_SAMPLE_MASK                 (0x2U)                                              /*!< LPSPI0_CFGR1: SAMPLE Mask               */
#define LPSPI0_CFGR1_SAMPLE_SHIFT                (1U)                                                /*!< LPSPI0_CFGR1: SAMPLE Position           */
#define LPSPI0_CFGR1_SAMPLE(x)                   (((uint32_t)(((uint32_t)(x))<<LPSPI0_CFGR1_SAMPLE_SHIFT))&LPSPI0_CFGR1_SAMPLE_MASK) /*!< LPSPI0_CFGR1                            */
#define LPSPI0_CFGR1_AUTOPCS_MASK                (0x4U)                                              /*!< LPSPI0_CFGR1: AUTOPCS Mask              */
#define LPSPI0_CFGR1_AUTOPCS_SHIFT               (2U)                                                /*!< LPSPI0_CFGR1: AUTOPCS Position          */
#define LPSPI0_CFGR1_AUTOPCS(x)                  (((uint32_t)(((uint32_t)(x))<<LPSPI0_CFGR1_AUTOPCS_SHIFT))&LPSPI0_CFGR1_AUTOPCS_MASK) /*!< LPSPI0_CFGR1                            */
#define LPSPI0_CFGR1_NOSTALL_MASK                (0x8U)                                              /*!< LPSPI0_CFGR1: NOSTALL Mask              */
#define LPSPI0_CFGR1_NOSTALL_SHIFT               (3U)                                                /*!< LPSPI0_CFGR1: NOSTALL Position          */
#define LPSPI0_CFGR1_NOSTALL(x)                  (((uint32_t)(((uint32_t)(x))<<LPSPI0_CFGR1_NOSTALL_SHIFT))&LPSPI0_CFGR1_NOSTALL_MASK) /*!< LPSPI0_CFGR1                            */
#define LPSPI0_CFGR1_PCSPOL_MASK                 (0xF00U)                                            /*!< LPSPI0_CFGR1: PCSPOL Mask               */
#define LPSPI0_CFGR1_PCSPOL_SHIFT                (8U)                                                /*!< LPSPI0_CFGR1: PCSPOL Position           */
#define LPSPI0_CFGR1_PCSPOL(x)                   (((uint32_t)(((uint32_t)(x))<<LPSPI0_CFGR1_PCSPOL_SHIFT))&LPSPI0_CFGR1_PCSPOL_MASK) /*!< LPSPI0_CFGR1                            */
#define LPSPI0_CFGR1_MATCFG_MASK                 (0x70000U)                                          /*!< LPSPI0_CFGR1: MATCFG Mask               */
#define LPSPI0_CFGR1_MATCFG_SHIFT                (16U)                                               /*!< LPSPI0_CFGR1: MATCFG Position           */
#define LPSPI0_CFGR1_MATCFG(x)                   (((uint32_t)(((uint32_t)(x))<<LPSPI0_CFGR1_MATCFG_SHIFT))&LPSPI0_CFGR1_MATCFG_MASK) /*!< LPSPI0_CFGR1                            */
#define LPSPI0_CFGR1_PINCFG_MASK                 (0x3000000U)                                        /*!< LPSPI0_CFGR1: PINCFG Mask               */
#define LPSPI0_CFGR1_PINCFG_SHIFT                (24U)                                               /*!< LPSPI0_CFGR1: PINCFG Position           */
#define LPSPI0_CFGR1_PINCFG(x)                   (((uint32_t)(((uint32_t)(x))<<LPSPI0_CFGR1_PINCFG_SHIFT))&LPSPI0_CFGR1_PINCFG_MASK) /*!< LPSPI0_CFGR1                            */
#define LPSPI0_CFGR1_OUTCFG_MASK                 (0x4000000U)                                        /*!< LPSPI0_CFGR1: OUTCFG Mask               */
#define LPSPI0_CFGR1_OUTCFG_SHIFT                (26U)                                               /*!< LPSPI0_CFGR1: OUTCFG Position           */
#define LPSPI0_CFGR1_OUTCFG(x)                   (((uint32_t)(((uint32_t)(x))<<LPSPI0_CFGR1_OUTCFG_SHIFT))&LPSPI0_CFGR1_OUTCFG_MASK) /*!< LPSPI0_CFGR1                            */
#define LPSPI0_CFGR1_PCSCFG_MASK                 (0x8000000U)                                        /*!< LPSPI0_CFGR1: PCSCFG Mask               */
#define LPSPI0_CFGR1_PCSCFG_SHIFT                (27U)                                               /*!< LPSPI0_CFGR1: PCSCFG Position           */
#define LPSPI0_CFGR1_PCSCFG(x)                   (((uint32_t)(((uint32_t)(x))<<LPSPI0_CFGR1_PCSCFG_SHIFT))&LPSPI0_CFGR1_PCSCFG_MASK) /*!< LPSPI0_CFGR1                            */
/* ------- DMR Bit Fields                           ------ */
#define LPSPI0_DMR_MATCH0_MASK                   (0xFFFFFFFFU)                                       /*!< LPSPI0_DMR: MATCH0 Mask                 */
#define LPSPI0_DMR_MATCH0_SHIFT                  (0U)                                                /*!< LPSPI0_DMR: MATCH0 Position             */
#define LPSPI0_DMR_MATCH0(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI0_DMR_MATCH0_SHIFT))&LPSPI0_DMR_MATCH0_MASK) /*!< LPSPI0_DMR                              */
/* ------- CCR Bit Fields                           ------ */
#define LPSPI0_CCR_SCKDIV_MASK                   (0xFFU)                                             /*!< LPSPI0_CCR: SCKDIV Mask                 */
#define LPSPI0_CCR_SCKDIV_SHIFT                  (0U)                                                /*!< LPSPI0_CCR: SCKDIV Position             */
#define LPSPI0_CCR_SCKDIV(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI0_CCR_SCKDIV_SHIFT))&LPSPI0_CCR_SCKDIV_MASK) /*!< LPSPI0_CCR                              */
#define LPSPI0_CCR_DBT_MASK                      (0xFF00U)                                           /*!< LPSPI0_CCR: DBT Mask                    */
#define LPSPI0_CCR_DBT_SHIFT                     (8U)                                                /*!< LPSPI0_CCR: DBT Position                */
#define LPSPI0_CCR_DBT(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI0_CCR_DBT_SHIFT))&LPSPI0_CCR_DBT_MASK) /*!< LPSPI0_CCR                              */
#define LPSPI0_CCR_PCSSCK_MASK                   (0xFF0000U)                                         /*!< LPSPI0_CCR: PCSSCK Mask                 */
#define LPSPI0_CCR_PCSSCK_SHIFT                  (16U)                                               /*!< LPSPI0_CCR: PCSSCK Position             */
#define LPSPI0_CCR_PCSSCK(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI0_CCR_PCSSCK_SHIFT))&LPSPI0_CCR_PCSSCK_MASK) /*!< LPSPI0_CCR                              */
#define LPSPI0_CCR_SCKPCS_MASK                   (0xFF000000U)                                       /*!< LPSPI0_CCR: SCKPCS Mask                 */
#define LPSPI0_CCR_SCKPCS_SHIFT                  (24U)                                               /*!< LPSPI0_CCR: SCKPCS Position             */
#define LPSPI0_CCR_SCKPCS(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI0_CCR_SCKPCS_SHIFT))&LPSPI0_CCR_SCKPCS_MASK) /*!< LPSPI0_CCR                              */
/* ------- FCR Bit Fields                           ------ */
#define LPSPI0_FCR_TXWATER_MASK                  (0xFFU)                                             /*!< LPSPI0_FCR: TXWATER Mask                */
#define LPSPI0_FCR_TXWATER_SHIFT                 (0U)                                                /*!< LPSPI0_FCR: TXWATER Position            */
#define LPSPI0_FCR_TXWATER(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI0_FCR_TXWATER_SHIFT))&LPSPI0_FCR_TXWATER_MASK) /*!< LPSPI0_FCR                              */
#define LPSPI0_FCR_RXWATER_MASK                  (0xFF0000U)                                         /*!< LPSPI0_FCR: RXWATER Mask                */
#define LPSPI0_FCR_RXWATER_SHIFT                 (16U)                                               /*!< LPSPI0_FCR: RXWATER Position            */
#define LPSPI0_FCR_RXWATER(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI0_FCR_RXWATER_SHIFT))&LPSPI0_FCR_RXWATER_MASK) /*!< LPSPI0_FCR                              */
/* ------- FSR Bit Fields                           ------ */
#define LPSPI0_FSR_TXCOUNT_MASK                  (0xFFU)                                             /*!< LPSPI0_FSR: TXCOUNT Mask                */
#define LPSPI0_FSR_TXCOUNT_SHIFT                 (0U)                                                /*!< LPSPI0_FSR: TXCOUNT Position            */
#define LPSPI0_FSR_TXCOUNT(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI0_FSR_TXCOUNT_SHIFT))&LPSPI0_FSR_TXCOUNT_MASK) /*!< LPSPI0_FSR                              */
#define LPSPI0_FSR_RXCOUNT_MASK                  (0xFF0000U)                                         /*!< LPSPI0_FSR: RXCOUNT Mask                */
#define LPSPI0_FSR_RXCOUNT_SHIFT                 (16U)                                               /*!< LPSPI0_FSR: RXCOUNT Position            */
#define LPSPI0_FSR_RXCOUNT(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI0_FSR_RXCOUNT_SHIFT))&LPSPI0_FSR_RXCOUNT_MASK) /*!< LPSPI0_FSR                              */
/* ------- TCR Bit Fields                           ------ */
#define LPSPI0_TCR_FRAMESZ_MASK                  (0xFFFU)                                            /*!< LPSPI0_TCR: FRAMESZ Mask                */
#define LPSPI0_TCR_FRAMESZ_SHIFT                 (0U)                                                /*!< LPSPI0_TCR: FRAMESZ Position            */
#define LPSPI0_TCR_FRAMESZ(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI0_TCR_FRAMESZ_SHIFT))&LPSPI0_TCR_FRAMESZ_MASK) /*!< LPSPI0_TCR                              */
#define LPSPI0_TCR_WIDTH_MASK                    (0x30000U)                                          /*!< LPSPI0_TCR: WIDTH Mask                  */
#define LPSPI0_TCR_WIDTH_SHIFT                   (16U)                                               /*!< LPSPI0_TCR: WIDTH Position              */
#define LPSPI0_TCR_WIDTH(x)                      (((uint32_t)(((uint32_t)(x))<<LPSPI0_TCR_WIDTH_SHIFT))&LPSPI0_TCR_WIDTH_MASK) /*!< LPSPI0_TCR                              */
#define LPSPI0_TCR_TXMSK_MASK                    (0x40000U)                                          /*!< LPSPI0_TCR: TXMSK Mask                  */
#define LPSPI0_TCR_TXMSK_SHIFT                   (18U)                                               /*!< LPSPI0_TCR: TXMSK Position              */
#define LPSPI0_TCR_TXMSK(x)                      (((uint32_t)(((uint32_t)(x))<<LPSPI0_TCR_TXMSK_SHIFT))&LPSPI0_TCR_TXMSK_MASK) /*!< LPSPI0_TCR                              */
#define LPSPI0_TCR_RXMSK_MASK                    (0x80000U)                                          /*!< LPSPI0_TCR: RXMSK Mask                  */
#define LPSPI0_TCR_RXMSK_SHIFT                   (19U)                                               /*!< LPSPI0_TCR: RXMSK Position              */
#define LPSPI0_TCR_RXMSK(x)                      (((uint32_t)(((uint32_t)(x))<<LPSPI0_TCR_RXMSK_SHIFT))&LPSPI0_TCR_RXMSK_MASK) /*!< LPSPI0_TCR                              */
#define LPSPI0_TCR_CONTC_MASK                    (0x100000U)                                         /*!< LPSPI0_TCR: CONTC Mask                  */
#define LPSPI0_TCR_CONTC_SHIFT                   (20U)                                               /*!< LPSPI0_TCR: CONTC Position              */
#define LPSPI0_TCR_CONTC(x)                      (((uint32_t)(((uint32_t)(x))<<LPSPI0_TCR_CONTC_SHIFT))&LPSPI0_TCR_CONTC_MASK) /*!< LPSPI0_TCR                              */
#define LPSPI0_TCR_CONT_MASK                     (0x200000U)                                         /*!< LPSPI0_TCR: CONT Mask                   */
#define LPSPI0_TCR_CONT_SHIFT                    (21U)                                               /*!< LPSPI0_TCR: CONT Position               */
#define LPSPI0_TCR_CONT(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_TCR_CONT_SHIFT))&LPSPI0_TCR_CONT_MASK) /*!< LPSPI0_TCR                              */
#define LPSPI0_TCR_BYSW_MASK                     (0x400000U)                                         /*!< LPSPI0_TCR: BYSW Mask                   */
#define LPSPI0_TCR_BYSW_SHIFT                    (22U)                                               /*!< LPSPI0_TCR: BYSW Position               */
#define LPSPI0_TCR_BYSW(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_TCR_BYSW_SHIFT))&LPSPI0_TCR_BYSW_MASK) /*!< LPSPI0_TCR                              */
#define LPSPI0_TCR_LSBF_MASK                     (0x800000U)                                         /*!< LPSPI0_TCR: LSBF Mask                   */
#define LPSPI0_TCR_LSBF_SHIFT                    (23U)                                               /*!< LPSPI0_TCR: LSBF Position               */
#define LPSPI0_TCR_LSBF(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_TCR_LSBF_SHIFT))&LPSPI0_TCR_LSBF_MASK) /*!< LPSPI0_TCR                              */
#define LPSPI0_TCR_PCS_MASK                      (0x3000000U)                                        /*!< LPSPI0_TCR: PCS Mask                    */
#define LPSPI0_TCR_PCS_SHIFT                     (24U)                                               /*!< LPSPI0_TCR: PCS Position                */
#define LPSPI0_TCR_PCS(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI0_TCR_PCS_SHIFT))&LPSPI0_TCR_PCS_MASK) /*!< LPSPI0_TCR                              */
#define LPSPI0_TCR_PRESCALE_MASK                 (0x38000000U)                                       /*!< LPSPI0_TCR: PRESCALE Mask               */
#define LPSPI0_TCR_PRESCALE_SHIFT                (27U)                                               /*!< LPSPI0_TCR: PRESCALE Position           */
#define LPSPI0_TCR_PRESCALE(x)                   (((uint32_t)(((uint32_t)(x))<<LPSPI0_TCR_PRESCALE_SHIFT))&LPSPI0_TCR_PRESCALE_MASK) /*!< LPSPI0_TCR                              */
#define LPSPI0_TCR_CPHA_MASK                     (0x40000000U)                                       /*!< LPSPI0_TCR: CPHA Mask                   */
#define LPSPI0_TCR_CPHA_SHIFT                    (30U)                                               /*!< LPSPI0_TCR: CPHA Position               */
#define LPSPI0_TCR_CPHA(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_TCR_CPHA_SHIFT))&LPSPI0_TCR_CPHA_MASK) /*!< LPSPI0_TCR                              */
#define LPSPI0_TCR_CPOL_MASK                     (0x80000000U)                                       /*!< LPSPI0_TCR: CPOL Mask                   */
#define LPSPI0_TCR_CPOL_SHIFT                    (31U)                                               /*!< LPSPI0_TCR: CPOL Position               */
#define LPSPI0_TCR_CPOL(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_TCR_CPOL_SHIFT))&LPSPI0_TCR_CPOL_MASK) /*!< LPSPI0_TCR                              */
/* ------- TDR Bit Fields                           ------ */
#define LPSPI0_TDR_DATA_MASK                     (0xFFFFFFFFU)                                       /*!< LPSPI0_TDR: DATA Mask                   */
#define LPSPI0_TDR_DATA_SHIFT                    (0U)                                                /*!< LPSPI0_TDR: DATA Position               */
#define LPSPI0_TDR_DATA(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_TDR_DATA_SHIFT))&LPSPI0_TDR_DATA_MASK) /*!< LPSPI0_TDR                              */
/* ------- RSR Bit Fields                           ------ */
#define LPSPI0_RSR_SOF_MASK                      (0x1U)                                              /*!< LPSPI0_RSR: SOF Mask                    */
#define LPSPI0_RSR_SOF_SHIFT                     (0U)                                                /*!< LPSPI0_RSR: SOF Position                */
#define LPSPI0_RSR_SOF(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI0_RSR_SOF_SHIFT))&LPSPI0_RSR_SOF_MASK) /*!< LPSPI0_RSR                              */
#define LPSPI0_RSR_RXEMPTY_MASK                  (0x2U)                                              /*!< LPSPI0_RSR: RXEMPTY Mask                */
#define LPSPI0_RSR_RXEMPTY_SHIFT                 (1U)                                                /*!< LPSPI0_RSR: RXEMPTY Position            */
#define LPSPI0_RSR_RXEMPTY(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI0_RSR_RXEMPTY_SHIFT))&LPSPI0_RSR_RXEMPTY_MASK) /*!< LPSPI0_RSR                              */
/* ------- RDR Bit Fields                           ------ */
#define LPSPI0_RDR_DATA_MASK                     (0xFFFFFFFFU)                                       /*!< LPSPI0_RDR: DATA Mask                   */
#define LPSPI0_RDR_DATA_SHIFT                    (0U)                                                /*!< LPSPI0_RDR: DATA Position               */
#define LPSPI0_RDR_DATA(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI0_RDR_DATA_SHIFT))&LPSPI0_RDR_DATA_MASK) /*!< LPSPI0_RDR                              */
/**
 * @} */ /* End group LPSPI_Register_Masks_GROUP 
 */

/* LPSPI0 - Peripheral instance base addresses */
#define LPSPI0_BasePtr                 0x4002C000UL //!< Peripheral base address
#define LPSPI0                         ((LPSPI0_Type *) LPSPI0_BasePtr) //!< Freescale base pointer
#define LPSPI0_BASE_PTR                (LPSPI0) //!< Freescale style base pointer
/**
 * @} */ /* End group LPSPI_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup LPSPI_Peripheral_access_layer_GROUP LPSPI Peripheral Access Layer
* @brief C Struct for LPSPI
* @{
*/

/* ================================================================================ */
/* ================           LPSPI1 (derived from LPSPI0)         ================ */
/* ================================================================================ */

/**
 * @brief Low power SPI
 */

/* LPSPI1 - Peripheral instance base addresses */
#define LPSPI1_BasePtr                 0x4002D000UL //!< Peripheral base address
#define LPSPI1                         ((LPSPI0_Type *) LPSPI1_BasePtr) //!< Freescale base pointer
#define LPSPI1_BASE_PTR                (LPSPI1) //!< Freescale style base pointer
/**
 * @} */ /* End group LPSPI_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup LPTMR_Peripheral_access_layer_GROUP LPTMR Peripheral Access Layer
* @brief C Struct for LPTMR
* @{
*/

/* ================================================================================ */
/* ================           LPTMR0 (file:LPTMR0_MKE16F16)        ================ */
/* ================================================================================ */

/**
 * @brief Low Power Timer
 */
/**
* @addtogroup LPTMR_structs_GROUP LPTMR struct
* @brief Struct for LPTMR
* @{
*/
typedef struct {                                /*       LPTMR0 Structure                                             */
   __IO uint32_t  CSR;                          /**< 0000: Low Power Timer Control Status Register                      */
   __IO uint32_t  PSR;                          /**< 0004: Low Power Timer Prescale Register                            */
   __IO uint32_t  CMR;                          /**< 0008: Low Power Timer Compare Register                             */
   __IO uint32_t  CNR;                          /**< 000C: Low Power Timer Counter Register                             */
} LPTMR0_Type;

/**
 * @} */ /* End group LPTMR_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'LPTMR0' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup LPTMR_Register_Masks_GROUP LPTMR Register Masks
* @brief Register Masks for LPTMR
* @{
*/
/* ------- CSR Bit Fields                           ------ */
#define LPTMR_CSR_TEN_MASK                       (0x1U)                                              /*!< LPTMR0_CSR: TEN Mask                    */
#define LPTMR_CSR_TEN_SHIFT                      (0U)                                                /*!< LPTMR0_CSR: TEN Position                */
#define LPTMR_CSR_TEN(x)                         (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TEN_SHIFT))&LPTMR_CSR_TEN_MASK) /*!< LPTMR0_CSR                              */
#define LPTMR_CSR_TMS_MASK                       (0x2U)                                              /*!< LPTMR0_CSR: TMS Mask                    */
#define LPTMR_CSR_TMS_SHIFT                      (1U)                                                /*!< LPTMR0_CSR: TMS Position                */
#define LPTMR_CSR_TMS(x)                         (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TMS_SHIFT))&LPTMR_CSR_TMS_MASK) /*!< LPTMR0_CSR                              */
#define LPTMR_CSR_TFC_MASK                       (0x4U)                                              /*!< LPTMR0_CSR: TFC Mask                    */
#define LPTMR_CSR_TFC_SHIFT                      (2U)                                                /*!< LPTMR0_CSR: TFC Position                */
#define LPTMR_CSR_TFC(x)                         (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TFC_SHIFT))&LPTMR_CSR_TFC_MASK) /*!< LPTMR0_CSR                              */
#define LPTMR_CSR_TPP_MASK                       (0x8U)                                              /*!< LPTMR0_CSR: TPP Mask                    */
#define LPTMR_CSR_TPP_SHIFT                      (3U)                                                /*!< LPTMR0_CSR: TPP Position                */
#define LPTMR_CSR_TPP(x)                         (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TPP_SHIFT))&LPTMR_CSR_TPP_MASK) /*!< LPTMR0_CSR                              */
#define LPTMR_CSR_TPS_MASK                       (0x30U)                                             /*!< LPTMR0_CSR: TPS Mask                    */
#define LPTMR_CSR_TPS_SHIFT                      (4U)                                                /*!< LPTMR0_CSR: TPS Position                */
#define LPTMR_CSR_TPS(x)                         (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TPS_SHIFT))&LPTMR_CSR_TPS_MASK) /*!< LPTMR0_CSR                              */
#define LPTMR_CSR_TIE_MASK                       (0x40U)                                             /*!< LPTMR0_CSR: TIE Mask                    */
#define LPTMR_CSR_TIE_SHIFT                      (6U)                                                /*!< LPTMR0_CSR: TIE Position                */
#define LPTMR_CSR_TIE(x)                         (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TIE_SHIFT))&LPTMR_CSR_TIE_MASK) /*!< LPTMR0_CSR                              */
#define LPTMR_CSR_TCF_MASK                       (0x80U)                                             /*!< LPTMR0_CSR: TCF Mask                    */
#define LPTMR_CSR_TCF_SHIFT                      (7U)                                                /*!< LPTMR0_CSR: TCF Position                */
#define LPTMR_CSR_TCF(x)                         (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TCF_SHIFT))&LPTMR_CSR_TCF_MASK) /*!< LPTMR0_CSR                              */
#define LPTMR_CSR_TDRE_MASK                      (0x100U)                                            /*!< LPTMR0_CSR: TDRE Mask                   */
#define LPTMR_CSR_TDRE_SHIFT                     (8U)                                                /*!< LPTMR0_CSR: TDRE Position               */
#define LPTMR_CSR_TDRE(x)                        (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TDRE_SHIFT))&LPTMR_CSR_TDRE_MASK) /*!< LPTMR0_CSR                              */
/* ------- PSR Bit Fields                           ------ */
#define LPTMR_PSR_PCS_MASK                       (0x3U)                                              /*!< LPTMR0_PSR: PCS Mask                    */
#define LPTMR_PSR_PCS_SHIFT                      (0U)                                                /*!< LPTMR0_PSR: PCS Position                */
#define LPTMR_PSR_PCS(x)                         (((uint32_t)(((uint32_t)(x))<<LPTMR_PSR_PCS_SHIFT))&LPTMR_PSR_PCS_MASK) /*!< LPTMR0_PSR                              */
#define LPTMR_PSR_PBYP_MASK                      (0x4U)                                              /*!< LPTMR0_PSR: PBYP Mask                   */
#define LPTMR_PSR_PBYP_SHIFT                     (2U)                                                /*!< LPTMR0_PSR: PBYP Position               */
#define LPTMR_PSR_PBYP(x)                        (((uint32_t)(((uint32_t)(x))<<LPTMR_PSR_PBYP_SHIFT))&LPTMR_PSR_PBYP_MASK) /*!< LPTMR0_PSR                              */
#define LPTMR_PSR_PRESCALE_MASK                  (0x78U)                                             /*!< LPTMR0_PSR: PRESCALE Mask               */
#define LPTMR_PSR_PRESCALE_SHIFT                 (3U)                                                /*!< LPTMR0_PSR: PRESCALE Position           */
#define LPTMR_PSR_PRESCALE(x)                    (((uint32_t)(((uint32_t)(x))<<LPTMR_PSR_PRESCALE_SHIFT))&LPTMR_PSR_PRESCALE_MASK) /*!< LPTMR0_PSR                              */
/* ------- CMR Bit Fields                           ------ */
#define LPTMR_CMR_COMPARE_MASK                   (0xFFFFU)                                           /*!< LPTMR0_CMR: COMPARE Mask                */
#define LPTMR_CMR_COMPARE_SHIFT                  (0U)                                                /*!< LPTMR0_CMR: COMPARE Position            */
#define LPTMR_CMR_COMPARE(x)                     (((uint32_t)(((uint32_t)(x))<<LPTMR_CMR_COMPARE_SHIFT))&LPTMR_CMR_COMPARE_MASK) /*!< LPTMR0_CMR                              */
/* ------- CNR Bit Fields                           ------ */
#define LPTMR_CNR_COUNTER_MASK                   (0xFFFFU)                                           /*!< LPTMR0_CNR: COUNTER Mask                */
#define LPTMR_CNR_COUNTER_SHIFT                  (0U)                                                /*!< LPTMR0_CNR: COUNTER Position            */
#define LPTMR_CNR_COUNTER(x)                     (((uint32_t)(((uint32_t)(x))<<LPTMR_CNR_COUNTER_SHIFT))&LPTMR_CNR_COUNTER_MASK) /*!< LPTMR0_CNR                              */
/**
 * @} */ /* End group LPTMR_Register_Masks_GROUP 
 */

/* LPTMR0 - Peripheral instance base addresses */
#define LPTMR0_BasePtr                 0x40040000UL //!< Peripheral base address
#define LPTMR0                         ((LPTMR0_Type *) LPTMR0_BasePtr) //!< Freescale base pointer
#define LPTMR0_BASE_PTR                (LPTMR0) //!< Freescale style base pointer
/**
 * @} */ /* End group LPTMR_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup LPUART_Peripheral_access_layer_GROUP LPUART Peripheral Access Layer
* @brief C Struct for LPUART
* @{
*/

/* ================================================================================ */
/* ================           LPUART0 (file:LPUART0_MKE15Z7)       ================ */
/* ================================================================================ */

/**
 * @brief Low Power Universal Asynchronous Receiver/Transmitter
 */
/**
* @addtogroup LPUART_structs_GROUP LPUART struct
* @brief Struct for LPUART
* @{
*/
typedef struct {                                /*       LPUART0 Structure                                            */
   __I  uint32_t  VERID;                        /**< 0000: Version ID Register                                          */
   __I  uint32_t  PARAM;                        /**< 0004: Parameter Register                                           */
   __IO uint32_t  GLOBAL;                       /**< 0008: LPUART Global Register                                       */
   __IO uint32_t  PINCFG;                       /**< 000C: LPUART Pin Configuration Register                            */
   __IO uint32_t  BAUD;                         /**< 0010: LPUART Baud Rate Register                                    */
   __IO uint32_t  STAT;                         /**< 0014: LPUART Status Register                                       */
   __IO uint32_t  CTRL;                         /**< 0018: LPUART Control Register                                      */
   __IO uint32_t  DATA;                         /**< 001C: LPUART Data Register                                         */
   __IO uint32_t  MATCH;                        /**< 0020: LPUART Match Address Register                                */
   __IO uint32_t  MODIR;                        /**< 0024: LPUART Modem IrDA Register                                   */
   __IO uint32_t  FIFO;                         /**< 0028: LPUART FIFO Register                                         */
   __IO uint32_t  WATER;                        /**< 002C: LPUART Watermark Register                                    */
} LPUART0_Type;

/**
 * @} */ /* End group LPUART_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'LPUART0' Position & Mask macros                     ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup LPUART_Register_Masks_GROUP LPUART Register Masks
* @brief Register Masks for LPUART
* @{
*/
/* ------- VERID Bit Fields                         ------ */
#define LPUART_VERID_FEATURE_MASK                (0xFFFFU)                                           /*!< LPUART0_VERID: FEATURE Mask             */
#define LPUART_VERID_FEATURE_SHIFT               (0U)                                                /*!< LPUART0_VERID: FEATURE Position         */
#define LPUART_VERID_FEATURE(x)                  (((uint32_t)(((uint32_t)(x))<<LPUART_VERID_FEATURE_SHIFT))&LPUART_VERID_FEATURE_MASK) /*!< LPUART0_VERID                           */
#define LPUART_VERID_MINOR_MASK                  (0xFF0000U)                                         /*!< LPUART0_VERID: MINOR Mask               */
#define LPUART_VERID_MINOR_SHIFT                 (16U)                                               /*!< LPUART0_VERID: MINOR Position           */
#define LPUART_VERID_MINOR(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_VERID_MINOR_SHIFT))&LPUART_VERID_MINOR_MASK) /*!< LPUART0_VERID                           */
#define LPUART_VERID_MAJOR_MASK                  (0xFF000000U)                                       /*!< LPUART0_VERID: MAJOR Mask               */
#define LPUART_VERID_MAJOR_SHIFT                 (24U)                                               /*!< LPUART0_VERID: MAJOR Position           */
#define LPUART_VERID_MAJOR(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_VERID_MAJOR_SHIFT))&LPUART_VERID_MAJOR_MASK) /*!< LPUART0_VERID                           */
/* ------- PARAM Bit Fields                         ------ */
#define LPUART_PARAM_TXFIFO_MASK                 (0xFFU)                                             /*!< LPUART0_PARAM: TXFIFO Mask              */
#define LPUART_PARAM_TXFIFO_SHIFT                (0U)                                                /*!< LPUART0_PARAM: TXFIFO Position          */
#define LPUART_PARAM_TXFIFO(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_PARAM_TXFIFO_SHIFT))&LPUART_PARAM_TXFIFO_MASK) /*!< LPUART0_PARAM                           */
#define LPUART_PARAM_RXFIFO_MASK                 (0xFF00U)                                           /*!< LPUART0_PARAM: RXFIFO Mask              */
#define LPUART_PARAM_RXFIFO_SHIFT                (8U)                                                /*!< LPUART0_PARAM: RXFIFO Position          */
#define LPUART_PARAM_RXFIFO(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_PARAM_RXFIFO_SHIFT))&LPUART_PARAM_RXFIFO_MASK) /*!< LPUART0_PARAM                           */
/* ------- GLOBAL Bit Fields                        ------ */
#define LPUART_GLOBAL_RST_MASK                   (0x2U)                                              /*!< LPUART0_GLOBAL: RST Mask                */
#define LPUART_GLOBAL_RST_SHIFT                  (1U)                                                /*!< LPUART0_GLOBAL: RST Position            */
#define LPUART_GLOBAL_RST(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_GLOBAL_RST_SHIFT))&LPUART_GLOBAL_RST_MASK) /*!< LPUART0_GLOBAL                          */
/* ------- PINCFG Bit Fields                        ------ */
#define LPUART_PINCFG_TRGSEL_MASK                (0x3U)                                              /*!< LPUART0_PINCFG: TRGSEL Mask             */
#define LPUART_PINCFG_TRGSEL_SHIFT               (0U)                                                /*!< LPUART0_PINCFG: TRGSEL Position         */
#define LPUART_PINCFG_TRGSEL(x)                  (((uint32_t)(((uint32_t)(x))<<LPUART_PINCFG_TRGSEL_SHIFT))&LPUART_PINCFG_TRGSEL_MASK) /*!< LPUART0_PINCFG                          */
/* ------- BAUD Bit Fields                          ------ */
#define LPUART_BAUD_SBR_MASK                     (0x1FFFU)                                           /*!< LPUART0_BAUD: SBR Mask                  */
#define LPUART_BAUD_SBR_SHIFT                    (0U)                                                /*!< LPUART0_BAUD: SBR Position              */
#define LPUART_BAUD_SBR(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_SBR_SHIFT))&LPUART_BAUD_SBR_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_SBNS_MASK                    (0x2000U)                                           /*!< LPUART0_BAUD: SBNS Mask                 */
#define LPUART_BAUD_SBNS_SHIFT                   (13U)                                               /*!< LPUART0_BAUD: SBNS Position             */
#define LPUART_BAUD_SBNS(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_SBNS_SHIFT))&LPUART_BAUD_SBNS_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_RXEDGIE_MASK                 (0x4000U)                                           /*!< LPUART0_BAUD: RXEDGIE Mask              */
#define LPUART_BAUD_RXEDGIE_SHIFT                (14U)                                               /*!< LPUART0_BAUD: RXEDGIE Position          */
#define LPUART_BAUD_RXEDGIE(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_RXEDGIE_SHIFT))&LPUART_BAUD_RXEDGIE_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_LBKDIE_MASK                  (0x8000U)                                           /*!< LPUART0_BAUD: LBKDIE Mask               */
#define LPUART_BAUD_LBKDIE_SHIFT                 (15U)                                               /*!< LPUART0_BAUD: LBKDIE Position           */
#define LPUART_BAUD_LBKDIE(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_LBKDIE_SHIFT))&LPUART_BAUD_LBKDIE_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_RESYNCDIS_MASK               (0x10000U)                                          /*!< LPUART0_BAUD: RESYNCDIS Mask            */
#define LPUART_BAUD_RESYNCDIS_SHIFT              (16U)                                               /*!< LPUART0_BAUD: RESYNCDIS Position        */
#define LPUART_BAUD_RESYNCDIS(x)                 (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_RESYNCDIS_SHIFT))&LPUART_BAUD_RESYNCDIS_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_BOTHEDGE_MASK                (0x20000U)                                          /*!< LPUART0_BAUD: BOTHEDGE Mask             */
#define LPUART_BAUD_BOTHEDGE_SHIFT               (17U)                                               /*!< LPUART0_BAUD: BOTHEDGE Position         */
#define LPUART_BAUD_BOTHEDGE(x)                  (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_BOTHEDGE_SHIFT))&LPUART_BAUD_BOTHEDGE_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_MATCFG_MASK                  (0xC0000U)                                          /*!< LPUART0_BAUD: MATCFG Mask               */
#define LPUART_BAUD_MATCFG_SHIFT                 (18U)                                               /*!< LPUART0_BAUD: MATCFG Position           */
#define LPUART_BAUD_MATCFG(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_MATCFG_SHIFT))&LPUART_BAUD_MATCFG_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_RIDMAE_MASK                  (0x100000U)                                         /*!< LPUART0_BAUD: RIDMAE Mask               */
#define LPUART_BAUD_RIDMAE_SHIFT                 (20U)                                               /*!< LPUART0_BAUD: RIDMAE Position           */
#define LPUART_BAUD_RIDMAE(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_RIDMAE_SHIFT))&LPUART_BAUD_RIDMAE_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_RDMAE_MASK                   (0x200000U)                                         /*!< LPUART0_BAUD: RDMAE Mask                */
#define LPUART_BAUD_RDMAE_SHIFT                  (21U)                                               /*!< LPUART0_BAUD: RDMAE Position            */
#define LPUART_BAUD_RDMAE(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_RDMAE_SHIFT))&LPUART_BAUD_RDMAE_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_TDMAE_MASK                   (0x800000U)                                         /*!< LPUART0_BAUD: TDMAE Mask                */
#define LPUART_BAUD_TDMAE_SHIFT                  (23U)                                               /*!< LPUART0_BAUD: TDMAE Position            */
#define LPUART_BAUD_TDMAE(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_TDMAE_SHIFT))&LPUART_BAUD_TDMAE_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_OSR_MASK                     (0x1F000000U)                                       /*!< LPUART0_BAUD: OSR Mask                  */
#define LPUART_BAUD_OSR_SHIFT                    (24U)                                               /*!< LPUART0_BAUD: OSR Position              */
#define LPUART_BAUD_OSR(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_OSR_SHIFT))&LPUART_BAUD_OSR_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_M10_MASK                     (0x20000000U)                                       /*!< LPUART0_BAUD: M10 Mask                  */
#define LPUART_BAUD_M10_SHIFT                    (29U)                                               /*!< LPUART0_BAUD: M10 Position              */
#define LPUART_BAUD_M10(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_M10_SHIFT))&LPUART_BAUD_M10_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_MAEN2_MASK                   (0x40000000U)                                       /*!< LPUART0_BAUD: MAEN2 Mask                */
#define LPUART_BAUD_MAEN2_SHIFT                  (30U)                                               /*!< LPUART0_BAUD: MAEN2 Position            */
#define LPUART_BAUD_MAEN2(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_MAEN2_SHIFT))&LPUART_BAUD_MAEN2_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_MAEN1_MASK                   (0x80000000U)                                       /*!< LPUART0_BAUD: MAEN1 Mask                */
#define LPUART_BAUD_MAEN1_SHIFT                  (31U)                                               /*!< LPUART0_BAUD: MAEN1 Position            */
#define LPUART_BAUD_MAEN1(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_MAEN1_SHIFT))&LPUART_BAUD_MAEN1_MASK) /*!< LPUART0_BAUD                            */
/* ------- STAT Bit Fields                          ------ */
#define LPUART_STAT_MA2F_MASK                    (0x4000U)                                           /*!< LPUART0_STAT: MA2F Mask                 */
#define LPUART_STAT_MA2F_SHIFT                   (14U)                                               /*!< LPUART0_STAT: MA2F Position             */
#define LPUART_STAT_MA2F(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_MA2F_SHIFT))&LPUART_STAT_MA2F_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_MA1F_MASK                    (0x8000U)                                           /*!< LPUART0_STAT: MA1F Mask                 */
#define LPUART_STAT_MA1F_SHIFT                   (15U)                                               /*!< LPUART0_STAT: MA1F Position             */
#define LPUART_STAT_MA1F(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_MA1F_SHIFT))&LPUART_STAT_MA1F_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_PF_MASK                      (0x10000U)                                          /*!< LPUART0_STAT: PF Mask                   */
#define LPUART_STAT_PF_SHIFT                     (16U)                                               /*!< LPUART0_STAT: PF Position               */
#define LPUART_STAT_PF(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_PF_SHIFT))&LPUART_STAT_PF_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_FE_MASK                      (0x20000U)                                          /*!< LPUART0_STAT: FE Mask                   */
#define LPUART_STAT_FE_SHIFT                     (17U)                                               /*!< LPUART0_STAT: FE Position               */
#define LPUART_STAT_FE(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_FE_SHIFT))&LPUART_STAT_FE_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_NF_MASK                      (0x40000U)                                          /*!< LPUART0_STAT: NF Mask                   */
#define LPUART_STAT_NF_SHIFT                     (18U)                                               /*!< LPUART0_STAT: NF Position               */
#define LPUART_STAT_NF(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_NF_SHIFT))&LPUART_STAT_NF_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_OR_MASK                      (0x80000U)                                          /*!< LPUART0_STAT: OR Mask                   */
#define LPUART_STAT_OR_SHIFT                     (19U)                                               /*!< LPUART0_STAT: OR Position               */
#define LPUART_STAT_OR(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_OR_SHIFT))&LPUART_STAT_OR_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_IDLE_MASK                    (0x100000U)                                         /*!< LPUART0_STAT: IDLE Mask                 */
#define LPUART_STAT_IDLE_SHIFT                   (20U)                                               /*!< LPUART0_STAT: IDLE Position             */
#define LPUART_STAT_IDLE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_IDLE_SHIFT))&LPUART_STAT_IDLE_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_RDRF_MASK                    (0x200000U)                                         /*!< LPUART0_STAT: RDRF Mask                 */
#define LPUART_STAT_RDRF_SHIFT                   (21U)                                               /*!< LPUART0_STAT: RDRF Position             */
#define LPUART_STAT_RDRF(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_RDRF_SHIFT))&LPUART_STAT_RDRF_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_TC_MASK                      (0x400000U)                                         /*!< LPUART0_STAT: TC Mask                   */
#define LPUART_STAT_TC_SHIFT                     (22U)                                               /*!< LPUART0_STAT: TC Position               */
#define LPUART_STAT_TC(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_TC_SHIFT))&LPUART_STAT_TC_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_TDRE_MASK                    (0x800000U)                                         /*!< LPUART0_STAT: TDRE Mask                 */
#define LPUART_STAT_TDRE_SHIFT                   (23U)                                               /*!< LPUART0_STAT: TDRE Position             */
#define LPUART_STAT_TDRE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_TDRE_SHIFT))&LPUART_STAT_TDRE_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_RAF_MASK                     (0x1000000U)                                        /*!< LPUART0_STAT: RAF Mask                  */
#define LPUART_STAT_RAF_SHIFT                    (24U)                                               /*!< LPUART0_STAT: RAF Position              */
#define LPUART_STAT_RAF(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_RAF_SHIFT))&LPUART_STAT_RAF_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_LBKDE_MASK                   (0x2000000U)                                        /*!< LPUART0_STAT: LBKDE Mask                */
#define LPUART_STAT_LBKDE_SHIFT                  (25U)                                               /*!< LPUART0_STAT: LBKDE Position            */
#define LPUART_STAT_LBKDE(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_LBKDE_SHIFT))&LPUART_STAT_LBKDE_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_BRK13_MASK                   (0x4000000U)                                        /*!< LPUART0_STAT: BRK13 Mask                */
#define LPUART_STAT_BRK13_SHIFT                  (26U)                                               /*!< LPUART0_STAT: BRK13 Position            */
#define LPUART_STAT_BRK13(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_BRK13_SHIFT))&LPUART_STAT_BRK13_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_RWUID_MASK                   (0x8000000U)                                        /*!< LPUART0_STAT: RWUID Mask                */
#define LPUART_STAT_RWUID_SHIFT                  (27U)                                               /*!< LPUART0_STAT: RWUID Position            */
#define LPUART_STAT_RWUID(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_RWUID_SHIFT))&LPUART_STAT_RWUID_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_RXINV_MASK                   (0x10000000U)                                       /*!< LPUART0_STAT: RXINV Mask                */
#define LPUART_STAT_RXINV_SHIFT                  (28U)                                               /*!< LPUART0_STAT: RXINV Position            */
#define LPUART_STAT_RXINV(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_RXINV_SHIFT))&LPUART_STAT_RXINV_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_MSBF_MASK                    (0x20000000U)                                       /*!< LPUART0_STAT: MSBF Mask                 */
#define LPUART_STAT_MSBF_SHIFT                   (29U)                                               /*!< LPUART0_STAT: MSBF Position             */
#define LPUART_STAT_MSBF(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_MSBF_SHIFT))&LPUART_STAT_MSBF_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_RXEDGIF_MASK                 (0x40000000U)                                       /*!< LPUART0_STAT: RXEDGIF Mask              */
#define LPUART_STAT_RXEDGIF_SHIFT                (30U)                                               /*!< LPUART0_STAT: RXEDGIF Position          */
#define LPUART_STAT_RXEDGIF(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_RXEDGIF_SHIFT))&LPUART_STAT_RXEDGIF_MASK) /*!< LPUART0_STAT                            */
#define LPUART_STAT_LBKDIF_MASK                  (0x80000000U)                                       /*!< LPUART0_STAT: LBKDIF Mask               */
#define LPUART_STAT_LBKDIF_SHIFT                 (31U)                                               /*!< LPUART0_STAT: LBKDIF Position           */
#define LPUART_STAT_LBKDIF(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_LBKDIF_SHIFT))&LPUART_STAT_LBKDIF_MASK) /*!< LPUART0_STAT                            */
/* ------- CTRL Bit Fields                          ------ */
#define LPUART_CTRL_PT_MASK                      (0x1U)                                              /*!< LPUART0_CTRL: PT Mask                   */
#define LPUART_CTRL_PT_SHIFT                     (0U)                                                /*!< LPUART0_CTRL: PT Position               */
#define LPUART_CTRL_PT(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_PT_SHIFT))&LPUART_CTRL_PT_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_PE_MASK                      (0x2U)                                              /*!< LPUART0_CTRL: PE Mask                   */
#define LPUART_CTRL_PE_SHIFT                     (1U)                                                /*!< LPUART0_CTRL: PE Position               */
#define LPUART_CTRL_PE(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_PE_SHIFT))&LPUART_CTRL_PE_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_ILT_MASK                     (0x4U)                                              /*!< LPUART0_CTRL: ILT Mask                  */
#define LPUART_CTRL_ILT_SHIFT                    (2U)                                                /*!< LPUART0_CTRL: ILT Position              */
#define LPUART_CTRL_ILT(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_ILT_SHIFT))&LPUART_CTRL_ILT_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_WAKE_MASK                    (0x8U)                                              /*!< LPUART0_CTRL: WAKE Mask                 */
#define LPUART_CTRL_WAKE_SHIFT                   (3U)                                                /*!< LPUART0_CTRL: WAKE Position             */
#define LPUART_CTRL_WAKE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_WAKE_SHIFT))&LPUART_CTRL_WAKE_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_M_MASK                       (0x10U)                                             /*!< LPUART0_CTRL: M Mask                    */
#define LPUART_CTRL_M_SHIFT                      (4U)                                                /*!< LPUART0_CTRL: M Position                */
#define LPUART_CTRL_M(x)                         (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_M_SHIFT))&LPUART_CTRL_M_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_RSRC_MASK                    (0x20U)                                             /*!< LPUART0_CTRL: RSRC Mask                 */
#define LPUART_CTRL_RSRC_SHIFT                   (5U)                                                /*!< LPUART0_CTRL: RSRC Position             */
#define LPUART_CTRL_RSRC(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_RSRC_SHIFT))&LPUART_CTRL_RSRC_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_DOZEEN_MASK                  (0x40U)                                             /*!< LPUART0_CTRL: DOZEEN Mask               */
#define LPUART_CTRL_DOZEEN_SHIFT                 (6U)                                                /*!< LPUART0_CTRL: DOZEEN Position           */
#define LPUART_CTRL_DOZEEN(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_DOZEEN_SHIFT))&LPUART_CTRL_DOZEEN_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_LOOPS_MASK                   (0x80U)                                             /*!< LPUART0_CTRL: LOOPS Mask                */
#define LPUART_CTRL_LOOPS_SHIFT                  (7U)                                                /*!< LPUART0_CTRL: LOOPS Position            */
#define LPUART_CTRL_LOOPS(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_LOOPS_SHIFT))&LPUART_CTRL_LOOPS_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_IDLECFG_MASK                 (0x700U)                                            /*!< LPUART0_CTRL: IDLECFG Mask              */
#define LPUART_CTRL_IDLECFG_SHIFT                (8U)                                                /*!< LPUART0_CTRL: IDLECFG Position          */
#define LPUART_CTRL_IDLECFG(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_IDLECFG_SHIFT))&LPUART_CTRL_IDLECFG_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_M7_MASK                      (0x800U)                                            /*!< LPUART0_CTRL: M7 Mask                   */
#define LPUART_CTRL_M7_SHIFT                     (11U)                                               /*!< LPUART0_CTRL: M7 Position               */
#define LPUART_CTRL_M7(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_M7_SHIFT))&LPUART_CTRL_M7_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_MA2IE_MASK                   (0x4000U)                                           /*!< LPUART0_CTRL: MA2IE Mask                */
#define LPUART_CTRL_MA2IE_SHIFT                  (14U)                                               /*!< LPUART0_CTRL: MA2IE Position            */
#define LPUART_CTRL_MA2IE(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_MA2IE_SHIFT))&LPUART_CTRL_MA2IE_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_MA1IE_MASK                   (0x8000U)                                           /*!< LPUART0_CTRL: MA1IE Mask                */
#define LPUART_CTRL_MA1IE_SHIFT                  (15U)                                               /*!< LPUART0_CTRL: MA1IE Position            */
#define LPUART_CTRL_MA1IE(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_MA1IE_SHIFT))&LPUART_CTRL_MA1IE_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_SBK_MASK                     (0x10000U)                                          /*!< LPUART0_CTRL: SBK Mask                  */
#define LPUART_CTRL_SBK_SHIFT                    (16U)                                               /*!< LPUART0_CTRL: SBK Position              */
#define LPUART_CTRL_SBK(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_SBK_SHIFT))&LPUART_CTRL_SBK_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_RWU_MASK                     (0x20000U)                                          /*!< LPUART0_CTRL: RWU Mask                  */
#define LPUART_CTRL_RWU_SHIFT                    (17U)                                               /*!< LPUART0_CTRL: RWU Position              */
#define LPUART_CTRL_RWU(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_RWU_SHIFT))&LPUART_CTRL_RWU_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_RE_MASK                      (0x40000U)                                          /*!< LPUART0_CTRL: RE Mask                   */
#define LPUART_CTRL_RE_SHIFT                     (18U)                                               /*!< LPUART0_CTRL: RE Position               */
#define LPUART_CTRL_RE(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_RE_SHIFT))&LPUART_CTRL_RE_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_TE_MASK                      (0x80000U)                                          /*!< LPUART0_CTRL: TE Mask                   */
#define LPUART_CTRL_TE_SHIFT                     (19U)                                               /*!< LPUART0_CTRL: TE Position               */
#define LPUART_CTRL_TE(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_TE_SHIFT))&LPUART_CTRL_TE_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_ILIE_MASK                    (0x100000U)                                         /*!< LPUART0_CTRL: ILIE Mask                 */
#define LPUART_CTRL_ILIE_SHIFT                   (20U)                                               /*!< LPUART0_CTRL: ILIE Position             */
#define LPUART_CTRL_ILIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_ILIE_SHIFT))&LPUART_CTRL_ILIE_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_RIE_MASK                     (0x200000U)                                         /*!< LPUART0_CTRL: RIE Mask                  */
#define LPUART_CTRL_RIE_SHIFT                    (21U)                                               /*!< LPUART0_CTRL: RIE Position              */
#define LPUART_CTRL_RIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_RIE_SHIFT))&LPUART_CTRL_RIE_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_TCIE_MASK                    (0x400000U)                                         /*!< LPUART0_CTRL: TCIE Mask                 */
#define LPUART_CTRL_TCIE_SHIFT                   (22U)                                               /*!< LPUART0_CTRL: TCIE Position             */
#define LPUART_CTRL_TCIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_TCIE_SHIFT))&LPUART_CTRL_TCIE_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_TIE_MASK                     (0x800000U)                                         /*!< LPUART0_CTRL: TIE Mask                  */
#define LPUART_CTRL_TIE_SHIFT                    (23U)                                               /*!< LPUART0_CTRL: TIE Position              */
#define LPUART_CTRL_TIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_TIE_SHIFT))&LPUART_CTRL_TIE_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_PEIE_MASK                    (0x1000000U)                                        /*!< LPUART0_CTRL: PEIE Mask                 */
#define LPUART_CTRL_PEIE_SHIFT                   (24U)                                               /*!< LPUART0_CTRL: PEIE Position             */
#define LPUART_CTRL_PEIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_PEIE_SHIFT))&LPUART_CTRL_PEIE_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_FEIE_MASK                    (0x2000000U)                                        /*!< LPUART0_CTRL: FEIE Mask                 */
#define LPUART_CTRL_FEIE_SHIFT                   (25U)                                               /*!< LPUART0_CTRL: FEIE Position             */
#define LPUART_CTRL_FEIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_FEIE_SHIFT))&LPUART_CTRL_FEIE_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_NEIE_MASK                    (0x4000000U)                                        /*!< LPUART0_CTRL: NEIE Mask                 */
#define LPUART_CTRL_NEIE_SHIFT                   (26U)                                               /*!< LPUART0_CTRL: NEIE Position             */
#define LPUART_CTRL_NEIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_NEIE_SHIFT))&LPUART_CTRL_NEIE_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_ORIE_MASK                    (0x8000000U)                                        /*!< LPUART0_CTRL: ORIE Mask                 */
#define LPUART_CTRL_ORIE_SHIFT                   (27U)                                               /*!< LPUART0_CTRL: ORIE Position             */
#define LPUART_CTRL_ORIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_ORIE_SHIFT))&LPUART_CTRL_ORIE_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_TXINV_MASK                   (0x10000000U)                                       /*!< LPUART0_CTRL: TXINV Mask                */
#define LPUART_CTRL_TXINV_SHIFT                  (28U)                                               /*!< LPUART0_CTRL: TXINV Position            */
#define LPUART_CTRL_TXINV(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_TXINV_SHIFT))&LPUART_CTRL_TXINV_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_TXDIR_MASK                   (0x20000000U)                                       /*!< LPUART0_CTRL: TXDIR Mask                */
#define LPUART_CTRL_TXDIR_SHIFT                  (29U)                                               /*!< LPUART0_CTRL: TXDIR Position            */
#define LPUART_CTRL_TXDIR(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_TXDIR_SHIFT))&LPUART_CTRL_TXDIR_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_R9T8_MASK                    (0x40000000U)                                       /*!< LPUART0_CTRL: R9T8 Mask                 */
#define LPUART_CTRL_R9T8_SHIFT                   (30U)                                               /*!< LPUART0_CTRL: R9T8 Position             */
#define LPUART_CTRL_R9T8(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_R9T8_SHIFT))&LPUART_CTRL_R9T8_MASK) /*!< LPUART0_CTRL                            */
#define LPUART_CTRL_R8T9_MASK                    (0x80000000U)                                       /*!< LPUART0_CTRL: R8T9 Mask                 */
#define LPUART_CTRL_R8T9_SHIFT                   (31U)                                               /*!< LPUART0_CTRL: R8T9 Position             */
#define LPUART_CTRL_R8T9(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_R8T9_SHIFT))&LPUART_CTRL_R8T9_MASK) /*!< LPUART0_CTRL                            */
/* ------- DATA Bit Fields                          ------ */
#define LPUART_DATA_R0T0_MASK                    (0x1U)                                              /*!< LPUART0_DATA: R0T0 Mask                 */
#define LPUART_DATA_R0T0_SHIFT                   (0U)                                                /*!< LPUART0_DATA: R0T0 Position             */
#define LPUART_DATA_R0T0(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R0T0_SHIFT))&LPUART_DATA_R0T0_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_R1T1_MASK                    (0x2U)                                              /*!< LPUART0_DATA: R1T1 Mask                 */
#define LPUART_DATA_R1T1_SHIFT                   (1U)                                                /*!< LPUART0_DATA: R1T1 Position             */
#define LPUART_DATA_R1T1(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R1T1_SHIFT))&LPUART_DATA_R1T1_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_R2T2_MASK                    (0x4U)                                              /*!< LPUART0_DATA: R2T2 Mask                 */
#define LPUART_DATA_R2T2_SHIFT                   (2U)                                                /*!< LPUART0_DATA: R2T2 Position             */
#define LPUART_DATA_R2T2(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R2T2_SHIFT))&LPUART_DATA_R2T2_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_R3T3_MASK                    (0x8U)                                              /*!< LPUART0_DATA: R3T3 Mask                 */
#define LPUART_DATA_R3T3_SHIFT                   (3U)                                                /*!< LPUART0_DATA: R3T3 Position             */
#define LPUART_DATA_R3T3(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R3T3_SHIFT))&LPUART_DATA_R3T3_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_R4T4_MASK                    (0x10U)                                             /*!< LPUART0_DATA: R4T4 Mask                 */
#define LPUART_DATA_R4T4_SHIFT                   (4U)                                                /*!< LPUART0_DATA: R4T4 Position             */
#define LPUART_DATA_R4T4(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R4T4_SHIFT))&LPUART_DATA_R4T4_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_R5T5_MASK                    (0x20U)                                             /*!< LPUART0_DATA: R5T5 Mask                 */
#define LPUART_DATA_R5T5_SHIFT                   (5U)                                                /*!< LPUART0_DATA: R5T5 Position             */
#define LPUART_DATA_R5T5(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R5T5_SHIFT))&LPUART_DATA_R5T5_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_R6T6_MASK                    (0x40U)                                             /*!< LPUART0_DATA: R6T6 Mask                 */
#define LPUART_DATA_R6T6_SHIFT                   (6U)                                                /*!< LPUART0_DATA: R6T6 Position             */
#define LPUART_DATA_R6T6(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R6T6_SHIFT))&LPUART_DATA_R6T6_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_R7T7_MASK                    (0x80U)                                             /*!< LPUART0_DATA: R7T7 Mask                 */
#define LPUART_DATA_R7T7_SHIFT                   (7U)                                                /*!< LPUART0_DATA: R7T7 Position             */
#define LPUART_DATA_R7T7(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R7T7_SHIFT))&LPUART_DATA_R7T7_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_R8T8_MASK                    (0x100U)                                            /*!< LPUART0_DATA: R8T8 Mask                 */
#define LPUART_DATA_R8T8_SHIFT                   (8U)                                                /*!< LPUART0_DATA: R8T8 Position             */
#define LPUART_DATA_R8T8(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R8T8_SHIFT))&LPUART_DATA_R8T8_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_R9T9_MASK                    (0x200U)                                            /*!< LPUART0_DATA: R9T9 Mask                 */
#define LPUART_DATA_R9T9_SHIFT                   (9U)                                                /*!< LPUART0_DATA: R9T9 Position             */
#define LPUART_DATA_R9T9(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R9T9_SHIFT))&LPUART_DATA_R9T9_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_IDLINE_MASK                  (0x800U)                                            /*!< LPUART0_DATA: IDLINE Mask               */
#define LPUART_DATA_IDLINE_SHIFT                 (11U)                                               /*!< LPUART0_DATA: IDLINE Position           */
#define LPUART_DATA_IDLINE(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_IDLINE_SHIFT))&LPUART_DATA_IDLINE_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_RXEMPT_MASK                  (0x1000U)                                           /*!< LPUART0_DATA: RXEMPT Mask               */
#define LPUART_DATA_RXEMPT_SHIFT                 (12U)                                               /*!< LPUART0_DATA: RXEMPT Position           */
#define LPUART_DATA_RXEMPT(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_RXEMPT_SHIFT))&LPUART_DATA_RXEMPT_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_FRETSC_MASK                  (0x2000U)                                           /*!< LPUART0_DATA: FRETSC Mask               */
#define LPUART_DATA_FRETSC_SHIFT                 (13U)                                               /*!< LPUART0_DATA: FRETSC Position           */
#define LPUART_DATA_FRETSC(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_FRETSC_SHIFT))&LPUART_DATA_FRETSC_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_PARITYE_MASK                 (0x4000U)                                           /*!< LPUART0_DATA: PARITYE Mask              */
#define LPUART_DATA_PARITYE_SHIFT                (14U)                                               /*!< LPUART0_DATA: PARITYE Position          */
#define LPUART_DATA_PARITYE(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_PARITYE_SHIFT))&LPUART_DATA_PARITYE_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_NOISY_MASK                   (0x8000U)                                           /*!< LPUART0_DATA: NOISY Mask                */
#define LPUART_DATA_NOISY_SHIFT                  (15U)                                               /*!< LPUART0_DATA: NOISY Position            */
#define LPUART_DATA_NOISY(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_NOISY_SHIFT))&LPUART_DATA_NOISY_MASK) /*!< LPUART0_DATA                            */
/* ------- MATCH Bit Fields                         ------ */
#define LPUART_MATCH_MA1_MASK                    (0x3FFU)                                            /*!< LPUART0_MATCH: MA1 Mask                 */
#define LPUART_MATCH_MA1_SHIFT                   (0U)                                                /*!< LPUART0_MATCH: MA1 Position             */
#define LPUART_MATCH_MA1(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_MATCH_MA1_SHIFT))&LPUART_MATCH_MA1_MASK) /*!< LPUART0_MATCH                           */
#define LPUART_MATCH_MA2_MASK                    (0x3FF0000U)                                        /*!< LPUART0_MATCH: MA2 Mask                 */
#define LPUART_MATCH_MA2_SHIFT                   (16U)                                               /*!< LPUART0_MATCH: MA2 Position             */
#define LPUART_MATCH_MA2(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_MATCH_MA2_SHIFT))&LPUART_MATCH_MA2_MASK) /*!< LPUART0_MATCH                           */
/* ------- MODIR Bit Fields                         ------ */
#define LPUART_MODIR_TXCTSE_MASK                 (0x1U)                                              /*!< LPUART0_MODIR: TXCTSE Mask              */
#define LPUART_MODIR_TXCTSE_SHIFT                (0U)                                                /*!< LPUART0_MODIR: TXCTSE Position          */
#define LPUART_MODIR_TXCTSE(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_TXCTSE_SHIFT))&LPUART_MODIR_TXCTSE_MASK) /*!< LPUART0_MODIR                           */
#define LPUART_MODIR_TXRTSE_MASK                 (0x2U)                                              /*!< LPUART0_MODIR: TXRTSE Mask              */
#define LPUART_MODIR_TXRTSE_SHIFT                (1U)                                                /*!< LPUART0_MODIR: TXRTSE Position          */
#define LPUART_MODIR_TXRTSE(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_TXRTSE_SHIFT))&LPUART_MODIR_TXRTSE_MASK) /*!< LPUART0_MODIR                           */
#define LPUART_MODIR_TXRTSPOL_MASK               (0x4U)                                              /*!< LPUART0_MODIR: TXRTSPOL Mask            */
#define LPUART_MODIR_TXRTSPOL_SHIFT              (2U)                                                /*!< LPUART0_MODIR: TXRTSPOL Position        */
#define LPUART_MODIR_TXRTSPOL(x)                 (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_TXRTSPOL_SHIFT))&LPUART_MODIR_TXRTSPOL_MASK) /*!< LPUART0_MODIR                           */
#define LPUART_MODIR_RXRTSE_MASK                 (0x8U)                                              /*!< LPUART0_MODIR: RXRTSE Mask              */
#define LPUART_MODIR_RXRTSE_SHIFT                (3U)                                                /*!< LPUART0_MODIR: RXRTSE Position          */
#define LPUART_MODIR_RXRTSE(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_RXRTSE_SHIFT))&LPUART_MODIR_RXRTSE_MASK) /*!< LPUART0_MODIR                           */
#define LPUART_MODIR_TXCTSC_MASK                 (0x10U)                                             /*!< LPUART0_MODIR: TXCTSC Mask              */
#define LPUART_MODIR_TXCTSC_SHIFT                (4U)                                                /*!< LPUART0_MODIR: TXCTSC Position          */
#define LPUART_MODIR_TXCTSC(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_TXCTSC_SHIFT))&LPUART_MODIR_TXCTSC_MASK) /*!< LPUART0_MODIR                           */
#define LPUART_MODIR_TXCTSSRC_MASK               (0x20U)                                             /*!< LPUART0_MODIR: TXCTSSRC Mask            */
#define LPUART_MODIR_TXCTSSRC_SHIFT              (5U)                                                /*!< LPUART0_MODIR: TXCTSSRC Position        */
#define LPUART_MODIR_TXCTSSRC(x)                 (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_TXCTSSRC_SHIFT))&LPUART_MODIR_TXCTSSRC_MASK) /*!< LPUART0_MODIR                           */
#define LPUART_MODIR_RTSWATER_MASK               (0xFF00U)                                           /*!< LPUART0_MODIR: RTSWATER Mask            */
#define LPUART_MODIR_RTSWATER_SHIFT              (8U)                                                /*!< LPUART0_MODIR: RTSWATER Position        */
#define LPUART_MODIR_RTSWATER(x)                 (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_RTSWATER_SHIFT))&LPUART_MODIR_RTSWATER_MASK) /*!< LPUART0_MODIR                           */
#define LPUART_MODIR_TNP_MASK                    (0x30000U)                                          /*!< LPUART0_MODIR: TNP Mask                 */
#define LPUART_MODIR_TNP_SHIFT                   (16U)                                               /*!< LPUART0_MODIR: TNP Position             */
#define LPUART_MODIR_TNP(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_TNP_SHIFT))&LPUART_MODIR_TNP_MASK) /*!< LPUART0_MODIR                           */
#define LPUART_MODIR_IREN_MASK                   (0x40000U)                                          /*!< LPUART0_MODIR: IREN Mask                */
#define LPUART_MODIR_IREN_SHIFT                  (18U)                                               /*!< LPUART0_MODIR: IREN Position            */
#define LPUART_MODIR_IREN(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_IREN_SHIFT))&LPUART_MODIR_IREN_MASK) /*!< LPUART0_MODIR                           */
/* ------- FIFO Bit Fields                          ------ */
#define LPUART_FIFO_RXFIFOSIZE_MASK              (0x7U)                                              /*!< LPUART0_FIFO: RXFIFOSIZE Mask           */
#define LPUART_FIFO_RXFIFOSIZE_SHIFT             (0U)                                                /*!< LPUART0_FIFO: RXFIFOSIZE Position       */
#define LPUART_FIFO_RXFIFOSIZE(x)                (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_RXFIFOSIZE_SHIFT))&LPUART_FIFO_RXFIFOSIZE_MASK) /*!< LPUART0_FIFO                            */
#define LPUART_FIFO_RXFE_MASK                    (0x8U)                                              /*!< LPUART0_FIFO: RXFE Mask                 */
#define LPUART_FIFO_RXFE_SHIFT                   (3U)                                                /*!< LPUART0_FIFO: RXFE Position             */
#define LPUART_FIFO_RXFE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_RXFE_SHIFT))&LPUART_FIFO_RXFE_MASK) /*!< LPUART0_FIFO                            */
#define LPUART_FIFO_TXFIFOSIZE_MASK              (0x70U)                                             /*!< LPUART0_FIFO: TXFIFOSIZE Mask           */
#define LPUART_FIFO_TXFIFOSIZE_SHIFT             (4U)                                                /*!< LPUART0_FIFO: TXFIFOSIZE Position       */
#define LPUART_FIFO_TXFIFOSIZE(x)                (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_TXFIFOSIZE_SHIFT))&LPUART_FIFO_TXFIFOSIZE_MASK) /*!< LPUART0_FIFO                            */
#define LPUART_FIFO_TXFE_MASK                    (0x80U)                                             /*!< LPUART0_FIFO: TXFE Mask                 */
#define LPUART_FIFO_TXFE_SHIFT                   (7U)                                                /*!< LPUART0_FIFO: TXFE Position             */
#define LPUART_FIFO_TXFE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_TXFE_SHIFT))&LPUART_FIFO_TXFE_MASK) /*!< LPUART0_FIFO                            */
#define LPUART_FIFO_RXUFE_MASK                   (0x100U)                                            /*!< LPUART0_FIFO: RXUFE Mask                */
#define LPUART_FIFO_RXUFE_SHIFT                  (8U)                                                /*!< LPUART0_FIFO: RXUFE Position            */
#define LPUART_FIFO_RXUFE(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_RXUFE_SHIFT))&LPUART_FIFO_RXUFE_MASK) /*!< LPUART0_FIFO                            */
#define LPUART_FIFO_TXOFE_MASK                   (0x200U)                                            /*!< LPUART0_FIFO: TXOFE Mask                */
#define LPUART_FIFO_TXOFE_SHIFT                  (9U)                                                /*!< LPUART0_FIFO: TXOFE Position            */
#define LPUART_FIFO_TXOFE(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_TXOFE_SHIFT))&LPUART_FIFO_TXOFE_MASK) /*!< LPUART0_FIFO                            */
#define LPUART_FIFO_RXIDEN_MASK                  (0x1C00U)                                           /*!< LPUART0_FIFO: RXIDEN Mask               */
#define LPUART_FIFO_RXIDEN_SHIFT                 (10U)                                               /*!< LPUART0_FIFO: RXIDEN Position           */
#define LPUART_FIFO_RXIDEN(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_RXIDEN_SHIFT))&LPUART_FIFO_RXIDEN_MASK) /*!< LPUART0_FIFO                            */
#define LPUART_FIFO_RXFLUSH_MASK                 (0x4000U)                                           /*!< LPUART0_FIFO: RXFLUSH Mask              */
#define LPUART_FIFO_RXFLUSH_SHIFT                (14U)                                               /*!< LPUART0_FIFO: RXFLUSH Position          */
#define LPUART_FIFO_RXFLUSH(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_RXFLUSH_SHIFT))&LPUART_FIFO_RXFLUSH_MASK) /*!< LPUART0_FIFO                            */
#define LPUART_FIFO_TXFLUSH_MASK                 (0x8000U)                                           /*!< LPUART0_FIFO: TXFLUSH Mask              */
#define LPUART_FIFO_TXFLUSH_SHIFT                (15U)                                               /*!< LPUART0_FIFO: TXFLUSH Position          */
#define LPUART_FIFO_TXFLUSH(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_TXFLUSH_SHIFT))&LPUART_FIFO_TXFLUSH_MASK) /*!< LPUART0_FIFO                            */
#define LPUART_FIFO_RXUF_MASK                    (0x10000U)                                          /*!< LPUART0_FIFO: RXUF Mask                 */
#define LPUART_FIFO_RXUF_SHIFT                   (16U)                                               /*!< LPUART0_FIFO: RXUF Position             */
#define LPUART_FIFO_RXUF(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_RXUF_SHIFT))&LPUART_FIFO_RXUF_MASK) /*!< LPUART0_FIFO                            */
#define LPUART_FIFO_TXOF_MASK                    (0x20000U)                                          /*!< LPUART0_FIFO: TXOF Mask                 */
#define LPUART_FIFO_TXOF_SHIFT                   (17U)                                               /*!< LPUART0_FIFO: TXOF Position             */
#define LPUART_FIFO_TXOF(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_TXOF_SHIFT))&LPUART_FIFO_TXOF_MASK) /*!< LPUART0_FIFO                            */
#define LPUART_FIFO_RXEMPT_MASK                  (0x400000U)                                         /*!< LPUART0_FIFO: RXEMPT Mask               */
#define LPUART_FIFO_RXEMPT_SHIFT                 (22U)                                               /*!< LPUART0_FIFO: RXEMPT Position           */
#define LPUART_FIFO_RXEMPT(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_RXEMPT_SHIFT))&LPUART_FIFO_RXEMPT_MASK) /*!< LPUART0_FIFO                            */
#define LPUART_FIFO_TXEMPT_MASK                  (0x800000U)                                         /*!< LPUART0_FIFO: TXEMPT Mask               */
#define LPUART_FIFO_TXEMPT_SHIFT                 (23U)                                               /*!< LPUART0_FIFO: TXEMPT Position           */
#define LPUART_FIFO_TXEMPT(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_TXEMPT_SHIFT))&LPUART_FIFO_TXEMPT_MASK) /*!< LPUART0_FIFO                            */
/* ------- WATER Bit Fields                         ------ */
#define LPUART_WATER_TXWATER_MASK                (0xFFU)                                             /*!< LPUART0_WATER: TXWATER Mask             */
#define LPUART_WATER_TXWATER_SHIFT               (0U)                                                /*!< LPUART0_WATER: TXWATER Position         */
#define LPUART_WATER_TXWATER(x)                  (((uint32_t)(((uint32_t)(x))<<LPUART_WATER_TXWATER_SHIFT))&LPUART_WATER_TXWATER_MASK) /*!< LPUART0_WATER                           */
#define LPUART_WATER_TXCOUNT_MASK                (0xFF00U)                                           /*!< LPUART0_WATER: TXCOUNT Mask             */
#define LPUART_WATER_TXCOUNT_SHIFT               (8U)                                                /*!< LPUART0_WATER: TXCOUNT Position         */
#define LPUART_WATER_TXCOUNT(x)                  (((uint32_t)(((uint32_t)(x))<<LPUART_WATER_TXCOUNT_SHIFT))&LPUART_WATER_TXCOUNT_MASK) /*!< LPUART0_WATER                           */
#define LPUART_WATER_RXWATER_MASK                (0xFF0000U)                                         /*!< LPUART0_WATER: RXWATER Mask             */
#define LPUART_WATER_RXWATER_SHIFT               (16U)                                               /*!< LPUART0_WATER: RXWATER Position         */
#define LPUART_WATER_RXWATER(x)                  (((uint32_t)(((uint32_t)(x))<<LPUART_WATER_RXWATER_SHIFT))&LPUART_WATER_RXWATER_MASK) /*!< LPUART0_WATER                           */
#define LPUART_WATER_RXCOUNT_MASK                (0xFF000000U)                                       /*!< LPUART0_WATER: RXCOUNT Mask             */
#define LPUART_WATER_RXCOUNT_SHIFT               (24U)                                               /*!< LPUART0_WATER: RXCOUNT Position         */
#define LPUART_WATER_RXCOUNT(x)                  (((uint32_t)(((uint32_t)(x))<<LPUART_WATER_RXCOUNT_SHIFT))&LPUART_WATER_RXCOUNT_MASK) /*!< LPUART0_WATER                           */
/**
 * @} */ /* End group LPUART_Register_Masks_GROUP 
 */

/* LPUART0 - Peripheral instance base addresses */
#define LPUART0_BasePtr                0x4006A000UL //!< Peripheral base address
#define LPUART0                        ((LPUART0_Type *) LPUART0_BasePtr) //!< Freescale base pointer
#define LPUART0_BASE_PTR               (LPUART0) //!< Freescale style base pointer
/**
 * @} */ /* End group LPUART_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup LPUART_Peripheral_access_layer_GROUP LPUART Peripheral Access Layer
* @brief C Struct for LPUART
* @{
*/

/* ================================================================================ */
/* ================           LPUART1 (derived from LPUART0)       ================ */
/* ================================================================================ */

/**
 * @brief Low Power Universal Asynchronous Receiver/Transmitter
 */

/* LPUART1 - Peripheral instance base addresses */
#define LPUART1_BasePtr                0x4006B000UL //!< Peripheral base address
#define LPUART1                        ((LPUART0_Type *) LPUART1_BasePtr) //!< Freescale base pointer
#define LPUART1_BASE_PTR               (LPUART1) //!< Freescale style base pointer
/**
 * @} */ /* End group LPUART_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup LPUART_Peripheral_access_layer_GROUP LPUART Peripheral Access Layer
* @brief C Struct for LPUART
* @{
*/

/* ================================================================================ */
/* ================           LPUART2 (derived from LPUART0)       ================ */
/* ================================================================================ */

/**
 * @brief Low Power Universal Asynchronous Receiver/Transmitter
 */

/* LPUART2 - Peripheral instance base addresses */
#define LPUART2_BasePtr                0x4006C000UL //!< Peripheral base address
#define LPUART2                        ((LPUART0_Type *) LPUART2_BasePtr) //!< Freescale base pointer
#define LPUART2_BASE_PTR               (LPUART2) //!< Freescale style base pointer
/**
 * @} */ /* End group LPUART_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup MCM_Peripheral_access_layer_GROUP MCM Peripheral Access Layer
* @brief C Struct for MCM
* @{
*/

/* ================================================================================ */
/* ================           MCM (file:MCM_MKE15Z7)               ================ */
/* ================================================================================ */

/**
 * @brief Core Platform Miscellaneous Control Module
 */
/**
* @addtogroup MCM_structs_GROUP MCM struct
* @brief Struct for MCM
* @{
*/
typedef struct {                                /*       MCM Structure                                                */
        uint8_t   RESERVED_0[8];               
   __I  uint16_t  PLASC;                        /**< 0008: Crossbar Switch (AXBS) Slave Configuration                   */
   __I  uint16_t  PLAMC;                        /**< 000A: Crossbar Switch (AXBS) Master Configuration                  */
   __IO uint32_t  PLACR;                        /**< 000C: Platform Control Register                                    */
        uint8_t   RESERVED_1[48];              
   __IO uint32_t  CPO;                          /**< 0040: Compute Operation Control Register                           */
} MCM_Type;

/**
 * @} */ /* End group MCM_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'MCM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup MCM_Register_Masks_GROUP MCM Register Masks
* @brief Register Masks for MCM
* @{
*/
/* ------- PLASC Bit Fields                         ------ */
#define MCM_PLASC_ASC_MASK                       (0xFFU)                                             /*!< MCM_PLASC: ASC Mask                     */
#define MCM_PLASC_ASC_SHIFT                      (0U)                                                /*!< MCM_PLASC: ASC Position                 */
#define MCM_PLASC_ASC(x)                         (((uint16_t)(((uint16_t)(x))<<MCM_PLASC_ASC_SHIFT))&MCM_PLASC_ASC_MASK) /*!< MCM_PLASC                               */
/* ------- PLAMC Bit Fields                         ------ */
#define MCM_PLAMC_AMC_MASK                       (0xFFU)                                             /*!< MCM_PLAMC: AMC Mask                     */
#define MCM_PLAMC_AMC_SHIFT                      (0U)                                                /*!< MCM_PLAMC: AMC Position                 */
#define MCM_PLAMC_AMC(x)                         (((uint16_t)(((uint16_t)(x))<<MCM_PLAMC_AMC_SHIFT))&MCM_PLAMC_AMC_MASK) /*!< MCM_PLAMC                               */
/* ------- PLACR Bit Fields                         ------ */
#define MCM_PLACR_ARB_MASK                       (0x200U)                                            /*!< MCM_PLACR: ARB Mask                     */
#define MCM_PLACR_ARB_SHIFT                      (9U)                                                /*!< MCM_PLACR: ARB Position                 */
#define MCM_PLACR_ARB(x)                         (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_ARB_SHIFT))&MCM_PLACR_ARB_MASK) /*!< MCM_PLACR                               */
#define MCM_PLACR_CFCC_MASK                      (0x400U)                                            /*!< MCM_PLACR: CFCC Mask                    */
#define MCM_PLACR_CFCC_SHIFT                     (10U)                                               /*!< MCM_PLACR: CFCC Position                */
#define MCM_PLACR_CFCC(x)                        (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_CFCC_SHIFT))&MCM_PLACR_CFCC_MASK) /*!< MCM_PLACR                               */
#define MCM_PLACR_DFCDA_MASK                     (0x800U)                                            /*!< MCM_PLACR: DFCDA Mask                   */
#define MCM_PLACR_DFCDA_SHIFT                    (11U)                                               /*!< MCM_PLACR: DFCDA Position               */
#define MCM_PLACR_DFCDA(x)                       (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_DFCDA_SHIFT))&MCM_PLACR_DFCDA_MASK) /*!< MCM_PLACR                               */
#define MCM_PLACR_DFCIC_MASK                     (0x1000U)                                           /*!< MCM_PLACR: DFCIC Mask                   */
#define MCM_PLACR_DFCIC_SHIFT                    (12U)                                               /*!< MCM_PLACR: DFCIC Position               */
#define MCM_PLACR_DFCIC(x)                       (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_DFCIC_SHIFT))&MCM_PLACR_DFCIC_MASK) /*!< MCM_PLACR                               */
#define MCM_PLACR_DFCC_MASK                      (0x2000U)                                           /*!< MCM_PLACR: DFCC Mask                    */
#define MCM_PLACR_DFCC_SHIFT                     (13U)                                               /*!< MCM_PLACR: DFCC Position                */
#define MCM_PLACR_DFCC(x)                        (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_DFCC_SHIFT))&MCM_PLACR_DFCC_MASK) /*!< MCM_PLACR                               */
#define MCM_PLACR_EFDS_MASK                      (0x4000U)                                           /*!< MCM_PLACR: EFDS Mask                    */
#define MCM_PLACR_EFDS_SHIFT                     (14U)                                               /*!< MCM_PLACR: EFDS Position                */
#define MCM_PLACR_EFDS(x)                        (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_EFDS_SHIFT))&MCM_PLACR_EFDS_MASK) /*!< MCM_PLACR                               */
#define MCM_PLACR_DFCS_MASK                      (0x8000U)                                           /*!< MCM_PLACR: DFCS Mask                    */
#define MCM_PLACR_DFCS_SHIFT                     (15U)                                               /*!< MCM_PLACR: DFCS Position                */
#define MCM_PLACR_DFCS(x)                        (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_DFCS_SHIFT))&MCM_PLACR_DFCS_MASK) /*!< MCM_PLACR                               */
#define MCM_PLACR_ESFC_MASK                      (0x10000U)                                          /*!< MCM_PLACR: ESFC Mask                    */
#define MCM_PLACR_ESFC_SHIFT                     (16U)                                               /*!< MCM_PLACR: ESFC Position                */
#define MCM_PLACR_ESFC(x)                        (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_ESFC_SHIFT))&MCM_PLACR_ESFC_MASK) /*!< MCM_PLACR                               */
/* ------- CPO Bit Fields                           ------ */
#define MCM_CPO_CPOREQ_MASK                      (0x1U)                                              /*!< MCM_CPO: CPOREQ Mask                    */
#define MCM_CPO_CPOREQ_SHIFT                     (0U)                                                /*!< MCM_CPO: CPOREQ Position                */
#define MCM_CPO_CPOREQ(x)                        (((uint32_t)(((uint32_t)(x))<<MCM_CPO_CPOREQ_SHIFT))&MCM_CPO_CPOREQ_MASK) /*!< MCM_CPO                                 */
#define MCM_CPO_CPOACK_MASK                      (0x2U)                                              /*!< MCM_CPO: CPOACK Mask                    */
#define MCM_CPO_CPOACK_SHIFT                     (1U)                                                /*!< MCM_CPO: CPOACK Position                */
#define MCM_CPO_CPOACK(x)                        (((uint32_t)(((uint32_t)(x))<<MCM_CPO_CPOACK_SHIFT))&MCM_CPO_CPOACK_MASK) /*!< MCM_CPO                                 */
#define MCM_CPO_CPOWOI_MASK                      (0x4U)                                              /*!< MCM_CPO: CPOWOI Mask                    */
#define MCM_CPO_CPOWOI_SHIFT                     (2U)                                                /*!< MCM_CPO: CPOWOI Position                */
#define MCM_CPO_CPOWOI(x)                        (((uint32_t)(((uint32_t)(x))<<MCM_CPO_CPOWOI_SHIFT))&MCM_CPO_CPOWOI_MASK) /*!< MCM_CPO                                 */
/**
 * @} */ /* End group MCM_Register_Masks_GROUP 
 */

/* MCM - Peripheral instance base addresses */
#define MCM_BasePtr                    0xF0003000UL //!< Peripheral base address
#define MCM                            ((MCM_Type *) MCM_BasePtr) //!< Freescale base pointer
#define MCM_BASE_PTR                   (MCM) //!< Freescale style base pointer
/**
 * @} */ /* End group MCM_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup MMDVSQ_Peripheral_access_layer_GROUP MMDVSQ Peripheral Access Layer
* @brief C Struct for MMDVSQ
* @{
*/

/* ================================================================================ */
/* ================           MMDVSQ (file:MMDVSQ_MKE15Z7)         ================ */
/* ================================================================================ */

/**
 * @brief Divide and Square Root
 */
/**
* @addtogroup MMDVSQ_structs_GROUP MMDVSQ struct
* @brief Struct for MMDVSQ
* @{
*/
typedef struct {                                /*       MMDVSQ Structure                                             */
   __IO uint32_t  DEND;                         /**< 0000: Dividend Register                                            */
   __IO uint32_t  DSOR;                         /**< 0004: Divisor Register                                             */
   __IO uint32_t  CSR;                          /**< 0008: Control/Status Register                                      */
   __IO uint32_t  RES;                          /**< 000C: Result Register                                              */
   __IO uint32_t  RCND;                         /**< 0010: Radicand Register                                            */
} MMDVSQ_Type;

/**
 * @} */ /* End group MMDVSQ_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'MMDVSQ' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup MMDVSQ_Register_Masks_GROUP MMDVSQ Register Masks
* @brief Register Masks for MMDVSQ
* @{
*/
/* ------- DEND Bit Fields                          ------ */
#define MMDVSQ_DEND_DIVIDEND_MASK                (0xFFFFFFFFU)                                       /*!< MMDVSQ_DEND: DIVIDEND Mask              */
#define MMDVSQ_DEND_DIVIDEND_SHIFT               (0U)                                                /*!< MMDVSQ_DEND: DIVIDEND Position          */
#define MMDVSQ_DEND_DIVIDEND(x)                  (((uint32_t)(((uint32_t)(x))<<MMDVSQ_DEND_DIVIDEND_SHIFT))&MMDVSQ_DEND_DIVIDEND_MASK) /*!< MMDVSQ_DEND                             */
/* ------- DSOR Bit Fields                          ------ */
#define MMDVSQ_DSOR_DIVISOR_MASK                 (0xFFFFFFFFU)                                       /*!< MMDVSQ_DSOR: DIVISOR Mask               */
#define MMDVSQ_DSOR_DIVISOR_SHIFT                (0U)                                                /*!< MMDVSQ_DSOR: DIVISOR Position           */
#define MMDVSQ_DSOR_DIVISOR(x)                   (((uint32_t)(((uint32_t)(x))<<MMDVSQ_DSOR_DIVISOR_SHIFT))&MMDVSQ_DSOR_DIVISOR_MASK) /*!< MMDVSQ_DSOR                             */
/* ------- CSR Bit Fields                           ------ */
#define MMDVSQ_CSR_SRT_MASK                      (0x1U)                                              /*!< MMDVSQ_CSR: SRT Mask                    */
#define MMDVSQ_CSR_SRT_SHIFT                     (0U)                                                /*!< MMDVSQ_CSR: SRT Position                */
#define MMDVSQ_CSR_SRT(x)                        (((uint32_t)(((uint32_t)(x))<<MMDVSQ_CSR_SRT_SHIFT))&MMDVSQ_CSR_SRT_MASK) /*!< MMDVSQ_CSR                              */
#define MMDVSQ_CSR_USGN_MASK                     (0x2U)                                              /*!< MMDVSQ_CSR: USGN Mask                   */
#define MMDVSQ_CSR_USGN_SHIFT                    (1U)                                                /*!< MMDVSQ_CSR: USGN Position               */
#define MMDVSQ_CSR_USGN(x)                       (((uint32_t)(((uint32_t)(x))<<MMDVSQ_CSR_USGN_SHIFT))&MMDVSQ_CSR_USGN_MASK) /*!< MMDVSQ_CSR                              */
#define MMDVSQ_CSR_REM_MASK                      (0x4U)                                              /*!< MMDVSQ_CSR: REM Mask                    */
#define MMDVSQ_CSR_REM_SHIFT                     (2U)                                                /*!< MMDVSQ_CSR: REM Position                */
#define MMDVSQ_CSR_REM(x)                        (((uint32_t)(((uint32_t)(x))<<MMDVSQ_CSR_REM_SHIFT))&MMDVSQ_CSR_REM_MASK) /*!< MMDVSQ_CSR                              */
#define MMDVSQ_CSR_DZE_MASK                      (0x8U)                                              /*!< MMDVSQ_CSR: DZE Mask                    */
#define MMDVSQ_CSR_DZE_SHIFT                     (3U)                                                /*!< MMDVSQ_CSR: DZE Position                */
#define MMDVSQ_CSR_DZE(x)                        (((uint32_t)(((uint32_t)(x))<<MMDVSQ_CSR_DZE_SHIFT))&MMDVSQ_CSR_DZE_MASK) /*!< MMDVSQ_CSR                              */
#define MMDVSQ_CSR_DZ_MASK                       (0x10U)                                             /*!< MMDVSQ_CSR: DZ Mask                     */
#define MMDVSQ_CSR_DZ_SHIFT                      (4U)                                                /*!< MMDVSQ_CSR: DZ Position                 */
#define MMDVSQ_CSR_DZ(x)                         (((uint32_t)(((uint32_t)(x))<<MMDVSQ_CSR_DZ_SHIFT))&MMDVSQ_CSR_DZ_MASK) /*!< MMDVSQ_CSR                              */
#define MMDVSQ_CSR_DFS_MASK                      (0x20U)                                             /*!< MMDVSQ_CSR: DFS Mask                    */
#define MMDVSQ_CSR_DFS_SHIFT                     (5U)                                                /*!< MMDVSQ_CSR: DFS Position                */
#define MMDVSQ_CSR_DFS(x)                        (((uint32_t)(((uint32_t)(x))<<MMDVSQ_CSR_DFS_SHIFT))&MMDVSQ_CSR_DFS_MASK) /*!< MMDVSQ_CSR                              */
#define MMDVSQ_CSR_SQRT_MASK                     (0x20000000U)                                       /*!< MMDVSQ_CSR: SQRT Mask                   */
#define MMDVSQ_CSR_SQRT_SHIFT                    (29U)                                               /*!< MMDVSQ_CSR: SQRT Position               */
#define MMDVSQ_CSR_SQRT(x)                       (((uint32_t)(((uint32_t)(x))<<MMDVSQ_CSR_SQRT_SHIFT))&MMDVSQ_CSR_SQRT_MASK) /*!< MMDVSQ_CSR                              */
#define MMDVSQ_CSR_DIV_MASK                      (0x40000000U)                                       /*!< MMDVSQ_CSR: DIV Mask                    */
#define MMDVSQ_CSR_DIV_SHIFT                     (30U)                                               /*!< MMDVSQ_CSR: DIV Position                */
#define MMDVSQ_CSR_DIV(x)                        (((uint32_t)(((uint32_t)(x))<<MMDVSQ_CSR_DIV_SHIFT))&MMDVSQ_CSR_DIV_MASK) /*!< MMDVSQ_CSR                              */
#define MMDVSQ_CSR_BUSY_MASK                     (0x80000000U)                                       /*!< MMDVSQ_CSR: BUSY Mask                   */
#define MMDVSQ_CSR_BUSY_SHIFT                    (31U)                                               /*!< MMDVSQ_CSR: BUSY Position               */
#define MMDVSQ_CSR_BUSY(x)                       (((uint32_t)(((uint32_t)(x))<<MMDVSQ_CSR_BUSY_SHIFT))&MMDVSQ_CSR_BUSY_MASK) /*!< MMDVSQ_CSR                              */
/* ------- RES Bit Fields                           ------ */
#define MMDVSQ_RES_RESULT_MASK                   (0xFFFFFFFFU)                                       /*!< MMDVSQ_RES: RESULT Mask                 */
#define MMDVSQ_RES_RESULT_SHIFT                  (0U)                                                /*!< MMDVSQ_RES: RESULT Position             */
#define MMDVSQ_RES_RESULT(x)                     (((uint32_t)(((uint32_t)(x))<<MMDVSQ_RES_RESULT_SHIFT))&MMDVSQ_RES_RESULT_MASK) /*!< MMDVSQ_RES                              */
/* ------- RCND Bit Fields                          ------ */
#define MMDVSQ_RCND_RADICAND_MASK                (0xFFFFFFFFU)                                       /*!< MMDVSQ_RCND: RADICAND Mask              */
#define MMDVSQ_RCND_RADICAND_SHIFT               (0U)                                                /*!< MMDVSQ_RCND: RADICAND Position          */
#define MMDVSQ_RCND_RADICAND(x)                  (((uint32_t)(((uint32_t)(x))<<MMDVSQ_RCND_RADICAND_SHIFT))&MMDVSQ_RCND_RADICAND_MASK) /*!< MMDVSQ_RCND                             */
/**
 * @} */ /* End group MMDVSQ_Register_Masks_GROUP 
 */

/* MMDVSQ - Peripheral instance base addresses */
#define MMDVSQ_BasePtr                 0xF0004000UL //!< Peripheral base address
#define MMDVSQ                         ((MMDVSQ_Type *) MMDVSQ_BasePtr) //!< Freescale base pointer
#define MMDVSQ_BASE_PTR                (MMDVSQ) //!< Freescale style base pointer
/**
 * @} */ /* End group MMDVSQ_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup MTB_Peripheral_access_layer_GROUP MTB Peripheral Access Layer
* @brief C Struct for MTB
* @{
*/

/* ================================================================================ */
/* ================           MTB (file:MTB_MKE15Z7)               ================ */
/* ================================================================================ */

/**
 * @brief Micro Trace Buffer
 */
/**
* @addtogroup MTB_structs_GROUP MTB struct
* @brief Struct for MTB
* @{
*/
typedef struct {                                /*       MTB Structure                                                */
   __IO uint32_t  POSITION;                     /**< 0000: MTB Position Register                                        */
   __IO uint32_t  MASTER;                       /**< 0004: MTB Master Register                                          */
   __IO uint32_t  FLOW;                         /**< 0008: MTB Flow Register                                            */
   __I  uint32_t  BASE;                         /**< 000C: MTB Base Register                                            */
        uint8_t   RESERVED_0[3824];            
   __I  uint32_t  MODECTRL;                     /**< 0F00: Integration Mode Control Register                            */
        uint8_t   RESERVED_1[156];             
   __I  uint32_t  TAGSET;                       /**< 0FA0: Claim TAG Set Register                                       */
   __I  uint32_t  TAGCLEAR;                     /**< 0FA4: Claim TAG Clear Register                                     */
        uint8_t   RESERVED_2[8];               
   __I  uint32_t  LOCKACCESS;                   /**< 0FB0: Lock Access Register                                         */
   __I  uint32_t  LOCKSTAT;                     /**< 0FB4: Lock Status Register                                         */
   __I  uint32_t  AUTHSTAT;                     /**< 0FB8: Authentication Status Register                               */
   __I  uint32_t  DEVICEARCH;                   /**< 0FBC: Device Architecture Register                                 */
        uint8_t   RESERVED_3[8];               
   __I  uint32_t  DEVICECFG;                    /**< 0FC8: Device Configuration Register                                */
   __I  uint32_t  DEVICETYPID;                  /**< 0FCC: Device Type Identifier Register                              */
   __I  uint32_t  PERIPHID4;                    /**< 0FD0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID5;                    /**< 0FD4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID6;                    /**< 0FD8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID7;                    /**< 0FDC: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID0;                    /**< 0FE0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID1;                    /**< 0FE4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID2;                    /**< 0FE8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID3;                    /**< 0FEC: Peripheral ID Register                                       */
   __I  uint32_t  COMPID[4];                    /**< 0FF0: Component ID Register                                        */
} MTB_Type;

/**
 * @} */ /* End group MTB_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'MTB' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup MTB_Register_Masks_GROUP MTB Register Masks
* @brief Register Masks for MTB
* @{
*/
/* ------- POSITION Bit Fields                      ------ */
#define MTB_POSITION_WRAP_MASK                   (0x4U)                                              /*!< MTB_POSITION: WRAP Mask                 */
#define MTB_POSITION_WRAP_SHIFT                  (2U)                                                /*!< MTB_POSITION: WRAP Position             */
#define MTB_POSITION_WRAP(x)                     (((uint32_t)(((uint32_t)(x))<<MTB_POSITION_WRAP_SHIFT))&MTB_POSITION_WRAP_MASK) /*!< MTB_POSITION                            */
#define MTB_POSITION_POINTER_MASK                (0xFFFFFFF8U)                                       /*!< MTB_POSITION: POINTER Mask              */
#define MTB_POSITION_POINTER_SHIFT               (3U)                                                /*!< MTB_POSITION: POINTER Position          */
#define MTB_POSITION_POINTER(x)                  (((uint32_t)(((uint32_t)(x))<<MTB_POSITION_POINTER_SHIFT))&MTB_POSITION_POINTER_MASK) /*!< MTB_POSITION                            */
/* ------- MASTER Bit Fields                        ------ */
#define MTB_MASTER_MASK_MASK                     (0x1FU)                                             /*!< MTB_MASTER: MASK Mask                   */
#define MTB_MASTER_MASK_SHIFT                    (0U)                                                /*!< MTB_MASTER: MASK Position               */
#define MTB_MASTER_MASK(x)                       (((uint32_t)(((uint32_t)(x))<<MTB_MASTER_MASK_SHIFT))&MTB_MASTER_MASK_MASK) /*!< MTB_MASTER                              */
#define MTB_MASTER_TSTARTEN_MASK                 (0x20U)                                             /*!< MTB_MASTER: TSTARTEN Mask               */
#define MTB_MASTER_TSTARTEN_SHIFT                (5U)                                                /*!< MTB_MASTER: TSTARTEN Position           */
#define MTB_MASTER_TSTARTEN(x)                   (((uint32_t)(((uint32_t)(x))<<MTB_MASTER_TSTARTEN_SHIFT))&MTB_MASTER_TSTARTEN_MASK) /*!< MTB_MASTER                              */
#define MTB_MASTER_TSTOPEN_MASK                  (0x40U)                                             /*!< MTB_MASTER: TSTOPEN Mask                */
#define MTB_MASTER_TSTOPEN_SHIFT                 (6U)                                                /*!< MTB_MASTER: TSTOPEN Position            */
#define MTB_MASTER_TSTOPEN(x)                    (((uint32_t)(((uint32_t)(x))<<MTB_MASTER_TSTOPEN_SHIFT))&MTB_MASTER_TSTOPEN_MASK) /*!< MTB_MASTER                              */
#define MTB_MASTER_SFRWPRIV_MASK                 (0x80U)                                             /*!< MTB_MASTER: SFRWPRIV Mask               */
#define MTB_MASTER_SFRWPRIV_SHIFT                (7U)                                                /*!< MTB_MASTER: SFRWPRIV Position           */
#define MTB_MASTER_SFRWPRIV(x)                   (((uint32_t)(((uint32_t)(x))<<MTB_MASTER_SFRWPRIV_SHIFT))&MTB_MASTER_SFRWPRIV_MASK) /*!< MTB_MASTER                              */
#define MTB_MASTER_RAMPRIV_MASK                  (0x100U)                                            /*!< MTB_MASTER: RAMPRIV Mask                */
#define MTB_MASTER_RAMPRIV_SHIFT                 (8U)                                                /*!< MTB_MASTER: RAMPRIV Position            */
#define MTB_MASTER_RAMPRIV(x)                    (((uint32_t)(((uint32_t)(x))<<MTB_MASTER_RAMPRIV_SHIFT))&MTB_MASTER_RAMPRIV_MASK) /*!< MTB_MASTER                              */
#define MTB_MASTER_HALTREQ_MASK                  (0x200U)                                            /*!< MTB_MASTER: HALTREQ Mask                */
#define MTB_MASTER_HALTREQ_SHIFT                 (9U)                                                /*!< MTB_MASTER: HALTREQ Position            */
#define MTB_MASTER_HALTREQ(x)                    (((uint32_t)(((uint32_t)(x))<<MTB_MASTER_HALTREQ_SHIFT))&MTB_MASTER_HALTREQ_MASK) /*!< MTB_MASTER                              */
#define MTB_MASTER_EN_MASK                       (0x80000000U)                                       /*!< MTB_MASTER: EN Mask                     */
#define MTB_MASTER_EN_SHIFT                      (31U)                                               /*!< MTB_MASTER: EN Position                 */
#define MTB_MASTER_EN(x)                         (((uint32_t)(((uint32_t)(x))<<MTB_MASTER_EN_SHIFT))&MTB_MASTER_EN_MASK) /*!< MTB_MASTER                              */
/* ------- FLOW Bit Fields                          ------ */
#define MTB_FLOW_AUTOSTOP_MASK                   (0x1U)                                              /*!< MTB_FLOW: AUTOSTOP Mask                 */
#define MTB_FLOW_AUTOSTOP_SHIFT                  (0U)                                                /*!< MTB_FLOW: AUTOSTOP Position             */
#define MTB_FLOW_AUTOSTOP(x)                     (((uint32_t)(((uint32_t)(x))<<MTB_FLOW_AUTOSTOP_SHIFT))&MTB_FLOW_AUTOSTOP_MASK) /*!< MTB_FLOW                                */
#define MTB_FLOW_AUTOHALT_MASK                   (0x2U)                                              /*!< MTB_FLOW: AUTOHALT Mask                 */
#define MTB_FLOW_AUTOHALT_SHIFT                  (1U)                                                /*!< MTB_FLOW: AUTOHALT Position             */
#define MTB_FLOW_AUTOHALT(x)                     (((uint32_t)(((uint32_t)(x))<<MTB_FLOW_AUTOHALT_SHIFT))&MTB_FLOW_AUTOHALT_MASK) /*!< MTB_FLOW                                */
#define MTB_FLOW_WATERMARK_MASK                  (0xFFFFFFF8U)                                       /*!< MTB_FLOW: WATERMARK Mask                */
#define MTB_FLOW_WATERMARK_SHIFT                 (3U)                                                /*!< MTB_FLOW: WATERMARK Position            */
#define MTB_FLOW_WATERMARK(x)                    (((uint32_t)(((uint32_t)(x))<<MTB_FLOW_WATERMARK_SHIFT))&MTB_FLOW_WATERMARK_MASK) /*!< MTB_FLOW                                */
/* ------- BASE Bit Fields                          ------ */
#define MTB_BASE_BASEADDR_MASK                   (0xFFFFFFFFU)                                       /*!< MTB_BASE: BASEADDR Mask                 */
#define MTB_BASE_BASEADDR_SHIFT                  (0U)                                                /*!< MTB_BASE: BASEADDR Position             */
#define MTB_BASE_BASEADDR(x)                     (((uint32_t)(((uint32_t)(x))<<MTB_BASE_BASEADDR_SHIFT))&MTB_BASE_BASEADDR_MASK) /*!< MTB_BASE                                */
/* ------- MODECTRL Bit Fields                      ------ */
#define MTB_MODECTRL_MODECTRL_MASK               (0xFFFFFFFFU)                                       /*!< MTB_MODECTRL: MODECTRL Mask             */
#define MTB_MODECTRL_MODECTRL_SHIFT              (0U)                                                /*!< MTB_MODECTRL: MODECTRL Position         */
#define MTB_MODECTRL_MODECTRL(x)                 (((uint32_t)(((uint32_t)(x))<<MTB_MODECTRL_MODECTRL_SHIFT))&MTB_MODECTRL_MODECTRL_MASK) /*!< MTB_MODECTRL                            */
/* ------- TAGSET Bit Fields                        ------ */
#define MTB_TAGSET_TAGSET_MASK                   (0xFFFFFFFFU)                                       /*!< MTB_TAGSET: TAGSET Mask                 */
#define MTB_TAGSET_TAGSET_SHIFT                  (0U)                                                /*!< MTB_TAGSET: TAGSET Position             */
#define MTB_TAGSET_TAGSET(x)                     (((uint32_t)(((uint32_t)(x))<<MTB_TAGSET_TAGSET_SHIFT))&MTB_TAGSET_TAGSET_MASK) /*!< MTB_TAGSET                              */
/* ------- TAGCLEAR Bit Fields                      ------ */
#define MTB_TAGCLEAR_TAGCLEAR_MASK               (0xFFFFFFFFU)                                       /*!< MTB_TAGCLEAR: TAGCLEAR Mask             */
#define MTB_TAGCLEAR_TAGCLEAR_SHIFT              (0U)                                                /*!< MTB_TAGCLEAR: TAGCLEAR Position         */
#define MTB_TAGCLEAR_TAGCLEAR(x)                 (((uint32_t)(((uint32_t)(x))<<MTB_TAGCLEAR_TAGCLEAR_SHIFT))&MTB_TAGCLEAR_TAGCLEAR_MASK) /*!< MTB_TAGCLEAR                            */
/* ------- LOCKACCESS Bit Fields                    ------ */
#define MTB_LOCKACCESS_LOCKACCESS_MASK           (0xFFFFFFFFU)                                       /*!< MTB_LOCKACCESS: LOCKACCESS Mask         */
#define MTB_LOCKACCESS_LOCKACCESS_SHIFT          (0U)                                                /*!< MTB_LOCKACCESS: LOCKACCESS Position     */
#define MTB_LOCKACCESS_LOCKACCESS(x)             (((uint32_t)(((uint32_t)(x))<<MTB_LOCKACCESS_LOCKACCESS_SHIFT))&MTB_LOCKACCESS_LOCKACCESS_MASK) /*!< MTB_LOCKACCESS                          */
/* ------- LOCKSTAT Bit Fields                      ------ */
#define MTB_LOCKSTAT_LOCKSTAT_MASK               (0xFFFFFFFFU)                                       /*!< MTB_LOCKSTAT: LOCKSTAT Mask             */
#define MTB_LOCKSTAT_LOCKSTAT_SHIFT              (0U)                                                /*!< MTB_LOCKSTAT: LOCKSTAT Position         */
#define MTB_LOCKSTAT_LOCKSTAT(x)                 (((uint32_t)(((uint32_t)(x))<<MTB_LOCKSTAT_LOCKSTAT_SHIFT))&MTB_LOCKSTAT_LOCKSTAT_MASK) /*!< MTB_LOCKSTAT                            */
/* ------- AUTHSTAT Bit Fields                      ------ */
#define MTB_AUTHSTAT_BIT0_MASK                   (0x1U)                                              /*!< MTB_AUTHSTAT: BIT0 Mask                 */
#define MTB_AUTHSTAT_BIT0_SHIFT                  (0U)                                                /*!< MTB_AUTHSTAT: BIT0 Position             */
#define MTB_AUTHSTAT_BIT0(x)                     (((uint32_t)(((uint32_t)(x))<<MTB_AUTHSTAT_BIT0_SHIFT))&MTB_AUTHSTAT_BIT0_MASK) /*!< MTB_AUTHSTAT                            */
#define MTB_AUTHSTAT_BIT1_MASK                   (0x2U)                                              /*!< MTB_AUTHSTAT: BIT1 Mask                 */
#define MTB_AUTHSTAT_BIT1_SHIFT                  (1U)                                                /*!< MTB_AUTHSTAT: BIT1 Position             */
#define MTB_AUTHSTAT_BIT1(x)                     (((uint32_t)(((uint32_t)(x))<<MTB_AUTHSTAT_BIT1_SHIFT))&MTB_AUTHSTAT_BIT1_MASK) /*!< MTB_AUTHSTAT                            */
#define MTB_AUTHSTAT_BIT2_MASK                   (0x4U)                                              /*!< MTB_AUTHSTAT: BIT2 Mask                 */
#define MTB_AUTHSTAT_BIT2_SHIFT                  (2U)                                                /*!< MTB_AUTHSTAT: BIT2 Position             */
#define MTB_AUTHSTAT_BIT2(x)                     (((uint32_t)(((uint32_t)(x))<<MTB_AUTHSTAT_BIT2_SHIFT))&MTB_AUTHSTAT_BIT2_MASK) /*!< MTB_AUTHSTAT                            */
#define MTB_AUTHSTAT_BIT3_MASK                   (0x8U)                                              /*!< MTB_AUTHSTAT: BIT3 Mask                 */
#define MTB_AUTHSTAT_BIT3_SHIFT                  (3U)                                                /*!< MTB_AUTHSTAT: BIT3 Position             */
#define MTB_AUTHSTAT_BIT3(x)                     (((uint32_t)(((uint32_t)(x))<<MTB_AUTHSTAT_BIT3_SHIFT))&MTB_AUTHSTAT_BIT3_MASK) /*!< MTB_AUTHSTAT                            */
/* ------- DEVICEARCH Bit Fields                    ------ */
#define MTB_DEVICEARCH_DEVICEARCH_MASK           (0xFFFFFFFFU)                                       /*!< MTB_DEVICEARCH: DEVICEARCH Mask         */
#define MTB_DEVICEARCH_DEVICEARCH_SHIFT          (0U)                                                /*!< MTB_DEVICEARCH: DEVICEARCH Position     */
#define MTB_DEVICEARCH_DEVICEARCH(x)             (((uint32_t)(((uint32_t)(x))<<MTB_DEVICEARCH_DEVICEARCH_SHIFT))&MTB_DEVICEARCH_DEVICEARCH_MASK) /*!< MTB_DEVICEARCH                          */
/* ------- DEVICECFG Bit Fields                     ------ */
#define MTB_DEVICECFG_DEVICECFG_MASK             (0xFFFFFFFFU)                                       /*!< MTB_DEVICECFG: DEVICECFG Mask           */
#define MTB_DEVICECFG_DEVICECFG_SHIFT            (0U)                                                /*!< MTB_DEVICECFG: DEVICECFG Position       */
#define MTB_DEVICECFG_DEVICECFG(x)               (((uint32_t)(((uint32_t)(x))<<MTB_DEVICECFG_DEVICECFG_SHIFT))&MTB_DEVICECFG_DEVICECFG_MASK) /*!< MTB_DEVICECFG                           */
/* ------- DEVICETYPID Bit Fields                   ------ */
#define MTB_DEVICETYPID_DEVICETYPID_MASK         (0xFFFFFFFFU)                                       /*!< MTB_DEVICETYPID: DEVICETYPID Mask       */
#define MTB_DEVICETYPID_DEVICETYPID_SHIFT        (0U)                                                /*!< MTB_DEVICETYPID: DEVICETYPID Position   */
#define MTB_DEVICETYPID_DEVICETYPID(x)           (((uint32_t)(((uint32_t)(x))<<MTB_DEVICETYPID_DEVICETYPID_SHIFT))&MTB_DEVICETYPID_DEVICETYPID_MASK) /*!< MTB_DEVICETYPID                         */
/* ------- PERIPHID Bit Fields                      ------ */
#define MTB_PERIPHID_PERIPHID_MASK               (0xFFFFFFFFU)                                       /*!< MTB_PERIPHID: PERIPHID Mask             */
#define MTB_PERIPHID_PERIPHID_SHIFT              (0U)                                                /*!< MTB_PERIPHID: PERIPHID Position         */
#define MTB_PERIPHID_PERIPHID(x)                 (((uint32_t)(((uint32_t)(x))<<MTB_PERIPHID_PERIPHID_SHIFT))&MTB_PERIPHID_PERIPHID_MASK) /*!< MTB_PERIPHID                            */
/* ------- COMPID Bit Fields                        ------ */
#define MTB_COMPID_COMPID_MASK                   (0xFFFFFFFFU)                                       /*!< MTB_COMPID: COMPID Mask                 */
#define MTB_COMPID_COMPID_SHIFT                  (0U)                                                /*!< MTB_COMPID: COMPID Position             */
#define MTB_COMPID_COMPID(x)                     (((uint32_t)(((uint32_t)(x))<<MTB_COMPID_COMPID_SHIFT))&MTB_COMPID_COMPID_MASK) /*!< MTB_COMPID                              */
/**
 * @} */ /* End group MTB_Register_Masks_GROUP 
 */

/* MTB - Peripheral instance base addresses */
#define MTB_BasePtr                    0xF0000000UL //!< Peripheral base address
#define MTB                            ((MTB_Type *) MTB_BasePtr) //!< Freescale base pointer
#define MTB_BASE_PTR                   (MTB) //!< Freescale style base pointer
/**
 * @} */ /* End group MTB_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup MTBDWT_Peripheral_access_layer_GROUP MTBDWT Peripheral Access Layer
* @brief C Struct for MTBDWT
* @{
*/

/* ================================================================================ */
/* ================           MTBDWT (file:MTBDWT_MKE15Z7)         ================ */
/* ================================================================================ */

/**
 * @brief MTB data watchpoint and trace
 */
/**
* @addtogroup MTBDWT_structs_GROUP MTBDWT struct
* @brief Struct for MTBDWT
* @{
*/
typedef struct {                                /*       MTBDWT Structure                                             */
   __I  uint32_t  CTRL;                         /**< 0000: MTB DWT Control Register                                     */
        uint8_t   RESERVED_0[28];              
   struct {
      __IO uint32_t  COMP;                      /**< 0020: MTB_DWT Comparator Register                                  */
      __IO uint32_t  MASK;                      /**< 0024: MTB_DWT Comparator Mask Register                             */
      __IO uint32_t  FCT;                       /**< 0028: MTB_DWT Comparator Function Register 0                       */
           uint8_t   RESERVED_1[4];            
   } COMPARATOR[2];                             /**< 0020: (cluster: size=0x0020, 32)                                   */
        uint8_t   RESERVED_2[448];             
   __IO uint32_t  TBCTRL;                       /**< 0200: MTB_DWT Trace Buffer Control Register                        */
        uint8_t   RESERVED_3[3524];            
   __I  uint32_t  DEVICECFG;                    /**< 0FC8: Device Configuration Register                                */
   __I  uint32_t  DEVICETYPID;                  /**< 0FCC: Device Type Identifier Register                              */
   __I  uint32_t  PERIPHID4;                    /**< 0FD0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID5;                    /**< 0FD4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID6;                    /**< 0FD8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID7;                    /**< 0FDC: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID0;                    /**< 0FE0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID1;                    /**< 0FE4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID2;                    /**< 0FE8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID3;                    /**< 0FEC: Peripheral ID Register                                       */
   __I  uint32_t  COMPID[4];                    /**< 0FF0: Component ID Register                                        */
} MTBDWT_Type;

/**
 * @} */ /* End group MTBDWT_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'MTBDWT' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup MTBDWT_Register_Masks_GROUP MTBDWT Register Masks
* @brief Register Masks for MTBDWT
* @{
*/
/* ------- CTRL Bit Fields                          ------ */
#define MTBDWT_CTRL_DWTCFGCTRL_MASK              (0xFFFFFFFU)                                        /*!< MTBDWT_CTRL: DWTCFGCTRL Mask            */
#define MTBDWT_CTRL_DWTCFGCTRL_SHIFT             (0U)                                                /*!< MTBDWT_CTRL: DWTCFGCTRL Position        */
#define MTBDWT_CTRL_DWTCFGCTRL(x)                (((uint32_t)(((uint32_t)(x))<<MTBDWT_CTRL_DWTCFGCTRL_SHIFT))&MTBDWT_CTRL_DWTCFGCTRL_MASK) /*!< MTBDWT_CTRL                             */
#define MTBDWT_CTRL_NUMCMP_MASK                  (0xF0000000U)                                       /*!< MTBDWT_CTRL: NUMCMP Mask                */
#define MTBDWT_CTRL_NUMCMP_SHIFT                 (28U)                                               /*!< MTBDWT_CTRL: NUMCMP Position            */
#define MTBDWT_CTRL_NUMCMP(x)                    (((uint32_t)(((uint32_t)(x))<<MTBDWT_CTRL_NUMCMP_SHIFT))&MTBDWT_CTRL_NUMCMP_MASK) /*!< MTBDWT_CTRL                             */
/* ------- COMP Bit Fields                          ------ */
#define MTBDWT_COMP_COMP_MASK                    (0xFFFFFFFFU)                                       /*!< MTBDWT_COMP: COMP Mask                  */
#define MTBDWT_COMP_COMP_SHIFT                   (0U)                                                /*!< MTBDWT_COMP: COMP Position              */
#define MTBDWT_COMP_COMP(x)                      (((uint32_t)(((uint32_t)(x))<<MTBDWT_COMP_COMP_SHIFT))&MTBDWT_COMP_COMP_MASK) /*!< MTBDWT_COMP                             */
/* ------- MASK Bit Fields                          ------ */
#define MTBDWT_MASK_MASK_MASK                    (0x1FU)                                             /*!< MTBDWT_MASK: MASK Mask                  */
#define MTBDWT_MASK_MASK_SHIFT                   (0U)                                                /*!< MTBDWT_MASK: MASK Position              */
#define MTBDWT_MASK_MASK(x)                      (((uint32_t)(((uint32_t)(x))<<MTBDWT_MASK_MASK_SHIFT))&MTBDWT_MASK_MASK_MASK) /*!< MTBDWT_MASK                             */
/* ------- FCT Bit Fields                           ------ */
#define MTBDWT_FCT_FUNCTION_MASK                 (0xFU)                                              /*!< MTBDWT_FCT: FUNCTION Mask               */
#define MTBDWT_FCT_FUNCTION_SHIFT                (0U)                                                /*!< MTBDWT_FCT: FUNCTION Position           */
#define MTBDWT_FCT_FUNCTION(x)                   (((uint32_t)(((uint32_t)(x))<<MTBDWT_FCT_FUNCTION_SHIFT))&MTBDWT_FCT_FUNCTION_MASK) /*!< MTBDWT_FCT                              */
#define MTBDWT_FCT_DATAVMATCH_MASK               (0x100U)                                            /*!< MTBDWT_FCT: DATAVMATCH Mask             */
#define MTBDWT_FCT_DATAVMATCH_SHIFT              (8U)                                                /*!< MTBDWT_FCT: DATAVMATCH Position         */
#define MTBDWT_FCT_DATAVMATCH(x)                 (((uint32_t)(((uint32_t)(x))<<MTBDWT_FCT_DATAVMATCH_SHIFT))&MTBDWT_FCT_DATAVMATCH_MASK) /*!< MTBDWT_FCT                              */
#define MTBDWT_FCT_DATAVSIZE_MASK                (0xC00U)                                            /*!< MTBDWT_FCT: DATAVSIZE Mask              */
#define MTBDWT_FCT_DATAVSIZE_SHIFT               (10U)                                               /*!< MTBDWT_FCT: DATAVSIZE Position          */
#define MTBDWT_FCT_DATAVSIZE(x)                  (((uint32_t)(((uint32_t)(x))<<MTBDWT_FCT_DATAVSIZE_SHIFT))&MTBDWT_FCT_DATAVSIZE_MASK) /*!< MTBDWT_FCT                              */
#define MTBDWT_FCT_DATAVADDR0_MASK               (0xF000U)                                           /*!< MTBDWT_FCT: DATAVADDR0 Mask             */
#define MTBDWT_FCT_DATAVADDR0_SHIFT              (12U)                                               /*!< MTBDWT_FCT: DATAVADDR0 Position         */
#define MTBDWT_FCT_DATAVADDR0(x)                 (((uint32_t)(((uint32_t)(x))<<MTBDWT_FCT_DATAVADDR0_SHIFT))&MTBDWT_FCT_DATAVADDR0_MASK) /*!< MTBDWT_FCT                              */
#define MTBDWT_FCT_MATCHED_MASK                  (0x1000000U)                                        /*!< MTBDWT_FCT: MATCHED Mask                */
#define MTBDWT_FCT_MATCHED_SHIFT                 (24U)                                               /*!< MTBDWT_FCT: MATCHED Position            */
#define MTBDWT_FCT_MATCHED(x)                    (((uint32_t)(((uint32_t)(x))<<MTBDWT_FCT_MATCHED_SHIFT))&MTBDWT_FCT_MATCHED_MASK) /*!< MTBDWT_FCT                              */
/* ------- TBCTRL Bit Fields                        ------ */
#define MTBDWT_TBCTRL_ACOMP0_MASK                (0x1U)                                              /*!< MTBDWT_TBCTRL: ACOMP0 Mask              */
#define MTBDWT_TBCTRL_ACOMP0_SHIFT               (0U)                                                /*!< MTBDWT_TBCTRL: ACOMP0 Position          */
#define MTBDWT_TBCTRL_ACOMP0(x)                  (((uint32_t)(((uint32_t)(x))<<MTBDWT_TBCTRL_ACOMP0_SHIFT))&MTBDWT_TBCTRL_ACOMP0_MASK) /*!< MTBDWT_TBCTRL                           */
#define MTBDWT_TBCTRL_ACOMP1_MASK                (0x2U)                                              /*!< MTBDWT_TBCTRL: ACOMP1 Mask              */
#define MTBDWT_TBCTRL_ACOMP1_SHIFT               (1U)                                                /*!< MTBDWT_TBCTRL: ACOMP1 Position          */
#define MTBDWT_TBCTRL_ACOMP1(x)                  (((uint32_t)(((uint32_t)(x))<<MTBDWT_TBCTRL_ACOMP1_SHIFT))&MTBDWT_TBCTRL_ACOMP1_MASK) /*!< MTBDWT_TBCTRL                           */
#define MTBDWT_TBCTRL_NUMCOMP_MASK               (0xF0000000U)                                       /*!< MTBDWT_TBCTRL: NUMCOMP Mask             */
#define MTBDWT_TBCTRL_NUMCOMP_SHIFT              (28U)                                               /*!< MTBDWT_TBCTRL: NUMCOMP Position         */
#define MTBDWT_TBCTRL_NUMCOMP(x)                 (((uint32_t)(((uint32_t)(x))<<MTBDWT_TBCTRL_NUMCOMP_SHIFT))&MTBDWT_TBCTRL_NUMCOMP_MASK) /*!< MTBDWT_TBCTRL                           */
/* ------- DEVICECFG Bit Fields                     ------ */
#define MTBDWT_DEVICECFG_DEVICECFG_MASK          (0xFFFFFFFFU)                                       /*!< MTBDWT_DEVICECFG: DEVICECFG Mask        */
#define MTBDWT_DEVICECFG_DEVICECFG_SHIFT         (0U)                                                /*!< MTBDWT_DEVICECFG: DEVICECFG Position    */
#define MTBDWT_DEVICECFG_DEVICECFG(x)            (((uint32_t)(((uint32_t)(x))<<MTBDWT_DEVICECFG_DEVICECFG_SHIFT))&MTBDWT_DEVICECFG_DEVICECFG_MASK) /*!< MTBDWT_DEVICECFG                        */
/* ------- DEVICETYPID Bit Fields                   ------ */
#define MTBDWT_DEVICETYPID_DEVICETYPID_MASK      (0xFFFFFFFFU)                                       /*!< MTBDWT_DEVICETYPID: DEVICETYPID Mask    */
#define MTBDWT_DEVICETYPID_DEVICETYPID_SHIFT     (0U)                                                /*!< MTBDWT_DEVICETYPID: DEVICETYPID Position*/
#define MTBDWT_DEVICETYPID_DEVICETYPID(x)        (((uint32_t)(((uint32_t)(x))<<MTBDWT_DEVICETYPID_DEVICETYPID_SHIFT))&MTBDWT_DEVICETYPID_DEVICETYPID_MASK) /*!< MTBDWT_DEVICETYPID                      */
/* ------- PERIPHID Bit Fields                      ------ */
#define MTBDWT_PERIPHID_PERIPHID_MASK            (0xFFFFFFFFU)                                       /*!< MTBDWT_PERIPHID: PERIPHID Mask          */
#define MTBDWT_PERIPHID_PERIPHID_SHIFT           (0U)                                                /*!< MTBDWT_PERIPHID: PERIPHID Position      */
#define MTBDWT_PERIPHID_PERIPHID(x)              (((uint32_t)(((uint32_t)(x))<<MTBDWT_PERIPHID_PERIPHID_SHIFT))&MTBDWT_PERIPHID_PERIPHID_MASK) /*!< MTBDWT_PERIPHID                         */
/* ------- COMPID Bit Fields                        ------ */
#define MTBDWT_COMPID_COMPID_MASK                (0xFFFFFFFFU)                                       /*!< MTBDWT_COMPID: COMPID Mask              */
#define MTBDWT_COMPID_COMPID_SHIFT               (0U)                                                /*!< MTBDWT_COMPID: COMPID Position          */
#define MTBDWT_COMPID_COMPID(x)                  (((uint32_t)(((uint32_t)(x))<<MTBDWT_COMPID_COMPID_SHIFT))&MTBDWT_COMPID_COMPID_MASK) /*!< MTBDWT_COMPID                           */
/**
 * @} */ /* End group MTBDWT_Register_Masks_GROUP 
 */

/* MTBDWT - Peripheral instance base addresses */
#define MTBDWT_BasePtr                 0xF0001000UL //!< Peripheral base address
#define MTBDWT                         ((MTBDWT_Type *) MTBDWT_BasePtr) //!< Freescale base pointer
#define MTBDWT_BASE_PTR                (MTBDWT) //!< Freescale style base pointer
/**
 * @} */ /* End group MTBDWT_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup NV_Peripheral_access_layer_GROUP NV Peripheral Access Layer
* @brief C Struct for NV
* @{
*/

/* ================================================================================ */
/* ================           NV (file:NV_MKE15Z7)                 ================ */
/* ================================================================================ */

/**
 * @brief Flash configuration field
 */
/**
* @addtogroup NV_structs_GROUP NV struct
* @brief Struct for NV
* @{
*/
typedef struct {                                /*       NV Structure                                                 */
   __I  uint8_t   BACKKEY3;                     /**< 0000: Backdoor Comparison Key 3                                    */
   __I  uint8_t   BACKKEY2;                     /**< 0001: Backdoor Comparison Key 2                                    */
   __I  uint8_t   BACKKEY1;                     /**< 0002: Backdoor Comparison Key 1                                    */
   __I  uint8_t   BACKKEY0;                     /**< 0003: Backdoor Comparison Key 0                                    */
   __I  uint8_t   BACKKEY7;                     /**< 0004: Backdoor Comparison Key 7                                    */
   __I  uint8_t   BACKKEY6;                     /**< 0005: Backdoor Comparison Key 6                                    */
   __I  uint8_t   BACKKEY5;                     /**< 0006: Backdoor Comparison Key 5                                    */
   __I  uint8_t   BACKKEY4;                     /**< 0007: Backdoor Comparison Key 4                                    */
   __I  uint8_t   FPROT3;                       /**< 0008: Non-volatile P-Flash Protection 1 - Low Register             */
   __I  uint8_t   FPROT2;                       /**< 0009: Non-volatile P-Flash Protection 1 - High Register            */
   __I  uint8_t   FPROT1;                       /**< 000A: Non-volatile P-Flash Protection 0 - Low Register             */
   __I  uint8_t   FPROT0;                       /**< 000B: Non-volatile P-Flash Protection 0 - High Register            */
   __I  uint8_t   FSEC;                         /**< 000C: Non-volatile Flash Security Register                         */
   __I  uint8_t   FOPT;                         /**< 000D: Non-volatile Flash Option Register                           */
   __I  uint8_t   FEPROT;                       /**< 000E: Non-volatile EERAM Protection Register                       */
   __I  uint8_t   FDPROT;                       /**< 000F: Non-volatile D-Flash Protection Register                     */
} NV_Type;

/**
 * @} */ /* End group NV_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'NV' Position & Mask macros                          ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup NV_Register_Masks_GROUP NV Register Masks
* @brief Register Masks for NV
* @{
*/
/* ------- BACKKEY Bit Fields                       ------ */
#define NV_BACKKEY_KEY_MASK                      (0xFFU)                                             /*!< NV_BACKKEY: KEY Mask                    */
#define NV_BACKKEY_KEY_SHIFT                     (0U)                                                /*!< NV_BACKKEY: KEY Position                */
#define NV_BACKKEY_KEY(x)                        (((uint8_t)(((uint8_t)(x))<<NV_BACKKEY_KEY_SHIFT))&NV_BACKKEY_KEY_MASK) /*!< NV_BACKKEY                              */
/* ------- FPROT3 Bit Fields                        ------ */
#define NV_FPROT3_PROT_MASK                      (0xFFU)                                             /*!< NV_FPROT3: PROT Mask                    */
#define NV_FPROT3_PROT_SHIFT                     (0U)                                                /*!< NV_FPROT3: PROT Position                */
#define NV_FPROT3_PROT(x)                        (((uint8_t)(((uint8_t)(x))<<NV_FPROT3_PROT_SHIFT))&NV_FPROT3_PROT_MASK) /*!< NV_FPROT3                               */
/* ------- FPROT2 Bit Fields                        ------ */
#define NV_FPROT2_PROT_MASK                      (0xFFU)                                             /*!< NV_FPROT2: PROT Mask                    */
#define NV_FPROT2_PROT_SHIFT                     (0U)                                                /*!< NV_FPROT2: PROT Position                */
#define NV_FPROT2_PROT(x)                        (((uint8_t)(((uint8_t)(x))<<NV_FPROT2_PROT_SHIFT))&NV_FPROT2_PROT_MASK) /*!< NV_FPROT2                               */
/* ------- FPROT1 Bit Fields                        ------ */
#define NV_FPROT1_PROT_MASK                      (0xFFU)                                             /*!< NV_FPROT1: PROT Mask                    */
#define NV_FPROT1_PROT_SHIFT                     (0U)                                                /*!< NV_FPROT1: PROT Position                */
#define NV_FPROT1_PROT(x)                        (((uint8_t)(((uint8_t)(x))<<NV_FPROT1_PROT_SHIFT))&NV_FPROT1_PROT_MASK) /*!< NV_FPROT1                               */
/* ------- FPROT0 Bit Fields                        ------ */
#define NV_FPROT0_PROT_MASK                      (0xFFU)                                             /*!< NV_FPROT0: PROT Mask                    */
#define NV_FPROT0_PROT_SHIFT                     (0U)                                                /*!< NV_FPROT0: PROT Position                */
#define NV_FPROT0_PROT(x)                        (((uint8_t)(((uint8_t)(x))<<NV_FPROT0_PROT_SHIFT))&NV_FPROT0_PROT_MASK) /*!< NV_FPROT0                               */
/* ------- FSEC Bit Fields                          ------ */
#define NV_FSEC_SEC_MASK                         (0x3U)                                              /*!< NV_FSEC: SEC Mask                       */
#define NV_FSEC_SEC_SHIFT                        (0U)                                                /*!< NV_FSEC: SEC Position                   */
#define NV_FSEC_SEC(x)                           (((uint8_t)(((uint8_t)(x))<<NV_FSEC_SEC_SHIFT))&NV_FSEC_SEC_MASK) /*!< NV_FSEC                                 */
#define NV_FSEC_FSLACC_MASK                      (0xCU)                                              /*!< NV_FSEC: FSLACC Mask                    */
#define NV_FSEC_FSLACC_SHIFT                     (2U)                                                /*!< NV_FSEC: FSLACC Position                */
#define NV_FSEC_FSLACC(x)                        (((uint8_t)(((uint8_t)(x))<<NV_FSEC_FSLACC_SHIFT))&NV_FSEC_FSLACC_MASK) /*!< NV_FSEC                                 */
#define NV_FSEC_MEEN_MASK                        (0x30U)                                             /*!< NV_FSEC: MEEN Mask                      */
#define NV_FSEC_MEEN_SHIFT                       (4U)                                                /*!< NV_FSEC: MEEN Position                  */
#define NV_FSEC_MEEN(x)                          (((uint8_t)(((uint8_t)(x))<<NV_FSEC_MEEN_SHIFT))&NV_FSEC_MEEN_MASK) /*!< NV_FSEC                                 */
#define NV_FSEC_KEYEN_MASK                       (0xC0U)                                             /*!< NV_FSEC: KEYEN Mask                     */
#define NV_FSEC_KEYEN_SHIFT                      (6U)                                                /*!< NV_FSEC: KEYEN Position                 */
#define NV_FSEC_KEYEN(x)                         (((uint8_t)(((uint8_t)(x))<<NV_FSEC_KEYEN_SHIFT))&NV_FSEC_KEYEN_MASK) /*!< NV_FSEC                                 */
/* ------- FOPT Bit Fields                          ------ */
#define NV_FOPT_LPBOOT_MASK                      (0x1U)                                              /*!< NV_FOPT: LPBOOT Mask                    */
#define NV_FOPT_LPBOOT_SHIFT                     (0U)                                                /*!< NV_FOPT: LPBOOT Position                */
#define NV_FOPT_LPBOOT(x)                        (((uint8_t)(((uint8_t)(x))<<NV_FOPT_LPBOOT_SHIFT))&NV_FOPT_LPBOOT_MASK) /*!< NV_FOPT                                 */
#define NV_FOPT_BOOTPIN_OPT_MASK                 (0x2U)                                              /*!< NV_FOPT: BOOTPIN_OPT Mask               */
#define NV_FOPT_BOOTPIN_OPT_SHIFT                (1U)                                                /*!< NV_FOPT: BOOTPIN_OPT Position           */
#define NV_FOPT_BOOTPIN_OPT(x)                   (((uint8_t)(((uint8_t)(x))<<NV_FOPT_BOOTPIN_OPT_SHIFT))&NV_FOPT_BOOTPIN_OPT_MASK) /*!< NV_FOPT                                 */
#define NV_FOPT_NMI_DIS_MASK                     (0x4U)                                              /*!< NV_FOPT: NMI_DIS Mask                   */
#define NV_FOPT_NMI_DIS_SHIFT                    (2U)                                                /*!< NV_FOPT: NMI_DIS Position               */
#define NV_FOPT_NMI_DIS(x)                       (((uint8_t)(((uint8_t)(x))<<NV_FOPT_NMI_DIS_SHIFT))&NV_FOPT_NMI_DIS_MASK) /*!< NV_FOPT                                 */
#define NV_FOPT_RESET_PIN_CFG_MASK               (0x8U)                                              /*!< NV_FOPT: RESET_PIN_CFG Mask             */
#define NV_FOPT_RESET_PIN_CFG_SHIFT              (3U)                                                /*!< NV_FOPT: RESET_PIN_CFG Position         */
#define NV_FOPT_RESET_PIN_CFG(x)                 (((uint8_t)(((uint8_t)(x))<<NV_FOPT_RESET_PIN_CFG_SHIFT))&NV_FOPT_RESET_PIN_CFG_MASK) /*!< NV_FOPT                                 */
#define NV_FOPT_BOOTSRC_SEL_MASK                 (0xC0U)                                             /*!< NV_FOPT: BOOTSRC_SEL Mask               */
#define NV_FOPT_BOOTSRC_SEL_SHIFT                (6U)                                                /*!< NV_FOPT: BOOTSRC_SEL Position           */
#define NV_FOPT_BOOTSRC_SEL(x)                   (((uint8_t)(((uint8_t)(x))<<NV_FOPT_BOOTSRC_SEL_SHIFT))&NV_FOPT_BOOTSRC_SEL_MASK) /*!< NV_FOPT                                 */
/* ------- FEPROT Bit Fields                        ------ */
#define NV_FEPROT_EPROT_MASK                     (0xFFU)                                             /*!< NV_FEPROT: EPROT Mask                   */
#define NV_FEPROT_EPROT_SHIFT                    (0U)                                                /*!< NV_FEPROT: EPROT Position               */
#define NV_FEPROT_EPROT(x)                       (((uint8_t)(((uint8_t)(x))<<NV_FEPROT_EPROT_SHIFT))&NV_FEPROT_EPROT_MASK) /*!< NV_FEPROT                               */
/* ------- FDPROT Bit Fields                        ------ */
#define NV_FDPROT_DPROT_MASK                     (0xFFU)                                             /*!< NV_FDPROT: DPROT Mask                   */
#define NV_FDPROT_DPROT_SHIFT                    (0U)                                                /*!< NV_FDPROT: DPROT Position               */
#define NV_FDPROT_DPROT(x)                       (((uint8_t)(((uint8_t)(x))<<NV_FDPROT_DPROT_SHIFT))&NV_FDPROT_DPROT_MASK) /*!< NV_FDPROT                               */
/**
 * @} */ /* End group NV_Register_Masks_GROUP 
 */

/* NV - Peripheral instance base addresses */
#define NV_BasePtr                     0x00000400UL //!< Peripheral base address
#define NV                             ((NV_Type *) NV_BasePtr) //!< Freescale base pointer
#define NV_BASE_PTR                    (NV) //!< Freescale style base pointer
/**
 * @} */ /* End group NV_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup OSC_Peripheral_access_layer_GROUP OSC Peripheral Access Layer
* @brief C Struct for OSC
* @{
*/

/* ================================================================================ */
/* ================           OSC32 (file:OSC32_MKE16F16)          ================ */
/* ================================================================================ */

/**
 * @brief RTC Oscillator
 */
/**
* @addtogroup OSC_structs_GROUP OSC struct
* @brief Struct for OSC
* @{
*/
typedef struct {                                /*       OSC32 Structure                                              */
   __IO uint8_t   CR;                           /**< 0000: RTC Oscillator Control Register                              */
} OSC32_Type;

/**
 * @} */ /* End group OSC_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'OSC32' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup OSC_Register_Masks_GROUP OSC Register Masks
* @brief Register Masks for OSC
* @{
*/
/* ------- CR Bit Fields                            ------ */
#define OSC32_CR_ROSCEREFS_MASK                  (0x10U)                                             /*!< OSC32_CR: ROSCEREFS Mask                */
#define OSC32_CR_ROSCEREFS_SHIFT                 (4U)                                                /*!< OSC32_CR: ROSCEREFS Position            */
#define OSC32_CR_ROSCEREFS(x)                    (((uint8_t)(((uint8_t)(x))<<OSC32_CR_ROSCEREFS_SHIFT))&OSC32_CR_ROSCEREFS_MASK) /*!< OSC32_CR                                */
#define OSC32_CR_ROSCSTB_MASK                    (0x20U)                                             /*!< OSC32_CR: ROSCSTB Mask                  */
#define OSC32_CR_ROSCSTB_SHIFT                   (5U)                                                /*!< OSC32_CR: ROSCSTB Position              */
#define OSC32_CR_ROSCSTB(x)                      (((uint8_t)(((uint8_t)(x))<<OSC32_CR_ROSCSTB_SHIFT))&OSC32_CR_ROSCSTB_MASK) /*!< OSC32_CR                                */
#define OSC32_CR_ROSCSTPEN_MASK                  (0x40U)                                             /*!< OSC32_CR: ROSCSTPEN Mask                */
#define OSC32_CR_ROSCSTPEN_SHIFT                 (6U)                                                /*!< OSC32_CR: ROSCSTPEN Position            */
#define OSC32_CR_ROSCSTPEN(x)                    (((uint8_t)(((uint8_t)(x))<<OSC32_CR_ROSCSTPEN_SHIFT))&OSC32_CR_ROSCSTPEN_MASK) /*!< OSC32_CR                                */
#define OSC32_CR_ROSCEN_MASK                     (0x80U)                                             /*!< OSC32_CR: ROSCEN Mask                   */
#define OSC32_CR_ROSCEN_SHIFT                    (7U)                                                /*!< OSC32_CR: ROSCEN Position               */
#define OSC32_CR_ROSCEN(x)                       (((uint8_t)(((uint8_t)(x))<<OSC32_CR_ROSCEN_SHIFT))&OSC32_CR_ROSCEN_MASK) /*!< OSC32_CR                                */
/**
 * @} */ /* End group OSC_Register_Masks_GROUP 
 */

/* OSC32 - Peripheral instance base addresses */
#define OSC32_BasePtr                  0x40060000UL //!< Peripheral base address
#define OSC32                          ((OSC32_Type *) OSC32_BasePtr) //!< Freescale base pointer
#define OSC32_BASE_PTR                 (OSC32) //!< Freescale style base pointer
/**
 * @} */ /* End group OSC_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup PCC_Peripheral_access_layer_GROUP PCC Peripheral Access Layer
* @brief C Struct for PCC
* @{
*/

/* ================================================================================ */
/* ================           PCC (file:PCC_MKE15Z7)               ================ */
/* ================================================================================ */

/**
 * @brief PCC
 */
/**
* @addtogroup PCC_structs_GROUP PCC struct
* @brief Struct for PCC
* @{
*/
typedef struct {                                /*       PCC Structure                                                */
        uint8_t   RESERVED_0[32];              
   __IO uint32_t  PCC_DMA0;                     /**< 0020: PCC Register                                                 */
        uint8_t   RESERVED_1[92];              
   __IO uint32_t  PCC_FLASH;                    /**< 0080: PCC Register                                                 */
   __IO uint32_t  PCC_DMAMUX0;                  /**< 0084: PCC Register                                                 */
        uint8_t   RESERVED_2[20];              
   __IO uint32_t  PCC_ADC1;                     /**< 009C: PCC Register                                                 */
        uint8_t   RESERVED_3[16];              
   __IO uint32_t  PCC_LPSPI[2];                 /**< 00B0: PCC Register                                                 */
        uint8_t   RESERVED_4[16];              
   __IO uint32_t  PCC_CRC;                      /**< 00C8: PCC Register                                                 */
        uint8_t   RESERVED_5[12];              
   __IO uint32_t  PCC_PDB0;                     /**< 00D8: PCC Register                                                 */
   __IO uint32_t  PCC_LPIT0;                    /**< 00DC: PCC Register                                                 */
   __IO uint32_t  PCC_FLEXTMR[3];               /**< 00E0: PCC Register                                                 */
   __IO uint32_t  PCC_ADC0;                     /**< 00EC: PCC Register                                                 */
        uint8_t   RESERVED_6[4];               
   __IO uint32_t  PCC_RTC;                      /**< 00F4: PCC Register                                                 */
        uint8_t   RESERVED_7[8];               
   __IO uint32_t  PCC_LPTMR0;                   /**< 0100: PCC Register                                                 */
        uint8_t   RESERVED_8[16];              
   __IO uint32_t  PCC_TSI;                      /**< 0114: PCC Register                                                 */
        uint8_t   RESERVED_9[12];              
   __IO uint32_t  PCC_PORTA;                    /**< 0124: PCC Register                                                 */
   __IO uint32_t  PCC_PORTB;                    /**< 0128: PCC Register                                                 */
   __IO uint32_t  PCC_PORTC;                    /**< 012C: PCC Register                                                 */
   __IO uint32_t  PCC_PORTD;                    /**< 0130: PCC Register                                                 */
   __IO uint32_t  PCC_PORTE;                    /**< 0134: PCC Register                                                 */
        uint8_t   RESERVED_10[32];             
   __IO uint32_t  PCC_PWT;                      /**< 0158: PCC Register                                                 */
        uint8_t   RESERVED_11[12];             
   __IO uint32_t  PCC_FLEXIO;                   /**< 0168: PCC Register                                                 */
        uint8_t   RESERVED_12[20];             
   __IO uint32_t  PCC_OSC32;                    /**< 0180: PCC Register                                                 */
   __IO uint32_t  PCC_EWM;                      /**< 0184: PCC Register                                                 */
        uint8_t   RESERVED_13[16];             
   __IO uint32_t  PCC_LPI2C[2];                 /**< 0198: PCC Register                                                 */
        uint8_t   RESERVED_14[8];              
   __IO uint32_t  PCC_LPUART[3];                /**< 01A8: PCC Register                                                 */
        uint8_t   RESERVED_15[24];             
   __IO uint32_t  PCC_CMP[2];                   /**< 01CC: PCC Register                                                 */
} PCC_Type;

/**
 * @} */ /* End group PCC_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'PCC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup PCC_Register_Masks_GROUP PCC Register Masks
* @brief Register Masks for PCC
* @{
*/
/* ------- PCC_DMA0 Bit Fields                      ------ */
#define PCC_PCC_DMA0_INUSE_MASK                  (0x20000000U)                                       /*!< PCC_PCC_DMA0: INUSE Mask                */
#define PCC_PCC_DMA0_INUSE_SHIFT                 (29U)                                               /*!< PCC_PCC_DMA0: INUSE Position            */
#define PCC_PCC_DMA0_INUSE(x)                    (((uint32_t)(((uint32_t)(x))<<PCC_PCC_DMA0_INUSE_SHIFT))&PCC_PCC_DMA0_INUSE_MASK) /*!< PCC_PCC_DMA0                            */
#define PCC_PCC_DMA0_CGC_MASK                    (0x40000000U)                                       /*!< PCC_PCC_DMA0: CGC Mask                  */
#define PCC_PCC_DMA0_CGC_SHIFT                   (30U)                                               /*!< PCC_PCC_DMA0: CGC Position              */
#define PCC_PCC_DMA0_CGC(x)                      (((uint32_t)(((uint32_t)(x))<<PCC_PCC_DMA0_CGC_SHIFT))&PCC_PCC_DMA0_CGC_MASK) /*!< PCC_PCC_DMA0                            */
#define PCC_PCC_DMA0_PR_MASK                     (0x80000000U)                                       /*!< PCC_PCC_DMA0: PR Mask                   */
#define PCC_PCC_DMA0_PR_SHIFT                    (31U)                                               /*!< PCC_PCC_DMA0: PR Position               */
#define PCC_PCC_DMA0_PR(x)                       (((uint32_t)(((uint32_t)(x))<<PCC_PCC_DMA0_PR_SHIFT))&PCC_PCC_DMA0_PR_MASK) /*!< PCC_PCC_DMA0                            */
/* ------- PCC_FLASH Bit Fields                     ------ */
#define PCC_PCC_FLASH_INUSE_MASK                 (0x20000000U)                                       /*!< PCC_PCC_FLASH: INUSE Mask               */
#define PCC_PCC_FLASH_INUSE_SHIFT                (29U)                                               /*!< PCC_PCC_FLASH: INUSE Position           */
#define PCC_PCC_FLASH_INUSE(x)                   (((uint32_t)(((uint32_t)(x))<<PCC_PCC_FLASH_INUSE_SHIFT))&PCC_PCC_FLASH_INUSE_MASK) /*!< PCC_PCC_FLASH                           */
#define PCC_PCC_FLASH_CGC_MASK                   (0x40000000U)                                       /*!< PCC_PCC_FLASH: CGC Mask                 */
#define PCC_PCC_FLASH_CGC_SHIFT                  (30U)                                               /*!< PCC_PCC_FLASH: CGC Position             */
#define PCC_PCC_FLASH_CGC(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_FLASH_CGC_SHIFT))&PCC_PCC_FLASH_CGC_MASK) /*!< PCC_PCC_FLASH                           */
#define PCC_PCC_FLASH_PR_MASK                    (0x80000000U)                                       /*!< PCC_PCC_FLASH: PR Mask                  */
#define PCC_PCC_FLASH_PR_SHIFT                   (31U)                                               /*!< PCC_PCC_FLASH: PR Position              */
#define PCC_PCC_FLASH_PR(x)                      (((uint32_t)(((uint32_t)(x))<<PCC_PCC_FLASH_PR_SHIFT))&PCC_PCC_FLASH_PR_MASK) /*!< PCC_PCC_FLASH                           */
/* ------- PCC_DMAMUX0 Bit Fields                   ------ */
#define PCC_PCC_DMAMUX0_INUSE_MASK               (0x20000000U)                                       /*!< PCC_PCC_DMAMUX0: INUSE Mask             */
#define PCC_PCC_DMAMUX0_INUSE_SHIFT              (29U)                                               /*!< PCC_PCC_DMAMUX0: INUSE Position         */
#define PCC_PCC_DMAMUX0_INUSE(x)                 (((uint32_t)(((uint32_t)(x))<<PCC_PCC_DMAMUX0_INUSE_SHIFT))&PCC_PCC_DMAMUX0_INUSE_MASK) /*!< PCC_PCC_DMAMUX0                         */
#define PCC_PCC_DMAMUX0_CGC_MASK                 (0x40000000U)                                       /*!< PCC_PCC_DMAMUX0: CGC Mask               */
#define PCC_PCC_DMAMUX0_CGC_SHIFT                (30U)                                               /*!< PCC_PCC_DMAMUX0: CGC Position           */
#define PCC_PCC_DMAMUX0_CGC(x)                   (((uint32_t)(((uint32_t)(x))<<PCC_PCC_DMAMUX0_CGC_SHIFT))&PCC_PCC_DMAMUX0_CGC_MASK) /*!< PCC_PCC_DMAMUX0                         */
#define PCC_PCC_DMAMUX0_PR_MASK                  (0x80000000U)                                       /*!< PCC_PCC_DMAMUX0: PR Mask                */
#define PCC_PCC_DMAMUX0_PR_SHIFT                 (31U)                                               /*!< PCC_PCC_DMAMUX0: PR Position            */
#define PCC_PCC_DMAMUX0_PR(x)                    (((uint32_t)(((uint32_t)(x))<<PCC_PCC_DMAMUX0_PR_SHIFT))&PCC_PCC_DMAMUX0_PR_MASK) /*!< PCC_PCC_DMAMUX0                         */
/* ------- PCC_ADC1 Bit Fields                      ------ */
#define PCC_PCC_ADC1_PCS_MASK                    (0x7000000U)                                        /*!< PCC_PCC_ADC1: PCS Mask                  */
#define PCC_PCC_ADC1_PCS_SHIFT                   (24U)                                               /*!< PCC_PCC_ADC1: PCS Position              */
#define PCC_PCC_ADC1_PCS(x)                      (((uint32_t)(((uint32_t)(x))<<PCC_PCC_ADC1_PCS_SHIFT))&PCC_PCC_ADC1_PCS_MASK) /*!< PCC_PCC_ADC1                            */
#define PCC_PCC_ADC1_INUSE_MASK                  (0x20000000U)                                       /*!< PCC_PCC_ADC1: INUSE Mask                */
#define PCC_PCC_ADC1_INUSE_SHIFT                 (29U)                                               /*!< PCC_PCC_ADC1: INUSE Position            */
#define PCC_PCC_ADC1_INUSE(x)                    (((uint32_t)(((uint32_t)(x))<<PCC_PCC_ADC1_INUSE_SHIFT))&PCC_PCC_ADC1_INUSE_MASK) /*!< PCC_PCC_ADC1                            */
#define PCC_PCC_ADC1_CGC_MASK                    (0x40000000U)                                       /*!< PCC_PCC_ADC1: CGC Mask                  */
#define PCC_PCC_ADC1_CGC_SHIFT                   (30U)                                               /*!< PCC_PCC_ADC1: CGC Position              */
#define PCC_PCC_ADC1_CGC(x)                      (((uint32_t)(((uint32_t)(x))<<PCC_PCC_ADC1_CGC_SHIFT))&PCC_PCC_ADC1_CGC_MASK) /*!< PCC_PCC_ADC1                            */
#define PCC_PCC_ADC1_PR_MASK                     (0x80000000U)                                       /*!< PCC_PCC_ADC1: PR Mask                   */
#define PCC_PCC_ADC1_PR_SHIFT                    (31U)                                               /*!< PCC_PCC_ADC1: PR Position               */
#define PCC_PCC_ADC1_PR(x)                       (((uint32_t)(((uint32_t)(x))<<PCC_PCC_ADC1_PR_SHIFT))&PCC_PCC_ADC1_PR_MASK) /*!< PCC_PCC_ADC1                            */
/* ------- PCC_LPSPI Bit Fields                     ------ */
#define PCC_PCC_LPSPI_PCS_MASK                   (0x7000000U)                                        /*!< PCC_PCC_LPSPI: PCS Mask                 */
#define PCC_PCC_LPSPI_PCS_SHIFT                  (24U)                                               /*!< PCC_PCC_LPSPI: PCS Position             */
#define PCC_PCC_LPSPI_PCS(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPSPI_PCS_SHIFT))&PCC_PCC_LPSPI_PCS_MASK) /*!< PCC_PCC_LPSPI                           */
#define PCC_PCC_LPSPI_INUSE_MASK                 (0x20000000U)                                       /*!< PCC_PCC_LPSPI: INUSE Mask               */
#define PCC_PCC_LPSPI_INUSE_SHIFT                (29U)                                               /*!< PCC_PCC_LPSPI: INUSE Position           */
#define PCC_PCC_LPSPI_INUSE(x)                   (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPSPI_INUSE_SHIFT))&PCC_PCC_LPSPI_INUSE_MASK) /*!< PCC_PCC_LPSPI                           */
#define PCC_PCC_LPSPI_CGC_MASK                   (0x40000000U)                                       /*!< PCC_PCC_LPSPI: CGC Mask                 */
#define PCC_PCC_LPSPI_CGC_SHIFT                  (30U)                                               /*!< PCC_PCC_LPSPI: CGC Position             */
#define PCC_PCC_LPSPI_CGC(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPSPI_CGC_SHIFT))&PCC_PCC_LPSPI_CGC_MASK) /*!< PCC_PCC_LPSPI                           */
#define PCC_PCC_LPSPI_PR_MASK                    (0x80000000U)                                       /*!< PCC_PCC_LPSPI: PR Mask                  */
#define PCC_PCC_LPSPI_PR_SHIFT                   (31U)                                               /*!< PCC_PCC_LPSPI: PR Position              */
#define PCC_PCC_LPSPI_PR(x)                      (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPSPI_PR_SHIFT))&PCC_PCC_LPSPI_PR_MASK) /*!< PCC_PCC_LPSPI                           */
/* ------- PCC_CRC Bit Fields                       ------ */
#define PCC_PCC_CRC_INUSE_MASK                   (0x20000000U)                                       /*!< PCC_PCC_CRC: INUSE Mask                 */
#define PCC_PCC_CRC_INUSE_SHIFT                  (29U)                                               /*!< PCC_PCC_CRC: INUSE Position             */
#define PCC_PCC_CRC_INUSE(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_CRC_INUSE_SHIFT))&PCC_PCC_CRC_INUSE_MASK) /*!< PCC_PCC_CRC                             */
#define PCC_PCC_CRC_CGC_MASK                     (0x40000000U)                                       /*!< PCC_PCC_CRC: CGC Mask                   */
#define PCC_PCC_CRC_CGC_SHIFT                    (30U)                                               /*!< PCC_PCC_CRC: CGC Position               */
#define PCC_PCC_CRC_CGC(x)                       (((uint32_t)(((uint32_t)(x))<<PCC_PCC_CRC_CGC_SHIFT))&PCC_PCC_CRC_CGC_MASK) /*!< PCC_PCC_CRC                             */
#define PCC_PCC_CRC_PR_MASK                      (0x80000000U)                                       /*!< PCC_PCC_CRC: PR Mask                    */
#define PCC_PCC_CRC_PR_SHIFT                     (31U)                                               /*!< PCC_PCC_CRC: PR Position                */
#define PCC_PCC_CRC_PR(x)                        (((uint32_t)(((uint32_t)(x))<<PCC_PCC_CRC_PR_SHIFT))&PCC_PCC_CRC_PR_MASK) /*!< PCC_PCC_CRC                             */
/* ------- PCC_PDB0 Bit Fields                      ------ */
#define PCC_PCC_PDB0_INUSE_MASK                  (0x20000000U)                                       /*!< PCC_PCC_PDB0: INUSE Mask                */
#define PCC_PCC_PDB0_INUSE_SHIFT                 (29U)                                               /*!< PCC_PCC_PDB0: INUSE Position            */
#define PCC_PCC_PDB0_INUSE(x)                    (((uint32_t)(((uint32_t)(x))<<PCC_PCC_PDB0_INUSE_SHIFT))&PCC_PCC_PDB0_INUSE_MASK) /*!< PCC_PCC_PDB0                            */
#define PCC_PCC_PDB0_CGC_MASK                    (0x40000000U)                                       /*!< PCC_PCC_PDB0: CGC Mask                  */
#define PCC_PCC_PDB0_CGC_SHIFT                   (30U)                                               /*!< PCC_PCC_PDB0: CGC Position              */
#define PCC_PCC_PDB0_CGC(x)                      (((uint32_t)(((uint32_t)(x))<<PCC_PCC_PDB0_CGC_SHIFT))&PCC_PCC_PDB0_CGC_MASK) /*!< PCC_PCC_PDB0                            */
#define PCC_PCC_PDB0_PR_MASK                     (0x80000000U)                                       /*!< PCC_PCC_PDB0: PR Mask                   */
#define PCC_PCC_PDB0_PR_SHIFT                    (31U)                                               /*!< PCC_PCC_PDB0: PR Position               */
#define PCC_PCC_PDB0_PR(x)                       (((uint32_t)(((uint32_t)(x))<<PCC_PCC_PDB0_PR_SHIFT))&PCC_PCC_PDB0_PR_MASK) /*!< PCC_PCC_PDB0                            */
/* ------- PCC_LPIT0 Bit Fields                     ------ */
#define PCC_PCC_LPIT0_PCS_MASK                   (0x7000000U)                                        /*!< PCC_PCC_LPIT0: PCS Mask                 */
#define PCC_PCC_LPIT0_PCS_SHIFT                  (24U)                                               /*!< PCC_PCC_LPIT0: PCS Position             */
#define PCC_PCC_LPIT0_PCS(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPIT0_PCS_SHIFT))&PCC_PCC_LPIT0_PCS_MASK) /*!< PCC_PCC_LPIT0                           */
#define PCC_PCC_LPIT0_INUSE_MASK                 (0x20000000U)                                       /*!< PCC_PCC_LPIT0: INUSE Mask               */
#define PCC_PCC_LPIT0_INUSE_SHIFT                (29U)                                               /*!< PCC_PCC_LPIT0: INUSE Position           */
#define PCC_PCC_LPIT0_INUSE(x)                   (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPIT0_INUSE_SHIFT))&PCC_PCC_LPIT0_INUSE_MASK) /*!< PCC_PCC_LPIT0                           */
#define PCC_PCC_LPIT0_CGC_MASK                   (0x40000000U)                                       /*!< PCC_PCC_LPIT0: CGC Mask                 */
#define PCC_PCC_LPIT0_CGC_SHIFT                  (30U)                                               /*!< PCC_PCC_LPIT0: CGC Position             */
#define PCC_PCC_LPIT0_CGC(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPIT0_CGC_SHIFT))&PCC_PCC_LPIT0_CGC_MASK) /*!< PCC_PCC_LPIT0                           */
#define PCC_PCC_LPIT0_PR_MASK                    (0x80000000U)                                       /*!< PCC_PCC_LPIT0: PR Mask                  */
#define PCC_PCC_LPIT0_PR_SHIFT                   (31U)                                               /*!< PCC_PCC_LPIT0: PR Position              */
#define PCC_PCC_LPIT0_PR(x)                      (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPIT0_PR_SHIFT))&PCC_PCC_LPIT0_PR_MASK) /*!< PCC_PCC_LPIT0                           */
/* ------- PCC_FLEXTMR Bit Fields                   ------ */
#define PCC_PCC_FLEXTMR_INUSE_MASK               (0x20000000U)                                       /*!< PCC_PCC_FLEXTMR: INUSE Mask             */
#define PCC_PCC_FLEXTMR_INUSE_SHIFT              (29U)                                               /*!< PCC_PCC_FLEXTMR: INUSE Position         */
#define PCC_PCC_FLEXTMR_INUSE(x)                 (((uint32_t)(((uint32_t)(x))<<PCC_PCC_FLEXTMR_INUSE_SHIFT))&PCC_PCC_FLEXTMR_INUSE_MASK) /*!< PCC_PCC_FLEXTMR                         */
#define PCC_PCC_FLEXTMR_CGC_MASK                 (0x40000000U)                                       /*!< PCC_PCC_FLEXTMR: CGC Mask               */
#define PCC_PCC_FLEXTMR_CGC_SHIFT                (30U)                                               /*!< PCC_PCC_FLEXTMR: CGC Position           */
#define PCC_PCC_FLEXTMR_CGC(x)                   (((uint32_t)(((uint32_t)(x))<<PCC_PCC_FLEXTMR_CGC_SHIFT))&PCC_PCC_FLEXTMR_CGC_MASK) /*!< PCC_PCC_FLEXTMR                         */
#define PCC_PCC_FLEXTMR_PR_MASK                  (0x80000000U)                                       /*!< PCC_PCC_FLEXTMR: PR Mask                */
#define PCC_PCC_FLEXTMR_PR_SHIFT                 (31U)                                               /*!< PCC_PCC_FLEXTMR: PR Position            */
#define PCC_PCC_FLEXTMR_PR(x)                    (((uint32_t)(((uint32_t)(x))<<PCC_PCC_FLEXTMR_PR_SHIFT))&PCC_PCC_FLEXTMR_PR_MASK) /*!< PCC_PCC_FLEXTMR                         */
/* ------- PCC_ADC0 Bit Fields                      ------ */
#define PCC_PCC_ADC0_PCS_MASK                    (0x7000000U)                                        /*!< PCC_PCC_ADC0: PCS Mask                  */
#define PCC_PCC_ADC0_PCS_SHIFT                   (24U)                                               /*!< PCC_PCC_ADC0: PCS Position              */
#define PCC_PCC_ADC0_PCS(x)                      (((uint32_t)(((uint32_t)(x))<<PCC_PCC_ADC0_PCS_SHIFT))&PCC_PCC_ADC0_PCS_MASK) /*!< PCC_PCC_ADC0                            */
#define PCC_PCC_ADC0_INUSE_MASK                  (0x20000000U)                                       /*!< PCC_PCC_ADC0: INUSE Mask                */
#define PCC_PCC_ADC0_INUSE_SHIFT                 (29U)                                               /*!< PCC_PCC_ADC0: INUSE Position            */
#define PCC_PCC_ADC0_INUSE(x)                    (((uint32_t)(((uint32_t)(x))<<PCC_PCC_ADC0_INUSE_SHIFT))&PCC_PCC_ADC0_INUSE_MASK) /*!< PCC_PCC_ADC0                            */
#define PCC_PCC_ADC0_CGC_MASK                    (0x40000000U)                                       /*!< PCC_PCC_ADC0: CGC Mask                  */
#define PCC_PCC_ADC0_CGC_SHIFT                   (30U)                                               /*!< PCC_PCC_ADC0: CGC Position              */
#define PCC_PCC_ADC0_CGC(x)                      (((uint32_t)(((uint32_t)(x))<<PCC_PCC_ADC0_CGC_SHIFT))&PCC_PCC_ADC0_CGC_MASK) /*!< PCC_PCC_ADC0                            */
#define PCC_PCC_ADC0_PR_MASK                     (0x80000000U)                                       /*!< PCC_PCC_ADC0: PR Mask                   */
#define PCC_PCC_ADC0_PR_SHIFT                    (31U)                                               /*!< PCC_PCC_ADC0: PR Position               */
#define PCC_PCC_ADC0_PR(x)                       (((uint32_t)(((uint32_t)(x))<<PCC_PCC_ADC0_PR_SHIFT))&PCC_PCC_ADC0_PR_MASK) /*!< PCC_PCC_ADC0                            */
/* ------- PCC_RTC Bit Fields                       ------ */
#define PCC_PCC_RTC_PCD_MASK                     (0x7U)                                              /*!< PCC_PCC_RTC: PCD Mask                   */
#define PCC_PCC_RTC_PCD_SHIFT                    (0U)                                                /*!< PCC_PCC_RTC: PCD Position               */
#define PCC_PCC_RTC_PCD(x)                       (((uint32_t)(((uint32_t)(x))<<PCC_PCC_RTC_PCD_SHIFT))&PCC_PCC_RTC_PCD_MASK) /*!< PCC_PCC_RTC                             */
#define PCC_PCC_RTC_FRAC_MASK                    (0x8U)                                              /*!< PCC_PCC_RTC: FRAC Mask                  */
#define PCC_PCC_RTC_FRAC_SHIFT                   (3U)                                                /*!< PCC_PCC_RTC: FRAC Position              */
#define PCC_PCC_RTC_FRAC(x)                      (((uint32_t)(((uint32_t)(x))<<PCC_PCC_RTC_FRAC_SHIFT))&PCC_PCC_RTC_FRAC_MASK) /*!< PCC_PCC_RTC                             */
#define PCC_PCC_RTC_INUSE_MASK                   (0x20000000U)                                       /*!< PCC_PCC_RTC: INUSE Mask                 */
#define PCC_PCC_RTC_INUSE_SHIFT                  (29U)                                               /*!< PCC_PCC_RTC: INUSE Position             */
#define PCC_PCC_RTC_INUSE(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_RTC_INUSE_SHIFT))&PCC_PCC_RTC_INUSE_MASK) /*!< PCC_PCC_RTC                             */
#define PCC_PCC_RTC_CGC_MASK                     (0x40000000U)                                       /*!< PCC_PCC_RTC: CGC Mask                   */
#define PCC_PCC_RTC_CGC_SHIFT                    (30U)                                               /*!< PCC_PCC_RTC: CGC Position               */
#define PCC_PCC_RTC_CGC(x)                       (((uint32_t)(((uint32_t)(x))<<PCC_PCC_RTC_CGC_SHIFT))&PCC_PCC_RTC_CGC_MASK) /*!< PCC_PCC_RTC                             */
#define PCC_PCC_RTC_PR_MASK                      (0x80000000U)                                       /*!< PCC_PCC_RTC: PR Mask                    */
#define PCC_PCC_RTC_PR_SHIFT                     (31U)                                               /*!< PCC_PCC_RTC: PR Position                */
#define PCC_PCC_RTC_PR(x)                        (((uint32_t)(((uint32_t)(x))<<PCC_PCC_RTC_PR_SHIFT))&PCC_PCC_RTC_PR_MASK) /*!< PCC_PCC_RTC                             */
/* ------- PCC_LPTMR0 Bit Fields                    ------ */
#define PCC_PCC_LPTMR0_PCD_MASK                  (0x7U)                                              /*!< PCC_PCC_LPTMR0: PCD Mask                */
#define PCC_PCC_LPTMR0_PCD_SHIFT                 (0U)                                                /*!< PCC_PCC_LPTMR0: PCD Position            */
#define PCC_PCC_LPTMR0_PCD(x)                    (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPTMR0_PCD_SHIFT))&PCC_PCC_LPTMR0_PCD_MASK) /*!< PCC_PCC_LPTMR0                          */
#define PCC_PCC_LPTMR0_FRAC_MASK                 (0x8U)                                              /*!< PCC_PCC_LPTMR0: FRAC Mask               */
#define PCC_PCC_LPTMR0_FRAC_SHIFT                (3U)                                                /*!< PCC_PCC_LPTMR0: FRAC Position           */
#define PCC_PCC_LPTMR0_FRAC(x)                   (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPTMR0_FRAC_SHIFT))&PCC_PCC_LPTMR0_FRAC_MASK) /*!< PCC_PCC_LPTMR0                          */
#define PCC_PCC_LPTMR0_PCS_MASK                  (0x7000000U)                                        /*!< PCC_PCC_LPTMR0: PCS Mask                */
#define PCC_PCC_LPTMR0_PCS_SHIFT                 (24U)                                               /*!< PCC_PCC_LPTMR0: PCS Position            */
#define PCC_PCC_LPTMR0_PCS(x)                    (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPTMR0_PCS_SHIFT))&PCC_PCC_LPTMR0_PCS_MASK) /*!< PCC_PCC_LPTMR0                          */
#define PCC_PCC_LPTMR0_INUSE_MASK                (0x20000000U)                                       /*!< PCC_PCC_LPTMR0: INUSE Mask              */
#define PCC_PCC_LPTMR0_INUSE_SHIFT               (29U)                                               /*!< PCC_PCC_LPTMR0: INUSE Position          */
#define PCC_PCC_LPTMR0_INUSE(x)                  (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPTMR0_INUSE_SHIFT))&PCC_PCC_LPTMR0_INUSE_MASK) /*!< PCC_PCC_LPTMR0                          */
#define PCC_PCC_LPTMR0_CGC_MASK                  (0x40000000U)                                       /*!< PCC_PCC_LPTMR0: CGC Mask                */
#define PCC_PCC_LPTMR0_CGC_SHIFT                 (30U)                                               /*!< PCC_PCC_LPTMR0: CGC Position            */
#define PCC_PCC_LPTMR0_CGC(x)                    (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPTMR0_CGC_SHIFT))&PCC_PCC_LPTMR0_CGC_MASK) /*!< PCC_PCC_LPTMR0                          */
#define PCC_PCC_LPTMR0_PR_MASK                   (0x80000000U)                                       /*!< PCC_PCC_LPTMR0: PR Mask                 */
#define PCC_PCC_LPTMR0_PR_SHIFT                  (31U)                                               /*!< PCC_PCC_LPTMR0: PR Position             */
#define PCC_PCC_LPTMR0_PR(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPTMR0_PR_SHIFT))&PCC_PCC_LPTMR0_PR_MASK) /*!< PCC_PCC_LPTMR0                          */
/* ------- PCC_TSI Bit Fields                       ------ */
#define PCC_PCC_TSI_INUSE_MASK                   (0x20000000U)                                       /*!< PCC_PCC_TSI: INUSE Mask                 */
#define PCC_PCC_TSI_INUSE_SHIFT                  (29U)                                               /*!< PCC_PCC_TSI: INUSE Position             */
#define PCC_PCC_TSI_INUSE(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_TSI_INUSE_SHIFT))&PCC_PCC_TSI_INUSE_MASK) /*!< PCC_PCC_TSI                             */
#define PCC_PCC_TSI_CGC_MASK                     (0x40000000U)                                       /*!< PCC_PCC_TSI: CGC Mask                   */
#define PCC_PCC_TSI_CGC_SHIFT                    (30U)                                               /*!< PCC_PCC_TSI: CGC Position               */
#define PCC_PCC_TSI_CGC(x)                       (((uint32_t)(((uint32_t)(x))<<PCC_PCC_TSI_CGC_SHIFT))&PCC_PCC_TSI_CGC_MASK) /*!< PCC_PCC_TSI                             */
#define PCC_PCC_TSI_PR_MASK                      (0x80000000U)                                       /*!< PCC_PCC_TSI: PR Mask                    */
#define PCC_PCC_TSI_PR_SHIFT                     (31U)                                               /*!< PCC_PCC_TSI: PR Position                */
#define PCC_PCC_TSI_PR(x)                        (((uint32_t)(((uint32_t)(x))<<PCC_PCC_TSI_PR_SHIFT))&PCC_PCC_TSI_PR_MASK) /*!< PCC_PCC_TSI                             */
/* ------- PCC_PORT Bit Fields                      ------ */
#define PCC_PCC_PORT_INUSE_MASK                  (0x20000000U)                                       /*!< PCC_PCC_PORT: INUSE Mask                */
#define PCC_PCC_PORT_INUSE_SHIFT                 (29U)                                               /*!< PCC_PCC_PORT: INUSE Position            */
#define PCC_PCC_PORT_INUSE(x)                    (((uint32_t)(((uint32_t)(x))<<PCC_PCC_PORT_INUSE_SHIFT))&PCC_PCC_PORT_INUSE_MASK) /*!< PCC_PCC_PORT                            */
#define PCC_PCC_PORT_CGC_MASK                    (0x40000000U)                                       /*!< PCC_PCC_PORT: CGC Mask                  */
#define PCC_PCC_PORT_CGC_SHIFT                   (30U)                                               /*!< PCC_PCC_PORT: CGC Position              */
#define PCC_PCC_PORT_CGC(x)                      (((uint32_t)(((uint32_t)(x))<<PCC_PCC_PORT_CGC_SHIFT))&PCC_PCC_PORT_CGC_MASK) /*!< PCC_PCC_PORT                            */
#define PCC_PCC_PORT_PR_MASK                     (0x80000000U)                                       /*!< PCC_PCC_PORT: PR Mask                   */
#define PCC_PCC_PORT_PR_SHIFT                    (31U)                                               /*!< PCC_PCC_PORT: PR Position               */
#define PCC_PCC_PORT_PR(x)                       (((uint32_t)(((uint32_t)(x))<<PCC_PCC_PORT_PR_SHIFT))&PCC_PCC_PORT_PR_MASK) /*!< PCC_PCC_PORT                            */
/* ------- PCC_PORTC Bit Fields                     ------ */
#define PCC_PCC_PORTC_INUSE_MASK                 (0x20000000U)                                       /*!< PCC_PCC_PORTC: INUSE Mask               */
#define PCC_PCC_PORTC_INUSE_SHIFT                (29U)                                               /*!< PCC_PCC_PORTC: INUSE Position           */
#define PCC_PCC_PORTC_INUSE(x)                   (((uint32_t)(((uint32_t)(x))<<PCC_PCC_PORTC_INUSE_SHIFT))&PCC_PCC_PORTC_INUSE_MASK) /*!< PCC_PCC_PORTC                           */
#define PCC_PCC_PORTC_CGC_MASK                   (0x40000000U)                                       /*!< PCC_PCC_PORTC: CGC Mask                 */
#define PCC_PCC_PORTC_CGC_SHIFT                  (30U)                                               /*!< PCC_PCC_PORTC: CGC Position             */
#define PCC_PCC_PORTC_CGC(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_PORTC_CGC_SHIFT))&PCC_PCC_PORTC_CGC_MASK) /*!< PCC_PCC_PORTC                           */
#define PCC_PCC_PORTC_PR_MASK                    (0x80000000U)                                       /*!< PCC_PCC_PORTC: PR Mask                  */
#define PCC_PCC_PORTC_PR_SHIFT                   (31U)                                               /*!< PCC_PCC_PORTC: PR Position              */
#define PCC_PCC_PORTC_PR(x)                      (((uint32_t)(((uint32_t)(x))<<PCC_PCC_PORTC_PR_SHIFT))&PCC_PCC_PORTC_PR_MASK) /*!< PCC_PCC_PORTC                           */
/* ------- PCC_PORT Bit Fields                      ------ */
/* ------- PCC_PWT Bit Fields                       ------ */
#define PCC_PCC_PWT_INUSE_MASK                   (0x20000000U)                                       /*!< PCC_PCC_PWT: INUSE Mask                 */
#define PCC_PCC_PWT_INUSE_SHIFT                  (29U)                                               /*!< PCC_PCC_PWT: INUSE Position             */
#define PCC_PCC_PWT_INUSE(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_PWT_INUSE_SHIFT))&PCC_PCC_PWT_INUSE_MASK) /*!< PCC_PCC_PWT                             */
#define PCC_PCC_PWT_CGC_MASK                     (0x40000000U)                                       /*!< PCC_PCC_PWT: CGC Mask                   */
#define PCC_PCC_PWT_CGC_SHIFT                    (30U)                                               /*!< PCC_PCC_PWT: CGC Position               */
#define PCC_PCC_PWT_CGC(x)                       (((uint32_t)(((uint32_t)(x))<<PCC_PCC_PWT_CGC_SHIFT))&PCC_PCC_PWT_CGC_MASK) /*!< PCC_PCC_PWT                             */
#define PCC_PCC_PWT_PR_MASK                      (0x80000000U)                                       /*!< PCC_PCC_PWT: PR Mask                    */
#define PCC_PCC_PWT_PR_SHIFT                     (31U)                                               /*!< PCC_PCC_PWT: PR Position                */
#define PCC_PCC_PWT_PR(x)                        (((uint32_t)(((uint32_t)(x))<<PCC_PCC_PWT_PR_SHIFT))&PCC_PCC_PWT_PR_MASK) /*!< PCC_PCC_PWT                             */
/* ------- PCC_FLEXIO Bit Fields                    ------ */
#define PCC_PCC_FLEXIO_PCS_MASK                  (0x7000000U)                                        /*!< PCC_PCC_FLEXIO: PCS Mask                */
#define PCC_PCC_FLEXIO_PCS_SHIFT                 (24U)                                               /*!< PCC_PCC_FLEXIO: PCS Position            */
#define PCC_PCC_FLEXIO_PCS(x)                    (((uint32_t)(((uint32_t)(x))<<PCC_PCC_FLEXIO_PCS_SHIFT))&PCC_PCC_FLEXIO_PCS_MASK) /*!< PCC_PCC_FLEXIO                          */
#define PCC_PCC_FLEXIO_INUSE_MASK                (0x20000000U)                                       /*!< PCC_PCC_FLEXIO: INUSE Mask              */
#define PCC_PCC_FLEXIO_INUSE_SHIFT               (29U)                                               /*!< PCC_PCC_FLEXIO: INUSE Position          */
#define PCC_PCC_FLEXIO_INUSE(x)                  (((uint32_t)(((uint32_t)(x))<<PCC_PCC_FLEXIO_INUSE_SHIFT))&PCC_PCC_FLEXIO_INUSE_MASK) /*!< PCC_PCC_FLEXIO                          */
#define PCC_PCC_FLEXIO_CGC_MASK                  (0x40000000U)                                       /*!< PCC_PCC_FLEXIO: CGC Mask                */
#define PCC_PCC_FLEXIO_CGC_SHIFT                 (30U)                                               /*!< PCC_PCC_FLEXIO: CGC Position            */
#define PCC_PCC_FLEXIO_CGC(x)                    (((uint32_t)(((uint32_t)(x))<<PCC_PCC_FLEXIO_CGC_SHIFT))&PCC_PCC_FLEXIO_CGC_MASK) /*!< PCC_PCC_FLEXIO                          */
#define PCC_PCC_FLEXIO_PR_MASK                   (0x80000000U)                                       /*!< PCC_PCC_FLEXIO: PR Mask                 */
#define PCC_PCC_FLEXIO_PR_SHIFT                  (31U)                                               /*!< PCC_PCC_FLEXIO: PR Position             */
#define PCC_PCC_FLEXIO_PR(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_FLEXIO_PR_SHIFT))&PCC_PCC_FLEXIO_PR_MASK) /*!< PCC_PCC_FLEXIO                          */
/* ------- PCC_OSC32 Bit Fields                     ------ */
#define PCC_PCC_OSC32_INUSE_MASK                 (0x20000000U)                                       /*!< PCC_PCC_OSC32: INUSE Mask               */
#define PCC_PCC_OSC32_INUSE_SHIFT                (29U)                                               /*!< PCC_PCC_OSC32: INUSE Position           */
#define PCC_PCC_OSC32_INUSE(x)                   (((uint32_t)(((uint32_t)(x))<<PCC_PCC_OSC32_INUSE_SHIFT))&PCC_PCC_OSC32_INUSE_MASK) /*!< PCC_PCC_OSC32                           */
#define PCC_PCC_OSC32_CGC_MASK                   (0x40000000U)                                       /*!< PCC_PCC_OSC32: CGC Mask                 */
#define PCC_PCC_OSC32_CGC_SHIFT                  (30U)                                               /*!< PCC_PCC_OSC32: CGC Position             */
#define PCC_PCC_OSC32_CGC(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_OSC32_CGC_SHIFT))&PCC_PCC_OSC32_CGC_MASK) /*!< PCC_PCC_OSC32                           */
#define PCC_PCC_OSC32_PR_MASK                    (0x80000000U)                                       /*!< PCC_PCC_OSC32: PR Mask                  */
#define PCC_PCC_OSC32_PR_SHIFT                   (31U)                                               /*!< PCC_PCC_OSC32: PR Position              */
#define PCC_PCC_OSC32_PR(x)                      (((uint32_t)(((uint32_t)(x))<<PCC_PCC_OSC32_PR_SHIFT))&PCC_PCC_OSC32_PR_MASK) /*!< PCC_PCC_OSC32                           */
/* ------- PCC_EWM Bit Fields                       ------ */
#define PCC_PCC_EWM_INUSE_MASK                   (0x20000000U)                                       /*!< PCC_PCC_EWM: INUSE Mask                 */
#define PCC_PCC_EWM_INUSE_SHIFT                  (29U)                                               /*!< PCC_PCC_EWM: INUSE Position             */
#define PCC_PCC_EWM_INUSE(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_EWM_INUSE_SHIFT))&PCC_PCC_EWM_INUSE_MASK) /*!< PCC_PCC_EWM                             */
#define PCC_PCC_EWM_CGC_MASK                     (0x40000000U)                                       /*!< PCC_PCC_EWM: CGC Mask                   */
#define PCC_PCC_EWM_CGC_SHIFT                    (30U)                                               /*!< PCC_PCC_EWM: CGC Position               */
#define PCC_PCC_EWM_CGC(x)                       (((uint32_t)(((uint32_t)(x))<<PCC_PCC_EWM_CGC_SHIFT))&PCC_PCC_EWM_CGC_MASK) /*!< PCC_PCC_EWM                             */
#define PCC_PCC_EWM_PR_MASK                      (0x80000000U)                                       /*!< PCC_PCC_EWM: PR Mask                    */
#define PCC_PCC_EWM_PR_SHIFT                     (31U)                                               /*!< PCC_PCC_EWM: PR Position                */
#define PCC_PCC_EWM_PR(x)                        (((uint32_t)(((uint32_t)(x))<<PCC_PCC_EWM_PR_SHIFT))&PCC_PCC_EWM_PR_MASK) /*!< PCC_PCC_EWM                             */
/* ------- PCC_LPI2C Bit Fields                     ------ */
#define PCC_PCC_LPI2C_PCS_MASK                   (0x7000000U)                                        /*!< PCC_PCC_LPI2C: PCS Mask                 */
#define PCC_PCC_LPI2C_PCS_SHIFT                  (24U)                                               /*!< PCC_PCC_LPI2C: PCS Position             */
#define PCC_PCC_LPI2C_PCS(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPI2C_PCS_SHIFT))&PCC_PCC_LPI2C_PCS_MASK) /*!< PCC_PCC_LPI2C                           */
#define PCC_PCC_LPI2C_INUSE_MASK                 (0x20000000U)                                       /*!< PCC_PCC_LPI2C: INUSE Mask               */
#define PCC_PCC_LPI2C_INUSE_SHIFT                (29U)                                               /*!< PCC_PCC_LPI2C: INUSE Position           */
#define PCC_PCC_LPI2C_INUSE(x)                   (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPI2C_INUSE_SHIFT))&PCC_PCC_LPI2C_INUSE_MASK) /*!< PCC_PCC_LPI2C                           */
#define PCC_PCC_LPI2C_CGC_MASK                   (0x40000000U)                                       /*!< PCC_PCC_LPI2C: CGC Mask                 */
#define PCC_PCC_LPI2C_CGC_SHIFT                  (30U)                                               /*!< PCC_PCC_LPI2C: CGC Position             */
#define PCC_PCC_LPI2C_CGC(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPI2C_CGC_SHIFT))&PCC_PCC_LPI2C_CGC_MASK) /*!< PCC_PCC_LPI2C                           */
#define PCC_PCC_LPI2C_PR_MASK                    (0x80000000U)                                       /*!< PCC_PCC_LPI2C: PR Mask                  */
#define PCC_PCC_LPI2C_PR_SHIFT                   (31U)                                               /*!< PCC_PCC_LPI2C: PR Position              */
#define PCC_PCC_LPI2C_PR(x)                      (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPI2C_PR_SHIFT))&PCC_PCC_LPI2C_PR_MASK) /*!< PCC_PCC_LPI2C                           */
/* ------- PCC_LPUART Bit Fields                    ------ */
#define PCC_PCC_LPUART_PCS_MASK                  (0x7000000U)                                        /*!< PCC_PCC_LPUART: PCS Mask                */
#define PCC_PCC_LPUART_PCS_SHIFT                 (24U)                                               /*!< PCC_PCC_LPUART: PCS Position            */
#define PCC_PCC_LPUART_PCS(x)                    (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPUART_PCS_SHIFT))&PCC_PCC_LPUART_PCS_MASK) /*!< PCC_PCC_LPUART                          */
#define PCC_PCC_LPUART_INUSE_MASK                (0x20000000U)                                       /*!< PCC_PCC_LPUART: INUSE Mask              */
#define PCC_PCC_LPUART_INUSE_SHIFT               (29U)                                               /*!< PCC_PCC_LPUART: INUSE Position          */
#define PCC_PCC_LPUART_INUSE(x)                  (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPUART_INUSE_SHIFT))&PCC_PCC_LPUART_INUSE_MASK) /*!< PCC_PCC_LPUART                          */
#define PCC_PCC_LPUART_CGC_MASK                  (0x40000000U)                                       /*!< PCC_PCC_LPUART: CGC Mask                */
#define PCC_PCC_LPUART_CGC_SHIFT                 (30U)                                               /*!< PCC_PCC_LPUART: CGC Position            */
#define PCC_PCC_LPUART_CGC(x)                    (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPUART_CGC_SHIFT))&PCC_PCC_LPUART_CGC_MASK) /*!< PCC_PCC_LPUART                          */
#define PCC_PCC_LPUART_PR_MASK                   (0x80000000U)                                       /*!< PCC_PCC_LPUART: PR Mask                 */
#define PCC_PCC_LPUART_PR_SHIFT                  (31U)                                               /*!< PCC_PCC_LPUART: PR Position             */
#define PCC_PCC_LPUART_PR(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_LPUART_PR_SHIFT))&PCC_PCC_LPUART_PR_MASK) /*!< PCC_PCC_LPUART                          */
/* ------- PCC_CMP Bit Fields                       ------ */
#define PCC_PCC_CMP_INUSE_MASK                   (0x20000000U)                                       /*!< PCC_PCC_CMP: INUSE Mask                 */
#define PCC_PCC_CMP_INUSE_SHIFT                  (29U)                                               /*!< PCC_PCC_CMP: INUSE Position             */
#define PCC_PCC_CMP_INUSE(x)                     (((uint32_t)(((uint32_t)(x))<<PCC_PCC_CMP_INUSE_SHIFT))&PCC_PCC_CMP_INUSE_MASK) /*!< PCC_PCC_CMP                             */
#define PCC_PCC_CMP_CGC_MASK                     (0x40000000U)                                       /*!< PCC_PCC_CMP: CGC Mask                   */
#define PCC_PCC_CMP_CGC_SHIFT                    (30U)                                               /*!< PCC_PCC_CMP: CGC Position               */
#define PCC_PCC_CMP_CGC(x)                       (((uint32_t)(((uint32_t)(x))<<PCC_PCC_CMP_CGC_SHIFT))&PCC_PCC_CMP_CGC_MASK) /*!< PCC_PCC_CMP                             */
#define PCC_PCC_CMP_PR_MASK                      (0x80000000U)                                       /*!< PCC_PCC_CMP: PR Mask                    */
#define PCC_PCC_CMP_PR_SHIFT                     (31U)                                               /*!< PCC_PCC_CMP: PR Position                */
#define PCC_PCC_CMP_PR(x)                        (((uint32_t)(((uint32_t)(x))<<PCC_PCC_CMP_PR_SHIFT))&PCC_PCC_CMP_PR_MASK) /*!< PCC_PCC_CMP                             */
/**
 * @} */ /* End group PCC_Register_Masks_GROUP 
 */

/* PCC - Peripheral instance base addresses */
#define PCC_BasePtr                    0x40065000UL //!< Peripheral base address
#define PCC                            ((PCC_Type *) PCC_BasePtr) //!< Freescale base pointer
#define PCC_BASE_PTR                   (PCC) //!< Freescale style base pointer
/**
 * @} */ /* End group PCC_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup PDB_Peripheral_access_layer_GROUP PDB Peripheral Access Layer
* @brief C Struct for PDB
* @{
*/

/* ================================================================================ */
/* ================           PDB0 (file:PDB0_MKE15Z7)             ================ */
/* ================================================================================ */

/**
 * @brief Programmable Delay Block
 */
/**
* @addtogroup PDB_structs_GROUP PDB struct
* @brief Struct for PDB
* @{
*/
typedef struct {                                /*       PDB0 Structure                                               */
   __IO uint32_t  SC;                           /**< 0000: Status and Control register                                  */
   __IO uint32_t  MOD;                          /**< 0004: Modulus register                                             */
   __I  uint32_t  CNT;                          /**< 0008: Counter register                                             */
   __IO uint32_t  IDLY;                         /**< 000C: Interrupt Delay register                                     */
   struct {
      __IO uint32_t  C1;                        /**< 0010: Channel n Control register 1                                 */
      __IO uint32_t  S;                         /**< 0014: Channel n Status register                                    */
      __IO uint32_t  DLY[2];                    /**< 0018: Channel n Delay  register                                    */
           uint8_t   RESERVED_0[24];           
   } CH[2];                                     /**< 0010: (cluster: size=0x0050, 80)                                   */
        uint8_t   RESERVED_1[304];             
   __IO uint32_t  POEN;                         /**< 0190: Pulse-Out n Enable register                                  */
   __IO uint32_t  PODLY[2];                     /**< 0194: Pulse-Out n Delay register                                   */
} PDB0_Type;

/**
 * @} */ /* End group PDB_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'PDB0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup PDB_Register_Masks_GROUP PDB Register Masks
* @brief Register Masks for PDB
* @{
*/
/* ------- SC Bit Fields                            ------ */
#define PDB_SC_LDOK_MASK                         (0x1U)                                              /*!< PDB0_SC: LDOK Mask                      */
#define PDB_SC_LDOK_SHIFT                        (0U)                                                /*!< PDB0_SC: LDOK Position                  */
#define PDB_SC_LDOK(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_SC_LDOK_SHIFT))&PDB_SC_LDOK_MASK) /*!< PDB0_SC                                 */
#define PDB_SC_CONT_MASK                         (0x2U)                                              /*!< PDB0_SC: CONT Mask                      */
#define PDB_SC_CONT_SHIFT                        (1U)                                                /*!< PDB0_SC: CONT Position                  */
#define PDB_SC_CONT(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_SC_CONT_SHIFT))&PDB_SC_CONT_MASK) /*!< PDB0_SC                                 */
#define PDB_SC_MULT_MASK                         (0xCU)                                              /*!< PDB0_SC: MULT Mask                      */
#define PDB_SC_MULT_SHIFT                        (2U)                                                /*!< PDB0_SC: MULT Position                  */
#define PDB_SC_MULT(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_SC_MULT_SHIFT))&PDB_SC_MULT_MASK) /*!< PDB0_SC                                 */
#define PDB_SC_PDBIE_MASK                        (0x20U)                                             /*!< PDB0_SC: PDBIE Mask                     */
#define PDB_SC_PDBIE_SHIFT                       (5U)                                                /*!< PDB0_SC: PDBIE Position                 */
#define PDB_SC_PDBIE(x)                          (((uint32_t)(((uint32_t)(x))<<PDB_SC_PDBIE_SHIFT))&PDB_SC_PDBIE_MASK) /*!< PDB0_SC                                 */
#define PDB_SC_PDBIF_MASK                        (0x40U)                                             /*!< PDB0_SC: PDBIF Mask                     */
#define PDB_SC_PDBIF_SHIFT                       (6U)                                                /*!< PDB0_SC: PDBIF Position                 */
#define PDB_SC_PDBIF(x)                          (((uint32_t)(((uint32_t)(x))<<PDB_SC_PDBIF_SHIFT))&PDB_SC_PDBIF_MASK) /*!< PDB0_SC                                 */
#define PDB_SC_PDBEN_MASK                        (0x80U)                                             /*!< PDB0_SC: PDBEN Mask                     */
#define PDB_SC_PDBEN_SHIFT                       (7U)                                                /*!< PDB0_SC: PDBEN Position                 */
#define PDB_SC_PDBEN(x)                          (((uint32_t)(((uint32_t)(x))<<PDB_SC_PDBEN_SHIFT))&PDB_SC_PDBEN_MASK) /*!< PDB0_SC                                 */
#define PDB_SC_TRGSEL_MASK                       (0xF00U)                                            /*!< PDB0_SC: TRGSEL Mask                    */
#define PDB_SC_TRGSEL_SHIFT                      (8U)                                                /*!< PDB0_SC: TRGSEL Position                */
#define PDB_SC_TRGSEL(x)                         (((uint32_t)(((uint32_t)(x))<<PDB_SC_TRGSEL_SHIFT))&PDB_SC_TRGSEL_MASK) /*!< PDB0_SC                                 */
#define PDB_SC_PRESCALER_MASK                    (0x7000U)                                           /*!< PDB0_SC: PRESCALER Mask                 */
#define PDB_SC_PRESCALER_SHIFT                   (12U)                                               /*!< PDB0_SC: PRESCALER Position             */
#define PDB_SC_PRESCALER(x)                      (((uint32_t)(((uint32_t)(x))<<PDB_SC_PRESCALER_SHIFT))&PDB_SC_PRESCALER_MASK) /*!< PDB0_SC                                 */
#define PDB_SC_DMAEN_MASK                        (0x8000U)                                           /*!< PDB0_SC: DMAEN Mask                     */
#define PDB_SC_DMAEN_SHIFT                       (15U)                                               /*!< PDB0_SC: DMAEN Position                 */
#define PDB_SC_DMAEN(x)                          (((uint32_t)(((uint32_t)(x))<<PDB_SC_DMAEN_SHIFT))&PDB_SC_DMAEN_MASK) /*!< PDB0_SC                                 */
#define PDB_SC_SWTRIG_MASK                       (0x10000U)                                          /*!< PDB0_SC: SWTRIG Mask                    */
#define PDB_SC_SWTRIG_SHIFT                      (16U)                                               /*!< PDB0_SC: SWTRIG Position                */
#define PDB_SC_SWTRIG(x)                         (((uint32_t)(((uint32_t)(x))<<PDB_SC_SWTRIG_SHIFT))&PDB_SC_SWTRIG_MASK) /*!< PDB0_SC                                 */
#define PDB_SC_PDBEIE_MASK                       (0x20000U)                                          /*!< PDB0_SC: PDBEIE Mask                    */
#define PDB_SC_PDBEIE_SHIFT                      (17U)                                               /*!< PDB0_SC: PDBEIE Position                */
#define PDB_SC_PDBEIE(x)                         (((uint32_t)(((uint32_t)(x))<<PDB_SC_PDBEIE_SHIFT))&PDB_SC_PDBEIE_MASK) /*!< PDB0_SC                                 */
#define PDB_SC_LDMOD_MASK                        (0xC0000U)                                          /*!< PDB0_SC: LDMOD Mask                     */
#define PDB_SC_LDMOD_SHIFT                       (18U)                                               /*!< PDB0_SC: LDMOD Position                 */
#define PDB_SC_LDMOD(x)                          (((uint32_t)(((uint32_t)(x))<<PDB_SC_LDMOD_SHIFT))&PDB_SC_LDMOD_MASK) /*!< PDB0_SC                                 */
/* ------- MOD Bit Fields                           ------ */
#define PDB_MOD_MOD_MASK                         (0xFFFFU)                                           /*!< PDB0_MOD: MOD Mask                      */
#define PDB_MOD_MOD_SHIFT                        (0U)                                                /*!< PDB0_MOD: MOD Position                  */
#define PDB_MOD_MOD(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_MOD_MOD_SHIFT))&PDB_MOD_MOD_MASK) /*!< PDB0_MOD                                */
/* ------- CNT Bit Fields                           ------ */
#define PDB_CNT_CNT_MASK                         (0xFFFFU)                                           /*!< PDB0_CNT: CNT Mask                      */
#define PDB_CNT_CNT_SHIFT                        (0U)                                                /*!< PDB0_CNT: CNT Position                  */
#define PDB_CNT_CNT(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_CNT_CNT_SHIFT))&PDB_CNT_CNT_MASK) /*!< PDB0_CNT                                */
/* ------- IDLY Bit Fields                          ------ */
#define PDB_IDLY_IDLY_MASK                       (0xFFFFU)                                           /*!< PDB0_IDLY: IDLY Mask                    */
#define PDB_IDLY_IDLY_SHIFT                      (0U)                                                /*!< PDB0_IDLY: IDLY Position                */
#define PDB_IDLY_IDLY(x)                         (((uint32_t)(((uint32_t)(x))<<PDB_IDLY_IDLY_SHIFT))&PDB_IDLY_IDLY_MASK) /*!< PDB0_IDLY                               */
/* ------- C1 Bit Fields                            ------ */
#define PDB_C1_EN_MASK                           (0xFFU)                                             /*!< PDB0_C1: EN Mask                        */
#define PDB_C1_EN_SHIFT                          (0U)                                                /*!< PDB0_C1: EN Position                    */
#define PDB_C1_EN(x)                             (((uint32_t)(((uint32_t)(x))<<PDB_C1_EN_SHIFT))&PDB_C1_EN_MASK) /*!< PDB0_C1                                 */
#define PDB_C1_TOS_MASK                          (0xFF00U)                                           /*!< PDB0_C1: TOS Mask                       */
#define PDB_C1_TOS_SHIFT                         (8U)                                                /*!< PDB0_C1: TOS Position                   */
#define PDB_C1_TOS(x)                            (((uint32_t)(((uint32_t)(x))<<PDB_C1_TOS_SHIFT))&PDB_C1_TOS_MASK) /*!< PDB0_C1                                 */
#define PDB_C1_BB_MASK                           (0xFF0000U)                                         /*!< PDB0_C1: BB Mask                        */
#define PDB_C1_BB_SHIFT                          (16U)                                               /*!< PDB0_C1: BB Position                    */
#define PDB_C1_BB(x)                             (((uint32_t)(((uint32_t)(x))<<PDB_C1_BB_SHIFT))&PDB_C1_BB_MASK) /*!< PDB0_C1                                 */
/* ------- S Bit Fields                             ------ */
#define PDB_S_ERR_MASK                           (0xFFU)                                             /*!< PDB0_S: ERR Mask                        */
#define PDB_S_ERR_SHIFT                          (0U)                                                /*!< PDB0_S: ERR Position                    */
#define PDB_S_ERR(x)                             (((uint32_t)(((uint32_t)(x))<<PDB_S_ERR_SHIFT))&PDB_S_ERR_MASK) /*!< PDB0_S                                  */
#define PDB_S_CF_MASK                            (0xFF0000U)                                         /*!< PDB0_S: CF Mask                         */
#define PDB_S_CF_SHIFT                           (16U)                                               /*!< PDB0_S: CF Position                     */
#define PDB_S_CF(x)                              (((uint32_t)(((uint32_t)(x))<<PDB_S_CF_SHIFT))&PDB_S_CF_MASK) /*!< PDB0_S                                  */
/* ------- DLY Bit Fields                           ------ */
#define PDB_DLY_DLY_MASK                         (0xFFFFU)                                           /*!< PDB0_DLY: DLY Mask                      */
#define PDB_DLY_DLY_SHIFT                        (0U)                                                /*!< PDB0_DLY: DLY Position                  */
#define PDB_DLY_DLY(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_DLY_DLY_SHIFT))&PDB_DLY_DLY_MASK) /*!< PDB0_DLY                                */
/* ------- POEN Bit Fields                          ------ */
#define PDB_POEN_POEN_MASK                       (0xFFU)                                             /*!< PDB0_POEN: POEN Mask                    */
#define PDB_POEN_POEN_SHIFT                      (0U)                                                /*!< PDB0_POEN: POEN Position                */
#define PDB_POEN_POEN(x)                         (((uint32_t)(((uint32_t)(x))<<PDB_POEN_POEN_SHIFT))&PDB_POEN_POEN_MASK) /*!< PDB0_POEN                               */
/* ------- PODLY Bit Fields                         ------ */
#define PDB_PODLY_DLY2_MASK                      (0xFFFFU)                                           /*!< PDB0_PODLY: DLY2 Mask                   */
#define PDB_PODLY_DLY2_SHIFT                     (0U)                                                /*!< PDB0_PODLY: DLY2 Position               */
#define PDB_PODLY_DLY2(x)                        (((uint32_t)(((uint32_t)(x))<<PDB_PODLY_DLY2_SHIFT))&PDB_PODLY_DLY2_MASK) /*!< PDB0_PODLY                              */
#define PDB_PODLY_DLY1_MASK                      (0xFFFF0000U)                                       /*!< PDB0_PODLY: DLY1 Mask                   */
#define PDB_PODLY_DLY1_SHIFT                     (16U)                                               /*!< PDB0_PODLY: DLY1 Position               */
#define PDB_PODLY_DLY1(x)                        (((uint32_t)(((uint32_t)(x))<<PDB_PODLY_DLY1_SHIFT))&PDB_PODLY_DLY1_MASK) /*!< PDB0_PODLY                              */
/**
 * @} */ /* End group PDB_Register_Masks_GROUP 
 */

/* PDB0 - Peripheral instance base addresses */
#define PDB0_BasePtr                   0x40036000UL //!< Peripheral base address
#define PDB0                           ((PDB0_Type *) PDB0_BasePtr) //!< Freescale base pointer
#define PDB0_BASE_PTR                  (PDB0) //!< Freescale style base pointer
/**
 * @} */ /* End group PDB_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup PMC_Peripheral_access_layer_GROUP PMC Peripheral Access Layer
* @brief C Struct for PMC
* @{
*/

/* ================================================================================ */
/* ================           PMC (file:PMC_MKE15Z7)               ================ */
/* ================================================================================ */

/**
 * @brief PMC
 */
/**
* @addtogroup PMC_structs_GROUP PMC struct
* @brief Struct for PMC
* @{
*/
typedef struct {                                /*       PMC Structure                                                */
   __IO uint8_t   LVDSC1;                       /**< 0000: Low Voltage Detect Status and Control 1 Register             */
   __IO uint8_t   LVDSC2;                       /**< 0001: Low Voltage Detect Status and Control 2 Register             */
   __IO uint8_t   REGSC;                        /**< 0002: Regulator Status and Control Register                        */
        uint8_t   RESERVED_0;                  
   __IO uint8_t   LPOTRIM;                      /**< 0004: Low Power Oscillator Trim Register                           */
} PMC_Type;

/**
 * @} */ /* End group PMC_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'PMC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup PMC_Register_Masks_GROUP PMC Register Masks
* @brief Register Masks for PMC
* @{
*/
/* ------- LVDSC1 Bit Fields                        ------ */
#define PMC_LVDSC1_LVDRE_MASK                    (0x10U)                                             /*!< PMC_LVDSC1: LVDRE Mask                  */
#define PMC_LVDSC1_LVDRE_SHIFT                   (4U)                                                /*!< PMC_LVDSC1: LVDRE Position              */
#define PMC_LVDSC1_LVDRE(x)                      (((uint8_t)(((uint8_t)(x))<<PMC_LVDSC1_LVDRE_SHIFT))&PMC_LVDSC1_LVDRE_MASK) /*!< PMC_LVDSC1                              */
#define PMC_LVDSC1_LVDIE_MASK                    (0x20U)                                             /*!< PMC_LVDSC1: LVDIE Mask                  */
#define PMC_LVDSC1_LVDIE_SHIFT                   (5U)                                                /*!< PMC_LVDSC1: LVDIE Position              */
#define PMC_LVDSC1_LVDIE(x)                      (((uint8_t)(((uint8_t)(x))<<PMC_LVDSC1_LVDIE_SHIFT))&PMC_LVDSC1_LVDIE_MASK) /*!< PMC_LVDSC1                              */
#define PMC_LVDSC1_LVDACK_MASK                   (0x40U)                                             /*!< PMC_LVDSC1: LVDACK Mask                 */
#define PMC_LVDSC1_LVDACK_SHIFT                  (6U)                                                /*!< PMC_LVDSC1: LVDACK Position             */
#define PMC_LVDSC1_LVDACK(x)                     (((uint8_t)(((uint8_t)(x))<<PMC_LVDSC1_LVDACK_SHIFT))&PMC_LVDSC1_LVDACK_MASK) /*!< PMC_LVDSC1                              */
#define PMC_LVDSC1_LVDF_MASK                     (0x80U)                                             /*!< PMC_LVDSC1: LVDF Mask                   */
#define PMC_LVDSC1_LVDF_SHIFT                    (7U)                                                /*!< PMC_LVDSC1: LVDF Position               */
#define PMC_LVDSC1_LVDF(x)                       (((uint8_t)(((uint8_t)(x))<<PMC_LVDSC1_LVDF_SHIFT))&PMC_LVDSC1_LVDF_MASK) /*!< PMC_LVDSC1                              */
/* ------- LVDSC2 Bit Fields                        ------ */
#define PMC_LVDSC2_LVWIE_MASK                    (0x20U)                                             /*!< PMC_LVDSC2: LVWIE Mask                  */
#define PMC_LVDSC2_LVWIE_SHIFT                   (5U)                                                /*!< PMC_LVDSC2: LVWIE Position              */
#define PMC_LVDSC2_LVWIE(x)                      (((uint8_t)(((uint8_t)(x))<<PMC_LVDSC2_LVWIE_SHIFT))&PMC_LVDSC2_LVWIE_MASK) /*!< PMC_LVDSC2                              */
#define PMC_LVDSC2_LVWACK_MASK                   (0x40U)                                             /*!< PMC_LVDSC2: LVWACK Mask                 */
#define PMC_LVDSC2_LVWACK_SHIFT                  (6U)                                                /*!< PMC_LVDSC2: LVWACK Position             */
#define PMC_LVDSC2_LVWACK(x)                     (((uint8_t)(((uint8_t)(x))<<PMC_LVDSC2_LVWACK_SHIFT))&PMC_LVDSC2_LVWACK_MASK) /*!< PMC_LVDSC2                              */
#define PMC_LVDSC2_LVWF_MASK                     (0x80U)                                             /*!< PMC_LVDSC2: LVWF Mask                   */
#define PMC_LVDSC2_LVWF_SHIFT                    (7U)                                                /*!< PMC_LVDSC2: LVWF Position               */
#define PMC_LVDSC2_LVWF(x)                       (((uint8_t)(((uint8_t)(x))<<PMC_LVDSC2_LVWF_SHIFT))&PMC_LVDSC2_LVWF_MASK) /*!< PMC_LVDSC2                              */
/* ------- REGSC Bit Fields                         ------ */
#define PMC_REGSC_BIASEN_MASK                    (0x1U)                                              /*!< PMC_REGSC: BIASEN Mask                  */
#define PMC_REGSC_BIASEN_SHIFT                   (0U)                                                /*!< PMC_REGSC: BIASEN Position              */
#define PMC_REGSC_BIASEN(x)                      (((uint8_t)(((uint8_t)(x))<<PMC_REGSC_BIASEN_SHIFT))&PMC_REGSC_BIASEN_MASK) /*!< PMC_REGSC                               */
#define PMC_REGSC_CLKBIASDIS_MASK                (0x2U)                                              /*!< PMC_REGSC: CLKBIASDIS Mask              */
#define PMC_REGSC_CLKBIASDIS_SHIFT               (1U)                                                /*!< PMC_REGSC: CLKBIASDIS Position          */
#define PMC_REGSC_CLKBIASDIS(x)                  (((uint8_t)(((uint8_t)(x))<<PMC_REGSC_CLKBIASDIS_SHIFT))&PMC_REGSC_CLKBIASDIS_MASK) /*!< PMC_REGSC                               */
#define PMC_REGSC_REGFPM_MASK                    (0x4U)                                              /*!< PMC_REGSC: REGFPM Mask                  */
#define PMC_REGSC_REGFPM_SHIFT                   (2U)                                                /*!< PMC_REGSC: REGFPM Position              */
#define PMC_REGSC_REGFPM(x)                      (((uint8_t)(((uint8_t)(x))<<PMC_REGSC_REGFPM_SHIFT))&PMC_REGSC_REGFPM_MASK) /*!< PMC_REGSC                               */
#define PMC_REGSC_LPOSTAT_MASK                   (0x40U)                                             /*!< PMC_REGSC: LPOSTAT Mask                 */
#define PMC_REGSC_LPOSTAT_SHIFT                  (6U)                                                /*!< PMC_REGSC: LPOSTAT Position             */
#define PMC_REGSC_LPOSTAT(x)                     (((uint8_t)(((uint8_t)(x))<<PMC_REGSC_LPOSTAT_SHIFT))&PMC_REGSC_LPOSTAT_MASK) /*!< PMC_REGSC                               */
#define PMC_REGSC_LPODIS_MASK                    (0x80U)                                             /*!< PMC_REGSC: LPODIS Mask                  */
#define PMC_REGSC_LPODIS_SHIFT                   (7U)                                                /*!< PMC_REGSC: LPODIS Position              */
#define PMC_REGSC_LPODIS(x)                      (((uint8_t)(((uint8_t)(x))<<PMC_REGSC_LPODIS_SHIFT))&PMC_REGSC_LPODIS_MASK) /*!< PMC_REGSC                               */
/* ------- LPOTRIM Bit Fields                       ------ */
#define PMC_LPOTRIM_LPOTRIM_MASK                 (0x1FU)                                             /*!< PMC_LPOTRIM: LPOTRIM Mask               */
#define PMC_LPOTRIM_LPOTRIM_SHIFT                (0U)                                                /*!< PMC_LPOTRIM: LPOTRIM Position           */
#define PMC_LPOTRIM_LPOTRIM(x)                   (((uint8_t)(((uint8_t)(x))<<PMC_LPOTRIM_LPOTRIM_SHIFT))&PMC_LPOTRIM_LPOTRIM_MASK) /*!< PMC_LPOTRIM                             */
/**
 * @} */ /* End group PMC_Register_Masks_GROUP 
 */

/* PMC - Peripheral instance base addresses */
#define PMC_BasePtr                    0x4007D000UL //!< Peripheral base address
#define PMC                            ((PMC_Type *) PMC_BasePtr) //!< Freescale base pointer
#define PMC_BASE_PTR                   (PMC) //!< Freescale style base pointer
/**
 * @} */ /* End group PMC_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup PORTA_Peripheral_access_layer_GROUP PORTA Peripheral Access Layer
* @brief C Struct for PORTA
* @{
*/

/* ================================================================================ */
/* ================           PORTA (file:PORTA_MKE15Z7)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */
/**
* @addtogroup PORTA_structs_GROUP PORTA struct
* @brief Struct for PORTA
* @{
*/
typedef struct {                                /*       PORTA Structure                                              */
   __IO uint32_t  PCR[32];                      /**< 0000: Pin Control Register                                         */
   __O  uint32_t  GPCLR;                        /**< 0080: Global Pin Control Low Register                              */
   __O  uint32_t  GPCHR;                        /**< 0084: Global Pin Control High Register                             */
        uint8_t   RESERVED_0[24];              
   __IO uint32_t  ISFR;                         /**< 00A0: Interrupt Status Flag Register                               */
        uint8_t   RESERVED_1[28];              
   __IO uint32_t  DFER;                         /**< 00C0: Digital Filter Enable Register                               */
   __IO uint32_t  DFCR;                         /**< 00C4: Digital Filter Clock Register                                */
   __IO uint32_t  DFWR;                         /**< 00C8: Digital Filter Width Register                                */
} PORT_Type;

/**
 * @} */ /* End group PORTA_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'PORTA' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup PORTA_Register_Masks_GROUP PORTA Register Masks
* @brief Register Masks for PORTA
* @{
*/
/* ------- PCR Bit Fields                           ------ */
#define PORT_PCR_PS_MASK                         (0x1U)                                              /*!< PORTA_PCR: PS Mask                      */
#define PORT_PCR_PS_SHIFT                        (0U)                                                /*!< PORTA_PCR: PS Position                  */
#define PORT_PCR_PS(x)                           (((uint32_t)(((uint32_t)(x))<<PORT_PCR_PS_SHIFT))&PORT_PCR_PS_MASK) /*!< PORTA_PCR                               */
#define PORT_PCR_PE_MASK                         (0x2U)                                              /*!< PORTA_PCR: PE Mask                      */
#define PORT_PCR_PE_SHIFT                        (1U)                                                /*!< PORTA_PCR: PE Position                  */
#define PORT_PCR_PE(x)                           (((uint32_t)(((uint32_t)(x))<<PORT_PCR_PE_SHIFT))&PORT_PCR_PE_MASK) /*!< PORTA_PCR                               */
#define PORT_PCR_PFE_MASK                        (0x10U)                                             /*!< PORTA_PCR: PFE Mask                     */
#define PORT_PCR_PFE_SHIFT                       (4U)                                                /*!< PORTA_PCR: PFE Position                 */
#define PORT_PCR_PFE(x)                          (((uint32_t)(((uint32_t)(x))<<PORT_PCR_PFE_SHIFT))&PORT_PCR_PFE_MASK) /*!< PORTA_PCR                               */
#define PORT_PCR_DSE_MASK                        (0x40U)                                             /*!< PORTA_PCR: DSE Mask                     */
#define PORT_PCR_DSE_SHIFT                       (6U)                                                /*!< PORTA_PCR: DSE Position                 */
#define PORT_PCR_DSE(x)                          (((uint32_t)(((uint32_t)(x))<<PORT_PCR_DSE_SHIFT))&PORT_PCR_DSE_MASK) /*!< PORTA_PCR                               */
#define PORT_PCR_MUX_MASK                        (0x700U)                                            /*!< PORTA_PCR: MUX Mask                     */
#define PORT_PCR_MUX_SHIFT                       (8U)                                                /*!< PORTA_PCR: MUX Position                 */
#define PORT_PCR_MUX(x)                          (((uint32_t)(((uint32_t)(x))<<PORT_PCR_MUX_SHIFT))&PORT_PCR_MUX_MASK) /*!< PORTA_PCR                               */
#define PORT_PCR_LK_MASK                         (0x8000U)                                           /*!< PORTA_PCR: LK Mask                      */
#define PORT_PCR_LK_SHIFT                        (15U)                                               /*!< PORTA_PCR: LK Position                  */
#define PORT_PCR_LK(x)                           (((uint32_t)(((uint32_t)(x))<<PORT_PCR_LK_SHIFT))&PORT_PCR_LK_MASK) /*!< PORTA_PCR                               */
#define PORT_PCR_IRQC_MASK                       (0xF0000U)                                          /*!< PORTA_PCR: IRQC Mask                    */
#define PORT_PCR_IRQC_SHIFT                      (16U)                                               /*!< PORTA_PCR: IRQC Position                */
#define PORT_PCR_IRQC(x)                         (((uint32_t)(((uint32_t)(x))<<PORT_PCR_IRQC_SHIFT))&PORT_PCR_IRQC_MASK) /*!< PORTA_PCR                               */
#define PORT_PCR_ISF_MASK                        (0x1000000U)                                        /*!< PORTA_PCR: ISF Mask                     */
#define PORT_PCR_ISF_SHIFT                       (24U)                                               /*!< PORTA_PCR: ISF Position                 */
#define PORT_PCR_ISF(x)                          (((uint32_t)(((uint32_t)(x))<<PORT_PCR_ISF_SHIFT))&PORT_PCR_ISF_MASK) /*!< PORTA_PCR                               */
/* ------- GPCLR Bit Fields                         ------ */
#define PORT_GPCLR_GPWD_MASK                     (0xFFFFU)                                           /*!< PORTA_GPCLR: GPWD Mask                  */
#define PORT_GPCLR_GPWD_SHIFT                    (0U)                                                /*!< PORTA_GPCLR: GPWD Position              */
#define PORT_GPCLR_GPWD(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_GPCLR_GPWD_SHIFT))&PORT_GPCLR_GPWD_MASK) /*!< PORTA_GPCLR                             */
#define PORT_GPCLR_GPWE_MASK                     (0xFFFF0000U)                                       /*!< PORTA_GPCLR: GPWE Mask                  */
#define PORT_GPCLR_GPWE_SHIFT                    (16U)                                               /*!< PORTA_GPCLR: GPWE Position              */
#define PORT_GPCLR_GPWE(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_GPCLR_GPWE_SHIFT))&PORT_GPCLR_GPWE_MASK) /*!< PORTA_GPCLR                             */
/* ------- GPCHR Bit Fields                         ------ */
#define PORT_GPCHR_GPWD_MASK                     (0xFFFFU)                                           /*!< PORTA_GPCHR: GPWD Mask                  */
#define PORT_GPCHR_GPWD_SHIFT                    (0U)                                                /*!< PORTA_GPCHR: GPWD Position              */
#define PORT_GPCHR_GPWD(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_GPCHR_GPWD_SHIFT))&PORT_GPCHR_GPWD_MASK) /*!< PORTA_GPCHR                             */
#define PORT_GPCHR_GPWE_MASK                     (0xFFFF0000U)                                       /*!< PORTA_GPCHR: GPWE Mask                  */
#define PORT_GPCHR_GPWE_SHIFT                    (16U)                                               /*!< PORTA_GPCHR: GPWE Position              */
#define PORT_GPCHR_GPWE(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_GPCHR_GPWE_SHIFT))&PORT_GPCHR_GPWE_MASK) /*!< PORTA_GPCHR                             */
/* ------- ISFR Bit Fields                          ------ */
/* ------- DFER Bit Fields                          ------ */
/* ------- DFCR Bit Fields                          ------ */
#define PORT_DFCR_CS_MASK                        (0x1U)                                              /*!< PORTA_DFCR: CS Mask                     */
#define PORT_DFCR_CS_SHIFT                       (0U)                                                /*!< PORTA_DFCR: CS Position                 */
#define PORT_DFCR_CS(x)                          (((uint32_t)(((uint32_t)(x))<<PORT_DFCR_CS_SHIFT))&PORT_DFCR_CS_MASK) /*!< PORTA_DFCR                              */
/* ------- DFWR Bit Fields                          ------ */
#define PORT_DFWR_FILT_MASK                      (0x1FU)                                             /*!< PORTA_DFWR: FILT Mask                   */
#define PORT_DFWR_FILT_SHIFT                     (0U)                                                /*!< PORTA_DFWR: FILT Position               */
#define PORT_DFWR_FILT(x)                        (((uint32_t)(((uint32_t)(x))<<PORT_DFWR_FILT_SHIFT))&PORT_DFWR_FILT_MASK) /*!< PORTA_DFWR                              */
/**
 * @} */ /* End group PORTA_Register_Masks_GROUP 
 */

/* PORTA - Peripheral instance base addresses */
#define PORTA_BasePtr                  0x40049000UL //!< Peripheral base address
#define PORTA                          ((PORT_Type *) PORTA_BasePtr) //!< Freescale base pointer
#define PORTA_BASE_PTR                 (PORTA) //!< Freescale style base pointer
/**
 * @} */ /* End group PORTA_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup PORTA_Peripheral_access_layer_GROUP PORTA Peripheral Access Layer
* @brief C Struct for PORTA
* @{
*/

/* ================================================================================ */
/* ================           PORTB (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */

/* PORTB - Peripheral instance base addresses */
#define PORTB_BasePtr                  0x4004A000UL //!< Peripheral base address
#define PORTB                          ((PORT_Type *) PORTB_BasePtr) //!< Freescale base pointer
#define PORTB_BASE_PTR                 (PORTB) //!< Freescale style base pointer
/**
 * @} */ /* End group PORTA_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup PORTA_Peripheral_access_layer_GROUP PORTA Peripheral Access Layer
* @brief C Struct for PORTA
* @{
*/

/* ================================================================================ */
/* ================           PORTC (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */

/* PORTC - Peripheral instance base addresses */
#define PORTC_BasePtr                  0x4004B000UL //!< Peripheral base address
#define PORTC                          ((PORT_Type *) PORTC_BasePtr) //!< Freescale base pointer
#define PORTC_BASE_PTR                 (PORTC) //!< Freescale style base pointer
/**
 * @} */ /* End group PORTA_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup PORTA_Peripheral_access_layer_GROUP PORTA Peripheral Access Layer
* @brief C Struct for PORTA
* @{
*/

/* ================================================================================ */
/* ================           PORTD (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */

/* PORTD - Peripheral instance base addresses */
#define PORTD_BasePtr                  0x4004C000UL //!< Peripheral base address
#define PORTD                          ((PORT_Type *) PORTD_BasePtr) //!< Freescale base pointer
#define PORTD_BASE_PTR                 (PORTD) //!< Freescale style base pointer
/**
 * @} */ /* End group PORTA_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup PORTA_Peripheral_access_layer_GROUP PORTA Peripheral Access Layer
* @brief C Struct for PORTA
* @{
*/

/* ================================================================================ */
/* ================           PORTE (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */

/* PORTE - Peripheral instance base addresses */
#define PORTE_BasePtr                  0x4004D000UL //!< Peripheral base address
#define PORTE                          ((PORT_Type *) PORTE_BasePtr) //!< Freescale base pointer
#define PORTE_BASE_PTR                 (PORTE) //!< Freescale style base pointer
/**
 * @} */ /* End group PORTA_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup PWT_Peripheral_access_layer_GROUP PWT Peripheral Access Layer
* @brief C Struct for PWT
* @{
*/

/* ================================================================================ */
/* ================           PWT (file:PWT_MKE16F16)              ================ */
/* ================================================================================ */

/**
 * @brief Pulse Width Timer
 */
/**
* @addtogroup PWT_structs_GROUP PWT struct
* @brief Struct for PWT
* @{
*/
typedef struct {                                /*       PWT Structure                                                */
   __IO uint8_t   CS;                           /**< 0000: Pulse Width Timer Control and Status Register                */
   __IO uint8_t   CR;                           /**< 0001: Pulse Width Timer Control Register                           */
   __I  uint8_t   PPH;                          /**< 0002: Pulse Width Timer Positive Pulse Width Register: High        */
   __I  uint8_t   PPL;                          /**< 0003: Pulse Width Timer Positive Pulse Width Register: Loq         */
   __I  uint8_t   NPH;                          /**< 0004: Pulse Width Timer Negative Pulse Width Register: High        */
   __I  uint8_t   NPL;                          /**< 0005: Pulse Width Timer Negative Pulse Width Register: Low         */
   __I  uint8_t   CNTH;                         /**< 0006: Pulse Width Timer Counter Register: High                     */
   __I  uint8_t   CNTL;                         /**< 0007: Pulse Width Timer Counter Register: Low                      */
} PWT_Type;

/**
 * @} */ /* End group PWT_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'PWT' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup PWT_Register_Masks_GROUP PWT Register Masks
* @brief Register Masks for PWT
* @{
*/
/* ------- CS Bit Fields                            ------ */
#define PWT_CS_PWTOV_MASK                        (0x1U)                                              /*!< PWT_CS: PWTOV Mask                      */
#define PWT_CS_PWTOV_SHIFT                       (0U)                                                /*!< PWT_CS: PWTOV Position                  */
#define PWT_CS_PWTOV(x)                          (((uint8_t)(((uint8_t)(x))<<PWT_CS_PWTOV_SHIFT))&PWT_CS_PWTOV_MASK) /*!< PWT_CS                                  */
#define PWT_CS_PWTRDY_MASK                       (0x2U)                                              /*!< PWT_CS: PWTRDY Mask                     */
#define PWT_CS_PWTRDY_SHIFT                      (1U)                                                /*!< PWT_CS: PWTRDY Position                 */
#define PWT_CS_PWTRDY(x)                         (((uint8_t)(((uint8_t)(x))<<PWT_CS_PWTRDY_SHIFT))&PWT_CS_PWTRDY_MASK) /*!< PWT_CS                                  */
#define PWT_CS_FCTLE_MASK                        (0x4U)                                              /*!< PWT_CS: FCTLE Mask                      */
#define PWT_CS_FCTLE_SHIFT                       (2U)                                                /*!< PWT_CS: FCTLE Position                  */
#define PWT_CS_FCTLE(x)                          (((uint8_t)(((uint8_t)(x))<<PWT_CS_FCTLE_SHIFT))&PWT_CS_FCTLE_MASK) /*!< PWT_CS                                  */
#define PWT_CS_PWTSR_MASK                        (0x8U)                                              /*!< PWT_CS: PWTSR Mask                      */
#define PWT_CS_PWTSR_SHIFT                       (3U)                                                /*!< PWT_CS: PWTSR Position                  */
#define PWT_CS_PWTSR(x)                          (((uint8_t)(((uint8_t)(x))<<PWT_CS_PWTSR_SHIFT))&PWT_CS_PWTSR_MASK) /*!< PWT_CS                                  */
#define PWT_CS_POVIE_MASK                        (0x10U)                                             /*!< PWT_CS: POVIE Mask                      */
#define PWT_CS_POVIE_SHIFT                       (4U)                                                /*!< PWT_CS: POVIE Position                  */
#define PWT_CS_POVIE(x)                          (((uint8_t)(((uint8_t)(x))<<PWT_CS_POVIE_SHIFT))&PWT_CS_POVIE_MASK) /*!< PWT_CS                                  */
#define PWT_CS_PRDYIE_MASK                       (0x20U)                                             /*!< PWT_CS: PRDYIE Mask                     */
#define PWT_CS_PRDYIE_SHIFT                      (5U)                                                /*!< PWT_CS: PRDYIE Position                 */
#define PWT_CS_PRDYIE(x)                         (((uint8_t)(((uint8_t)(x))<<PWT_CS_PRDYIE_SHIFT))&PWT_CS_PRDYIE_MASK) /*!< PWT_CS                                  */
#define PWT_CS_PWTIE_MASK                        (0x40U)                                             /*!< PWT_CS: PWTIE Mask                      */
#define PWT_CS_PWTIE_SHIFT                       (6U)                                                /*!< PWT_CS: PWTIE Position                  */
#define PWT_CS_PWTIE(x)                          (((uint8_t)(((uint8_t)(x))<<PWT_CS_PWTIE_SHIFT))&PWT_CS_PWTIE_MASK) /*!< PWT_CS                                  */
#define PWT_CS_PWTEN_MASK                        (0x80U)                                             /*!< PWT_CS: PWTEN Mask                      */
#define PWT_CS_PWTEN_SHIFT                       (7U)                                                /*!< PWT_CS: PWTEN Position                  */
#define PWT_CS_PWTEN(x)                          (((uint8_t)(((uint8_t)(x))<<PWT_CS_PWTEN_SHIFT))&PWT_CS_PWTEN_MASK) /*!< PWT_CS                                  */
/* ------- CR Bit Fields                            ------ */
#define PWT_CR_PRE_MASK                          (0x7U)                                              /*!< PWT_CR: PRE Mask                        */
#define PWT_CR_PRE_SHIFT                         (0U)                                                /*!< PWT_CR: PRE Position                    */
#define PWT_CR_PRE(x)                            (((uint8_t)(((uint8_t)(x))<<PWT_CR_PRE_SHIFT))&PWT_CR_PRE_MASK) /*!< PWT_CR                                  */
#define PWT_CR_LVL_MASK                          (0x8U)                                              /*!< PWT_CR: LVL Mask                        */
#define PWT_CR_LVL_SHIFT                         (3U)                                                /*!< PWT_CR: LVL Position                    */
#define PWT_CR_LVL(x)                            (((uint8_t)(((uint8_t)(x))<<PWT_CR_LVL_SHIFT))&PWT_CR_LVL_MASK) /*!< PWT_CR                                  */
#define PWT_CR_TGL_MASK                          (0x10U)                                             /*!< PWT_CR: TGL Mask                        */
#define PWT_CR_TGL_SHIFT                         (4U)                                                /*!< PWT_CR: TGL Position                    */
#define PWT_CR_TGL(x)                            (((uint8_t)(((uint8_t)(x))<<PWT_CR_TGL_SHIFT))&PWT_CR_TGL_MASK) /*!< PWT_CR                                  */
#define PWT_CR_PINSEL_MASK                       (0x60U)                                             /*!< PWT_CR: PINSEL Mask                     */
#define PWT_CR_PINSEL_SHIFT                      (5U)                                                /*!< PWT_CR: PINSEL Position                 */
#define PWT_CR_PINSEL(x)                         (((uint8_t)(((uint8_t)(x))<<PWT_CR_PINSEL_SHIFT))&PWT_CR_PINSEL_MASK) /*!< PWT_CR                                  */
#define PWT_CR_PCLKS_MASK                        (0x80U)                                             /*!< PWT_CR: PCLKS Mask                      */
#define PWT_CR_PCLKS_SHIFT                       (7U)                                                /*!< PWT_CR: PCLKS Position                  */
#define PWT_CR_PCLKS(x)                          (((uint8_t)(((uint8_t)(x))<<PWT_CR_PCLKS_SHIFT))&PWT_CR_PCLKS_MASK) /*!< PWT_CR                                  */
/* ------- PPH Bit Fields                           ------ */
#define PWT_PPH_PPWH_MASK                        (0xFFU)                                             /*!< PWT_PPH: PPWH Mask                      */
#define PWT_PPH_PPWH_SHIFT                       (0U)                                                /*!< PWT_PPH: PPWH Position                  */
#define PWT_PPH_PPWH(x)                          (((uint8_t)(((uint8_t)(x))<<PWT_PPH_PPWH_SHIFT))&PWT_PPH_PPWH_MASK) /*!< PWT_PPH                                 */
/* ------- PPL Bit Fields                           ------ */
#define PWT_PPL_PPWL_MASK                        (0xFFU)                                             /*!< PWT_PPL: PPWL Mask                      */
#define PWT_PPL_PPWL_SHIFT                       (0U)                                                /*!< PWT_PPL: PPWL Position                  */
#define PWT_PPL_PPWL(x)                          (((uint8_t)(((uint8_t)(x))<<PWT_PPL_PPWL_SHIFT))&PWT_PPL_PPWL_MASK) /*!< PWT_PPL                                 */
/* ------- NPH Bit Fields                           ------ */
#define PWT_NPH_NPWH_MASK                        (0xFFU)                                             /*!< PWT_NPH: NPWH Mask                      */
#define PWT_NPH_NPWH_SHIFT                       (0U)                                                /*!< PWT_NPH: NPWH Position                  */
#define PWT_NPH_NPWH(x)                          (((uint8_t)(((uint8_t)(x))<<PWT_NPH_NPWH_SHIFT))&PWT_NPH_NPWH_MASK) /*!< PWT_NPH                                 */
/* ------- NPL Bit Fields                           ------ */
#define PWT_NPL_NPWL_MASK                        (0xFFU)                                             /*!< PWT_NPL: NPWL Mask                      */
#define PWT_NPL_NPWL_SHIFT                       (0U)                                                /*!< PWT_NPL: NPWL Position                  */
#define PWT_NPL_NPWL(x)                          (((uint8_t)(((uint8_t)(x))<<PWT_NPL_NPWL_SHIFT))&PWT_NPL_NPWL_MASK) /*!< PWT_NPL                                 */
/* ------- CNTH Bit Fields                          ------ */
#define PWT_CNTH_PWTH_MASK                       (0xFFU)                                             /*!< PWT_CNTH: PWTH Mask                     */
#define PWT_CNTH_PWTH_SHIFT                      (0U)                                                /*!< PWT_CNTH: PWTH Position                 */
#define PWT_CNTH_PWTH(x)                         (((uint8_t)(((uint8_t)(x))<<PWT_CNTH_PWTH_SHIFT))&PWT_CNTH_PWTH_MASK) /*!< PWT_CNTH                                */
/* ------- CNTL Bit Fields                          ------ */
#define PWT_CNTL_PWTL_MASK                       (0xFFU)                                             /*!< PWT_CNTL: PWTL Mask                     */
#define PWT_CNTL_PWTL_SHIFT                      (0U)                                                /*!< PWT_CNTL: PWTL Position                 */
#define PWT_CNTL_PWTL(x)                         (((uint8_t)(((uint8_t)(x))<<PWT_CNTL_PWTL_SHIFT))&PWT_CNTL_PWTL_MASK) /*!< PWT_CNTL                                */
/**
 * @} */ /* End group PWT_Register_Masks_GROUP 
 */

/* PWT - Peripheral instance base addresses */
#define PWT_BasePtr                    0x40056000UL //!< Peripheral base address
#define PWT                            ((PWT_Type *) PWT_BasePtr) //!< Freescale base pointer
#define PWT_BASE_PTR                   (PWT) //!< Freescale style base pointer
/**
 * @} */ /* End group PWT_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup RCM_Peripheral_access_layer_GROUP RCM Peripheral Access Layer
* @brief C Struct for RCM
* @{
*/

/* ================================================================================ */
/* ================           RCM (file:RCM_MKE15Z7)               ================ */
/* ================================================================================ */

/**
 * @brief Reset Control Module
 */
/**
* @addtogroup RCM_structs_GROUP RCM struct
* @brief Struct for RCM
* @{
*/
typedef struct {                                /*       RCM Structure                                                */
   __I  uint32_t  VERID;                        /**< 0000: Version ID Register                                          */
   __I  uint32_t  PARAM;                        /**< 0004: Parameter Register                                           */
   __I  uint32_t  SRS;                          /**< 0008: System Reset Status Register                                 */
   __IO uint32_t  RPC;                          /**< 000C: Reset Pin Control register                                   */
   __IO uint32_t  MR;                           /**< 0010: Mode Register                                                */
   __IO uint32_t  FM;                           /**< 0014: Force Mode Register                                          */
   __IO uint32_t  SSRS;                         /**< 0018: Sticky System Reset Status Register                          */
   __IO uint32_t  SRIE;                         /**< 001C: System Reset Interrupt Enable Register                       */
} RCM_Type;

/**
 * @} */ /* End group RCM_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'RCM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup RCM_Register_Masks_GROUP RCM Register Masks
* @brief Register Masks for RCM
* @{
*/
/* ------- VERID Bit Fields                         ------ */
#define RCM_VERID_FEATURE_MASK                   (0xFFFFU)                                           /*!< RCM_VERID: FEATURE Mask                 */
#define RCM_VERID_FEATURE_SHIFT                  (0U)                                                /*!< RCM_VERID: FEATURE Position             */
#define RCM_VERID_FEATURE(x)                     (((uint32_t)(((uint32_t)(x))<<RCM_VERID_FEATURE_SHIFT))&RCM_VERID_FEATURE_MASK) /*!< RCM_VERID                               */
#define RCM_VERID_MINOR_MASK                     (0xFF0000U)                                         /*!< RCM_VERID: MINOR Mask                   */
#define RCM_VERID_MINOR_SHIFT                    (16U)                                               /*!< RCM_VERID: MINOR Position               */
#define RCM_VERID_MINOR(x)                       (((uint32_t)(((uint32_t)(x))<<RCM_VERID_MINOR_SHIFT))&RCM_VERID_MINOR_MASK) /*!< RCM_VERID                               */
#define RCM_VERID_MAJOR_MASK                     (0xFF000000U)                                       /*!< RCM_VERID: MAJOR Mask                   */
#define RCM_VERID_MAJOR_SHIFT                    (24U)                                               /*!< RCM_VERID: MAJOR Position               */
#define RCM_VERID_MAJOR(x)                       (((uint32_t)(((uint32_t)(x))<<RCM_VERID_MAJOR_SHIFT))&RCM_VERID_MAJOR_MASK) /*!< RCM_VERID                               */
/* ------- PARAM Bit Fields                         ------ */
#define RCM_PARAM_EWAKEUP_MASK                   (0x1U)                                              /*!< RCM_PARAM: EWAKEUP Mask                 */
#define RCM_PARAM_EWAKEUP_SHIFT                  (0U)                                                /*!< RCM_PARAM: EWAKEUP Position             */
#define RCM_PARAM_EWAKEUP(x)                     (((uint32_t)(((uint32_t)(x))<<RCM_PARAM_EWAKEUP_SHIFT))&RCM_PARAM_EWAKEUP_MASK) /*!< RCM_PARAM                               */
#define RCM_PARAM_ELVD_MASK                      (0x2U)                                              /*!< RCM_PARAM: ELVD Mask                    */
#define RCM_PARAM_ELVD_SHIFT                     (1U)                                                /*!< RCM_PARAM: ELVD Position                */
#define RCM_PARAM_ELVD(x)                        (((uint32_t)(((uint32_t)(x))<<RCM_PARAM_ELVD_SHIFT))&RCM_PARAM_ELVD_MASK) /*!< RCM_PARAM                               */
#define RCM_PARAM_ELOC_MASK                      (0x4U)                                              /*!< RCM_PARAM: ELOC Mask                    */
#define RCM_PARAM_ELOC_SHIFT                     (2U)                                                /*!< RCM_PARAM: ELOC Position                */
#define RCM_PARAM_ELOC(x)                        (((uint32_t)(((uint32_t)(x))<<RCM_PARAM_ELOC_SHIFT))&RCM_PARAM_ELOC_MASK) /*!< RCM_PARAM                               */
#define RCM_PARAM_ELOL_MASK                      (0x8U)                                              /*!< RCM_PARAM: ELOL Mask                    */
#define RCM_PARAM_ELOL_SHIFT                     (3U)                                                /*!< RCM_PARAM: ELOL Position                */
#define RCM_PARAM_ELOL(x)                        (((uint32_t)(((uint32_t)(x))<<RCM_PARAM_ELOL_SHIFT))&RCM_PARAM_ELOL_MASK) /*!< RCM_PARAM                               */
#define RCM_PARAM_EWDOG_MASK                     (0x20U)                                             /*!< RCM_PARAM: EWDOG Mask                   */
#define RCM_PARAM_EWDOG_SHIFT                    (5U)                                                /*!< RCM_PARAM: EWDOG Position               */
#define RCM_PARAM_EWDOG(x)                       (((uint32_t)(((uint32_t)(x))<<RCM_PARAM_EWDOG_SHIFT))&RCM_PARAM_EWDOG_MASK) /*!< RCM_PARAM                               */
#define RCM_PARAM_EPIN_MASK                      (0x40U)                                             /*!< RCM_PARAM: EPIN Mask                    */
#define RCM_PARAM_EPIN_SHIFT                     (6U)                                                /*!< RCM_PARAM: EPIN Position                */
#define RCM_PARAM_EPIN(x)                        (((uint32_t)(((uint32_t)(x))<<RCM_PARAM_EPIN_SHIFT))&RCM_PARAM_EPIN_MASK) /*!< RCM_PARAM                               */
#define RCM_PARAM_EPOR_MASK                      (0x80U)                                             /*!< RCM_PARAM: EPOR Mask                    */
#define RCM_PARAM_EPOR_SHIFT                     (7U)                                                /*!< RCM_PARAM: EPOR Position                */
#define RCM_PARAM_EPOR(x)                        (((uint32_t)(((uint32_t)(x))<<RCM_PARAM_EPOR_SHIFT))&RCM_PARAM_EPOR_MASK) /*!< RCM_PARAM                               */
#define RCM_PARAM_EJTAG_MASK                     (0x100U)                                            /*!< RCM_PARAM: EJTAG Mask                   */
#define RCM_PARAM_EJTAG_SHIFT                    (8U)                                                /*!< RCM_PARAM: EJTAG Position               */
#define RCM_PARAM_EJTAG(x)                       (((uint32_t)(((uint32_t)(x))<<RCM_PARAM_EJTAG_SHIFT))&RCM_PARAM_EJTAG_MASK) /*!< RCM_PARAM                               */
#define RCM_PARAM_ELOCKUP_MASK                   (0x200U)                                            /*!< RCM_PARAM: ELOCKUP Mask                 */
#define RCM_PARAM_ELOCKUP_SHIFT                  (9U)                                                /*!< RCM_PARAM: ELOCKUP Position             */
#define RCM_PARAM_ELOCKUP(x)                     (((uint32_t)(((uint32_t)(x))<<RCM_PARAM_ELOCKUP_SHIFT))&RCM_PARAM_ELOCKUP_MASK) /*!< RCM_PARAM                               */
#define RCM_PARAM_ESW_MASK                       (0x400U)                                            /*!< RCM_PARAM: ESW Mask                     */
#define RCM_PARAM_ESW_SHIFT                      (10U)                                               /*!< RCM_PARAM: ESW Position                 */
#define RCM_PARAM_ESW(x)                         (((uint32_t)(((uint32_t)(x))<<RCM_PARAM_ESW_SHIFT))&RCM_PARAM_ESW_MASK) /*!< RCM_PARAM                               */
#define RCM_PARAM_EMDM_AP_MASK                   (0x800U)                                            /*!< RCM_PARAM: EMDM_AP Mask                 */
#define RCM_PARAM_EMDM_AP_SHIFT                  (11U)                                               /*!< RCM_PARAM: EMDM_AP Position             */
#define RCM_PARAM_EMDM_AP(x)                     (((uint32_t)(((uint32_t)(x))<<RCM_PARAM_EMDM_AP_SHIFT))&RCM_PARAM_EMDM_AP_MASK) /*!< RCM_PARAM                               */
#define RCM_PARAM_ESACKERR_MASK                  (0x2000U)                                           /*!< RCM_PARAM: ESACKERR Mask                */
#define RCM_PARAM_ESACKERR_SHIFT                 (13U)                                               /*!< RCM_PARAM: ESACKERR Position            */
#define RCM_PARAM_ESACKERR(x)                    (((uint32_t)(((uint32_t)(x))<<RCM_PARAM_ESACKERR_SHIFT))&RCM_PARAM_ESACKERR_MASK) /*!< RCM_PARAM                               */
#define RCM_PARAM_ETAMPER_MASK                   (0x8000U)                                           /*!< RCM_PARAM: ETAMPER Mask                 */
#define RCM_PARAM_ETAMPER_SHIFT                  (15U)                                               /*!< RCM_PARAM: ETAMPER Position             */
#define RCM_PARAM_ETAMPER(x)                     (((uint32_t)(((uint32_t)(x))<<RCM_PARAM_ETAMPER_SHIFT))&RCM_PARAM_ETAMPER_MASK) /*!< RCM_PARAM                               */
#define RCM_PARAM_ECORE1_MASK                    (0x10000U)                                          /*!< RCM_PARAM: ECORE1 Mask                  */
#define RCM_PARAM_ECORE1_SHIFT                   (16U)                                               /*!< RCM_PARAM: ECORE1 Position              */
#define RCM_PARAM_ECORE1(x)                      (((uint32_t)(((uint32_t)(x))<<RCM_PARAM_ECORE1_SHIFT))&RCM_PARAM_ECORE1_MASK) /*!< RCM_PARAM                               */
/* ------- SRS Bit Fields                           ------ */
#define RCM_SRS_LVD_MASK                         (0x2U)                                              /*!< RCM_SRS: LVD Mask                       */
#define RCM_SRS_LVD_SHIFT                        (1U)                                                /*!< RCM_SRS: LVD Position                   */
#define RCM_SRS_LVD(x)                           (((uint32_t)(((uint32_t)(x))<<RCM_SRS_LVD_SHIFT))&RCM_SRS_LVD_MASK) /*!< RCM_SRS                                 */
#define RCM_SRS_LOC_MASK                         (0x4U)                                              /*!< RCM_SRS: LOC Mask                       */
#define RCM_SRS_LOC_SHIFT                        (2U)                                                /*!< RCM_SRS: LOC Position                   */
#define RCM_SRS_LOC(x)                           (((uint32_t)(((uint32_t)(x))<<RCM_SRS_LOC_SHIFT))&RCM_SRS_LOC_MASK) /*!< RCM_SRS                                 */
#define RCM_SRS_LOL_MASK                         (0x8U)                                              /*!< RCM_SRS: LOL Mask                       */
#define RCM_SRS_LOL_SHIFT                        (3U)                                                /*!< RCM_SRS: LOL Position                   */
#define RCM_SRS_LOL(x)                           (((uint32_t)(((uint32_t)(x))<<RCM_SRS_LOL_SHIFT))&RCM_SRS_LOL_MASK) /*!< RCM_SRS                                 */
#define RCM_SRS_WDOG_MASK                        (0x20U)                                             /*!< RCM_SRS: WDOG Mask                      */
#define RCM_SRS_WDOG_SHIFT                       (5U)                                                /*!< RCM_SRS: WDOG Position                  */
#define RCM_SRS_WDOG(x)                          (((uint32_t)(((uint32_t)(x))<<RCM_SRS_WDOG_SHIFT))&RCM_SRS_WDOG_MASK) /*!< RCM_SRS                                 */
#define RCM_SRS_PIN_MASK                         (0x40U)                                             /*!< RCM_SRS: PIN Mask                       */
#define RCM_SRS_PIN_SHIFT                        (6U)                                                /*!< RCM_SRS: PIN Position                   */
#define RCM_SRS_PIN(x)                           (((uint32_t)(((uint32_t)(x))<<RCM_SRS_PIN_SHIFT))&RCM_SRS_PIN_MASK) /*!< RCM_SRS                                 */
#define RCM_SRS_POR_MASK                         (0x80U)                                             /*!< RCM_SRS: POR Mask                       */
#define RCM_SRS_POR_SHIFT                        (7U)                                                /*!< RCM_SRS: POR Position                   */
#define RCM_SRS_POR(x)                           (((uint32_t)(((uint32_t)(x))<<RCM_SRS_POR_SHIFT))&RCM_SRS_POR_MASK) /*!< RCM_SRS                                 */
#define RCM_SRS_LOCKUP_MASK                      (0x200U)                                            /*!< RCM_SRS: LOCKUP Mask                    */
#define RCM_SRS_LOCKUP_SHIFT                     (9U)                                                /*!< RCM_SRS: LOCKUP Position                */
#define RCM_SRS_LOCKUP(x)                        (((uint32_t)(((uint32_t)(x))<<RCM_SRS_LOCKUP_SHIFT))&RCM_SRS_LOCKUP_MASK) /*!< RCM_SRS                                 */
#define RCM_SRS_SW_MASK                          (0x400U)                                            /*!< RCM_SRS: SW Mask                        */
#define RCM_SRS_SW_SHIFT                         (10U)                                               /*!< RCM_SRS: SW Position                    */
#define RCM_SRS_SW(x)                            (((uint32_t)(((uint32_t)(x))<<RCM_SRS_SW_SHIFT))&RCM_SRS_SW_MASK) /*!< RCM_SRS                                 */
#define RCM_SRS_MDM_AP_MASK                      (0x800U)                                            /*!< RCM_SRS: MDM_AP Mask                    */
#define RCM_SRS_MDM_AP_SHIFT                     (11U)                                               /*!< RCM_SRS: MDM_AP Position                */
#define RCM_SRS_MDM_AP(x)                        (((uint32_t)(((uint32_t)(x))<<RCM_SRS_MDM_AP_SHIFT))&RCM_SRS_MDM_AP_MASK) /*!< RCM_SRS                                 */
#define RCM_SRS_SACKERR_MASK                     (0x2000U)                                           /*!< RCM_SRS: SACKERR Mask                   */
#define RCM_SRS_SACKERR_SHIFT                    (13U)                                               /*!< RCM_SRS: SACKERR Position               */
#define RCM_SRS_SACKERR(x)                       (((uint32_t)(((uint32_t)(x))<<RCM_SRS_SACKERR_SHIFT))&RCM_SRS_SACKERR_MASK) /*!< RCM_SRS                                 */
/* ------- RPC Bit Fields                           ------ */
#define RCM_RPC_RSTFLTSRW_MASK                   (0x3U)                                              /*!< RCM_RPC: RSTFLTSRW Mask                 */
#define RCM_RPC_RSTFLTSRW_SHIFT                  (0U)                                                /*!< RCM_RPC: RSTFLTSRW Position             */
#define RCM_RPC_RSTFLTSRW(x)                     (((uint32_t)(((uint32_t)(x))<<RCM_RPC_RSTFLTSRW_SHIFT))&RCM_RPC_RSTFLTSRW_MASK) /*!< RCM_RPC                                 */
#define RCM_RPC_RSTFLTSS_MASK                    (0x4U)                                              /*!< RCM_RPC: RSTFLTSS Mask                  */
#define RCM_RPC_RSTFLTSS_SHIFT                   (2U)                                                /*!< RCM_RPC: RSTFLTSS Position              */
#define RCM_RPC_RSTFLTSS(x)                      (((uint32_t)(((uint32_t)(x))<<RCM_RPC_RSTFLTSS_SHIFT))&RCM_RPC_RSTFLTSS_MASK) /*!< RCM_RPC                                 */
#define RCM_RPC_RSTFLTSEL_MASK                   (0x1F00U)                                           /*!< RCM_RPC: RSTFLTSEL Mask                 */
#define RCM_RPC_RSTFLTSEL_SHIFT                  (8U)                                                /*!< RCM_RPC: RSTFLTSEL Position             */
#define RCM_RPC_RSTFLTSEL(x)                     (((uint32_t)(((uint32_t)(x))<<RCM_RPC_RSTFLTSEL_SHIFT))&RCM_RPC_RSTFLTSEL_MASK) /*!< RCM_RPC                                 */
/* ------- MR Bit Fields                            ------ */
#define RCM_MR_BOOTROM_MASK                      (0x6U)                                              /*!< RCM_MR: BOOTROM Mask                    */
#define RCM_MR_BOOTROM_SHIFT                     (1U)                                                /*!< RCM_MR: BOOTROM Position                */
#define RCM_MR_BOOTROM(x)                        (((uint32_t)(((uint32_t)(x))<<RCM_MR_BOOTROM_SHIFT))&RCM_MR_BOOTROM_MASK) /*!< RCM_MR                                  */
/* ------- FM Bit Fields                            ------ */
#define RCM_FM_FORCEROM_MASK                     (0x6U)                                              /*!< RCM_FM: FORCEROM Mask                   */
#define RCM_FM_FORCEROM_SHIFT                    (1U)                                                /*!< RCM_FM: FORCEROM Position               */
#define RCM_FM_FORCEROM(x)                       (((uint32_t)(((uint32_t)(x))<<RCM_FM_FORCEROM_SHIFT))&RCM_FM_FORCEROM_MASK) /*!< RCM_FM                                  */
/* ------- SSRS Bit Fields                          ------ */
#define RCM_SSRS_SLVD_MASK                       (0x2U)                                              /*!< RCM_SSRS: SLVD Mask                     */
#define RCM_SSRS_SLVD_SHIFT                      (1U)                                                /*!< RCM_SSRS: SLVD Position                 */
#define RCM_SSRS_SLVD(x)                         (((uint32_t)(((uint32_t)(x))<<RCM_SSRS_SLVD_SHIFT))&RCM_SSRS_SLVD_MASK) /*!< RCM_SSRS                                */
#define RCM_SSRS_SLOC_MASK                       (0x4U)                                              /*!< RCM_SSRS: SLOC Mask                     */
#define RCM_SSRS_SLOC_SHIFT                      (2U)                                                /*!< RCM_SSRS: SLOC Position                 */
#define RCM_SSRS_SLOC(x)                         (((uint32_t)(((uint32_t)(x))<<RCM_SSRS_SLOC_SHIFT))&RCM_SSRS_SLOC_MASK) /*!< RCM_SSRS                                */
#define RCM_SSRS_SLOL_MASK                       (0x8U)                                              /*!< RCM_SSRS: SLOL Mask                     */
#define RCM_SSRS_SLOL_SHIFT                      (3U)                                                /*!< RCM_SSRS: SLOL Position                 */
#define RCM_SSRS_SLOL(x)                         (((uint32_t)(((uint32_t)(x))<<RCM_SSRS_SLOL_SHIFT))&RCM_SSRS_SLOL_MASK) /*!< RCM_SSRS                                */
#define RCM_SSRS_SWDOG_MASK                      (0x20U)                                             /*!< RCM_SSRS: SWDOG Mask                    */
#define RCM_SSRS_SWDOG_SHIFT                     (5U)                                                /*!< RCM_SSRS: SWDOG Position                */
#define RCM_SSRS_SWDOG(x)                        (((uint32_t)(((uint32_t)(x))<<RCM_SSRS_SWDOG_SHIFT))&RCM_SSRS_SWDOG_MASK) /*!< RCM_SSRS                                */
#define RCM_SSRS_SPIN_MASK                       (0x40U)                                             /*!< RCM_SSRS: SPIN Mask                     */
#define RCM_SSRS_SPIN_SHIFT                      (6U)                                                /*!< RCM_SSRS: SPIN Position                 */
#define RCM_SSRS_SPIN(x)                         (((uint32_t)(((uint32_t)(x))<<RCM_SSRS_SPIN_SHIFT))&RCM_SSRS_SPIN_MASK) /*!< RCM_SSRS                                */
#define RCM_SSRS_SPOR_MASK                       (0x80U)                                             /*!< RCM_SSRS: SPOR Mask                     */
#define RCM_SSRS_SPOR_SHIFT                      (7U)                                                /*!< RCM_SSRS: SPOR Position                 */
#define RCM_SSRS_SPOR(x)                         (((uint32_t)(((uint32_t)(x))<<RCM_SSRS_SPOR_SHIFT))&RCM_SSRS_SPOR_MASK) /*!< RCM_SSRS                                */
#define RCM_SSRS_SLOCKUP_MASK                    (0x200U)                                            /*!< RCM_SSRS: SLOCKUP Mask                  */
#define RCM_SSRS_SLOCKUP_SHIFT                   (9U)                                                /*!< RCM_SSRS: SLOCKUP Position              */
#define RCM_SSRS_SLOCKUP(x)                      (((uint32_t)(((uint32_t)(x))<<RCM_SSRS_SLOCKUP_SHIFT))&RCM_SSRS_SLOCKUP_MASK) /*!< RCM_SSRS                                */
#define RCM_SSRS_SSW_MASK                        (0x400U)                                            /*!< RCM_SSRS: SSW Mask                      */
#define RCM_SSRS_SSW_SHIFT                       (10U)                                               /*!< RCM_SSRS: SSW Position                  */
#define RCM_SSRS_SSW(x)                          (((uint32_t)(((uint32_t)(x))<<RCM_SSRS_SSW_SHIFT))&RCM_SSRS_SSW_MASK) /*!< RCM_SSRS                                */
#define RCM_SSRS_SMDM_AP_MASK                    (0x800U)                                            /*!< RCM_SSRS: SMDM_AP Mask                  */
#define RCM_SSRS_SMDM_AP_SHIFT                   (11U)                                               /*!< RCM_SSRS: SMDM_AP Position              */
#define RCM_SSRS_SMDM_AP(x)                      (((uint32_t)(((uint32_t)(x))<<RCM_SSRS_SMDM_AP_SHIFT))&RCM_SSRS_SMDM_AP_MASK) /*!< RCM_SSRS                                */
#define RCM_SSRS_SSACKERR_MASK                   (0x2000U)                                           /*!< RCM_SSRS: SSACKERR Mask                 */
#define RCM_SSRS_SSACKERR_SHIFT                  (13U)                                               /*!< RCM_SSRS: SSACKERR Position             */
#define RCM_SSRS_SSACKERR(x)                     (((uint32_t)(((uint32_t)(x))<<RCM_SSRS_SSACKERR_SHIFT))&RCM_SSRS_SSACKERR_MASK) /*!< RCM_SSRS                                */
/* ------- SRIE Bit Fields                          ------ */
#define RCM_SRIE_DELAY_MASK                      (0x3U)                                              /*!< RCM_SRIE: DELAY Mask                    */
#define RCM_SRIE_DELAY_SHIFT                     (0U)                                                /*!< RCM_SRIE: DELAY Position                */
#define RCM_SRIE_DELAY(x)                        (((uint32_t)(((uint32_t)(x))<<RCM_SRIE_DELAY_SHIFT))&RCM_SRIE_DELAY_MASK) /*!< RCM_SRIE                                */
#define RCM_SRIE_LOC_MASK                        (0x4U)                                              /*!< RCM_SRIE: LOC Mask                      */
#define RCM_SRIE_LOC_SHIFT                       (2U)                                                /*!< RCM_SRIE: LOC Position                  */
#define RCM_SRIE_LOC(x)                          (((uint32_t)(((uint32_t)(x))<<RCM_SRIE_LOC_SHIFT))&RCM_SRIE_LOC_MASK) /*!< RCM_SRIE                                */
#define RCM_SRIE_LOL_MASK                        (0x8U)                                              /*!< RCM_SRIE: LOL Mask                      */
#define RCM_SRIE_LOL_SHIFT                       (3U)                                                /*!< RCM_SRIE: LOL Position                  */
#define RCM_SRIE_LOL(x)                          (((uint32_t)(((uint32_t)(x))<<RCM_SRIE_LOL_SHIFT))&RCM_SRIE_LOL_MASK) /*!< RCM_SRIE                                */
#define RCM_SRIE_WDOG_MASK                       (0x20U)                                             /*!< RCM_SRIE: WDOG Mask                     */
#define RCM_SRIE_WDOG_SHIFT                      (5U)                                                /*!< RCM_SRIE: WDOG Position                 */
#define RCM_SRIE_WDOG(x)                         (((uint32_t)(((uint32_t)(x))<<RCM_SRIE_WDOG_SHIFT))&RCM_SRIE_WDOG_MASK) /*!< RCM_SRIE                                */
#define RCM_SRIE_PIN_MASK                        (0x40U)                                             /*!< RCM_SRIE: PIN Mask                      */
#define RCM_SRIE_PIN_SHIFT                       (6U)                                                /*!< RCM_SRIE: PIN Position                  */
#define RCM_SRIE_PIN(x)                          (((uint32_t)(((uint32_t)(x))<<RCM_SRIE_PIN_SHIFT))&RCM_SRIE_PIN_MASK) /*!< RCM_SRIE                                */
#define RCM_SRIE_GIE_MASK                        (0x80U)                                             /*!< RCM_SRIE: GIE Mask                      */
#define RCM_SRIE_GIE_SHIFT                       (7U)                                                /*!< RCM_SRIE: GIE Position                  */
#define RCM_SRIE_GIE(x)                          (((uint32_t)(((uint32_t)(x))<<RCM_SRIE_GIE_SHIFT))&RCM_SRIE_GIE_MASK) /*!< RCM_SRIE                                */
#define RCM_SRIE_LOCKUP_MASK                     (0x200U)                                            /*!< RCM_SRIE: LOCKUP Mask                   */
#define RCM_SRIE_LOCKUP_SHIFT                    (9U)                                                /*!< RCM_SRIE: LOCKUP Position               */
#define RCM_SRIE_LOCKUP(x)                       (((uint32_t)(((uint32_t)(x))<<RCM_SRIE_LOCKUP_SHIFT))&RCM_SRIE_LOCKUP_MASK) /*!< RCM_SRIE                                */
#define RCM_SRIE_SW_MASK                         (0x400U)                                            /*!< RCM_SRIE: SW Mask                       */
#define RCM_SRIE_SW_SHIFT                        (10U)                                               /*!< RCM_SRIE: SW Position                   */
#define RCM_SRIE_SW(x)                           (((uint32_t)(((uint32_t)(x))<<RCM_SRIE_SW_SHIFT))&RCM_SRIE_SW_MASK) /*!< RCM_SRIE                                */
#define RCM_SRIE_MDM_AP_MASK                     (0x800U)                                            /*!< RCM_SRIE: MDM_AP Mask                   */
#define RCM_SRIE_MDM_AP_SHIFT                    (11U)                                               /*!< RCM_SRIE: MDM_AP Position               */
#define RCM_SRIE_MDM_AP(x)                       (((uint32_t)(((uint32_t)(x))<<RCM_SRIE_MDM_AP_SHIFT))&RCM_SRIE_MDM_AP_MASK) /*!< RCM_SRIE                                */
#define RCM_SRIE_SACKERR_MASK                    (0x2000U)                                           /*!< RCM_SRIE: SACKERR Mask                  */
#define RCM_SRIE_SACKERR_SHIFT                   (13U)                                               /*!< RCM_SRIE: SACKERR Position              */
#define RCM_SRIE_SACKERR(x)                      (((uint32_t)(((uint32_t)(x))<<RCM_SRIE_SACKERR_SHIFT))&RCM_SRIE_SACKERR_MASK) /*!< RCM_SRIE                                */
/**
 * @} */ /* End group RCM_Register_Masks_GROUP 
 */

/* RCM - Peripheral instance base addresses */
#define RCM_BasePtr                    0x4007F000UL //!< Peripheral base address
#define RCM                            ((RCM_Type *) RCM_BasePtr) //!< Freescale base pointer
#define RCM_BASE_PTR                   (RCM) //!< Freescale style base pointer
/**
 * @} */ /* End group RCM_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup ROM_Peripheral_access_layer_GROUP ROM Peripheral Access Layer
* @brief C Struct for ROM
* @{
*/

/* ================================================================================ */
/* ================           ROM (file:ROM_MKE15Z7)               ================ */
/* ================================================================================ */

/**
 * @brief System ROM
 */
/**
* @addtogroup ROM_structs_GROUP ROM struct
* @brief Struct for ROM
* @{
*/
typedef struct {                                /*       ROM Structure                                                */
   __I  uint32_t  ENTRY[3];                     /**< 0000: Entry                                                        */
   __I  uint32_t  TABLEMARK;                    /**< 000C: End of Table Marker Register                                 */
        uint8_t   RESERVED_0[4028];            
   __I  uint32_t  SYSACCESS;                    /**< 0FCC: System Access Register                                       */
   __I  uint32_t  PERIPHID4;                    /**< 0FD0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID5;                    /**< 0FD4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID6;                    /**< 0FD8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID7;                    /**< 0FDC: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID0;                    /**< 0FE0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID1;                    /**< 0FE4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID2;                    /**< 0FE8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID3;                    /**< 0FEC: Peripheral ID Register                                       */
   __I  uint32_t  COMPID[4];                    /**< 0FF0: Component ID Register                                        */
} ROM_Type;

/**
 * @} */ /* End group ROM_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'ROM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup ROM_Register_Masks_GROUP ROM Register Masks
* @brief Register Masks for ROM
* @{
*/
/* ------- ENTRY Bit Fields                         ------ */
#define ROM_ENTRY_ENTRY_MASK                     (0xFFFFFFFFU)                                       /*!< ROM_ENTRY: ENTRY Mask                   */
#define ROM_ENTRY_ENTRY_SHIFT                    (0U)                                                /*!< ROM_ENTRY: ENTRY Position               */
#define ROM_ENTRY_ENTRY(x)                       (((uint32_t)(((uint32_t)(x))<<ROM_ENTRY_ENTRY_SHIFT))&ROM_ENTRY_ENTRY_MASK) /*!< ROM_ENTRY                               */
/* ------- TABLEMARK Bit Fields                     ------ */
#define ROM_TABLEMARK_MARK_MASK                  (0xFFFFFFFFU)                                       /*!< ROM_TABLEMARK: MARK Mask                */
#define ROM_TABLEMARK_MARK_SHIFT                 (0U)                                                /*!< ROM_TABLEMARK: MARK Position            */
#define ROM_TABLEMARK_MARK(x)                    (((uint32_t)(((uint32_t)(x))<<ROM_TABLEMARK_MARK_SHIFT))&ROM_TABLEMARK_MARK_MASK) /*!< ROM_TABLEMARK                           */
/* ------- SYSACCESS Bit Fields                     ------ */
#define ROM_SYSACCESS_SYSACCESS_MASK             (0xFFFFFFFFU)                                       /*!< ROM_SYSACCESS: SYSACCESS Mask           */
#define ROM_SYSACCESS_SYSACCESS_SHIFT            (0U)                                                /*!< ROM_SYSACCESS: SYSACCESS Position       */
#define ROM_SYSACCESS_SYSACCESS(x)               (((uint32_t)(((uint32_t)(x))<<ROM_SYSACCESS_SYSACCESS_SHIFT))&ROM_SYSACCESS_SYSACCESS_MASK) /*!< ROM_SYSACCESS                           */
/* ------- PERIPHID Bit Fields                      ------ */
#define ROM_PERIPHID_PERIPHID_MASK               (0xFFFFFFFFU)                                       /*!< ROM_PERIPHID: PERIPHID Mask             */
#define ROM_PERIPHID_PERIPHID_SHIFT              (0U)                                                /*!< ROM_PERIPHID: PERIPHID Position         */
#define ROM_PERIPHID_PERIPHID(x)                 (((uint32_t)(((uint32_t)(x))<<ROM_PERIPHID_PERIPHID_SHIFT))&ROM_PERIPHID_PERIPHID_MASK) /*!< ROM_PERIPHID                            */
/* ------- COMPID Bit Fields                        ------ */
#define ROM_COMPID_COMPID_MASK                   (0xFFFFFFFFU)                                       /*!< ROM_COMPID: COMPID Mask                 */
#define ROM_COMPID_COMPID_SHIFT                  (0U)                                                /*!< ROM_COMPID: COMPID Position             */
#define ROM_COMPID_COMPID(x)                     (((uint32_t)(((uint32_t)(x))<<ROM_COMPID_COMPID_SHIFT))&ROM_COMPID_COMPID_MASK) /*!< ROM_COMPID                              */
/**
 * @} */ /* End group ROM_Register_Masks_GROUP 
 */

/* ROM - Peripheral instance base addresses */
#define ROM_BasePtr                    0xF0002000UL //!< Peripheral base address
#define ROM                            ((ROM_Type *) ROM_BasePtr) //!< Freescale base pointer
#define ROM_BASE_PTR                   (ROM) //!< Freescale style base pointer
/**
 * @} */ /* End group ROM_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup RTC_Peripheral_access_layer_GROUP RTC Peripheral Access Layer
* @brief C Struct for RTC
* @{
*/

/* ================================================================================ */
/* ================           RTC (file:RTC_MKE15Z7)               ================ */
/* ================================================================================ */

/**
 * @brief Secure Real Time Clock
 */
/**
* @addtogroup RTC_structs_GROUP RTC struct
* @brief Struct for RTC
* @{
*/
typedef struct {                                /*       RTC Structure                                                */
   __IO uint32_t  TSR;                          /**< 0000: Time Seconds Register                                        */
   __IO uint32_t  TPR;                          /**< 0004: Time Prescaler Register                                      */
   __IO uint32_t  TAR;                          /**< 0008: Time Alarm Register                                          */
   __IO uint32_t  TCR;                          /**< 000C: Time Compensation Register                                   */
   __IO uint32_t  CR;                           /**< 0010: Control Register                                             */
   __IO uint32_t  SR;                           /**< 0014: Status Register                                              */
   __IO uint32_t  LR;                           /**< 0018: Lock Register                                                */
   __IO uint32_t  IER;                          /**< 001C: Interrupt Enable Register                                    */
        uint8_t   RESERVED_0[2016];            
   __IO uint32_t  WAR;                          /**< 0800: Write Access Register                                        */
   __IO uint32_t  RAR;                          /**< 0804: Read Access Register                                         */
} RTC_Type;

/**
 * @} */ /* End group RTC_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'RTC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup RTC_Register_Masks_GROUP RTC Register Masks
* @brief Register Masks for RTC
* @{
*/
/* ------- TSR Bit Fields                           ------ */
#define RTC_TSR_TSR_MASK                         (0xFFFFFFFFU)                                       /*!< RTC_TSR: TSR Mask                       */
#define RTC_TSR_TSR_SHIFT                        (0U)                                                /*!< RTC_TSR: TSR Position                   */
#define RTC_TSR_TSR(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_TSR_TSR_SHIFT))&RTC_TSR_TSR_MASK) /*!< RTC_TSR                                 */
/* ------- TPR Bit Fields                           ------ */
#define RTC_TPR_TPR_MASK                         (0xFFFFU)                                           /*!< RTC_TPR: TPR Mask                       */
#define RTC_TPR_TPR_SHIFT                        (0U)                                                /*!< RTC_TPR: TPR Position                   */
#define RTC_TPR_TPR(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_TPR_TPR_SHIFT))&RTC_TPR_TPR_MASK) /*!< RTC_TPR                                 */
/* ------- TAR Bit Fields                           ------ */
#define RTC_TAR_TAR_MASK                         (0xFFFFFFFFU)                                       /*!< RTC_TAR: TAR Mask                       */
#define RTC_TAR_TAR_SHIFT                        (0U)                                                /*!< RTC_TAR: TAR Position                   */
#define RTC_TAR_TAR(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_TAR_TAR_SHIFT))&RTC_TAR_TAR_MASK) /*!< RTC_TAR                                 */
/* ------- TCR Bit Fields                           ------ */
#define RTC_TCR_TCR_MASK                         (0xFFU)                                             /*!< RTC_TCR: TCR Mask                       */
#define RTC_TCR_TCR_SHIFT                        (0U)                                                /*!< RTC_TCR: TCR Position                   */
#define RTC_TCR_TCR(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_TCR_TCR_SHIFT))&RTC_TCR_TCR_MASK) /*!< RTC_TCR                                 */
#define RTC_TCR_CIR_MASK                         (0xFF00U)                                           /*!< RTC_TCR: CIR Mask                       */
#define RTC_TCR_CIR_SHIFT                        (8U)                                                /*!< RTC_TCR: CIR Position                   */
#define RTC_TCR_CIR(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_TCR_CIR_SHIFT))&RTC_TCR_CIR_MASK) /*!< RTC_TCR                                 */
#define RTC_TCR_TCV_MASK                         (0xFF0000U)                                         /*!< RTC_TCR: TCV Mask                       */
#define RTC_TCR_TCV_SHIFT                        (16U)                                               /*!< RTC_TCR: TCV Position                   */
#define RTC_TCR_TCV(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_TCR_TCV_SHIFT))&RTC_TCR_TCV_MASK) /*!< RTC_TCR                                 */
#define RTC_TCR_CIC_MASK                         (0xFF000000U)                                       /*!< RTC_TCR: CIC Mask                       */
#define RTC_TCR_CIC_SHIFT                        (24U)                                               /*!< RTC_TCR: CIC Position                   */
#define RTC_TCR_CIC(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_TCR_CIC_SHIFT))&RTC_TCR_CIC_MASK) /*!< RTC_TCR                                 */
/* ------- CR Bit Fields                            ------ */
#define RTC_CR_SWR_MASK                          (0x1U)                                              /*!< RTC_CR: SWR Mask                        */
#define RTC_CR_SWR_SHIFT                         (0U)                                                /*!< RTC_CR: SWR Position                    */
#define RTC_CR_SWR(x)                            (((uint32_t)(((uint32_t)(x))<<RTC_CR_SWR_SHIFT))&RTC_CR_SWR_MASK) /*!< RTC_CR                                  */
#define RTC_CR_WPE_MASK                          (0x2U)                                              /*!< RTC_CR: WPE Mask                        */
#define RTC_CR_WPE_SHIFT                         (1U)                                                /*!< RTC_CR: WPE Position                    */
#define RTC_CR_WPE(x)                            (((uint32_t)(((uint32_t)(x))<<RTC_CR_WPE_SHIFT))&RTC_CR_WPE_MASK) /*!< RTC_CR                                  */
#define RTC_CR_SUP_MASK                          (0x4U)                                              /*!< RTC_CR: SUP Mask                        */
#define RTC_CR_SUP_SHIFT                         (2U)                                                /*!< RTC_CR: SUP Position                    */
#define RTC_CR_SUP(x)                            (((uint32_t)(((uint32_t)(x))<<RTC_CR_SUP_SHIFT))&RTC_CR_SUP_MASK) /*!< RTC_CR                                  */
#define RTC_CR_UM_MASK                           (0x8U)                                              /*!< RTC_CR: UM Mask                         */
#define RTC_CR_UM_SHIFT                          (3U)                                                /*!< RTC_CR: UM Position                     */
#define RTC_CR_UM(x)                             (((uint32_t)(((uint32_t)(x))<<RTC_CR_UM_SHIFT))&RTC_CR_UM_MASK) /*!< RTC_CR                                  */
#define RTC_CR_WPS_MASK                          (0x10U)                                             /*!< RTC_CR: WPS Mask                        */
#define RTC_CR_WPS_SHIFT                         (4U)                                                /*!< RTC_CR: WPS Position                    */
#define RTC_CR_WPS(x)                            (((uint32_t)(((uint32_t)(x))<<RTC_CR_WPS_SHIFT))&RTC_CR_WPS_MASK) /*!< RTC_CR                                  */
#define RTC_CR_CPS_MASK                          (0x20U)                                             /*!< RTC_CR: CPS Mask                        */
#define RTC_CR_CPS_SHIFT                         (5U)                                                /*!< RTC_CR: CPS Position                    */
#define RTC_CR_CPS(x)                            (((uint32_t)(((uint32_t)(x))<<RTC_CR_CPS_SHIFT))&RTC_CR_CPS_MASK) /*!< RTC_CR                                  */
#define RTC_CR_LPOS_MASK                         (0x80U)                                             /*!< RTC_CR: LPOS Mask                       */
#define RTC_CR_LPOS_SHIFT                        (7U)                                                /*!< RTC_CR: LPOS Position                   */
#define RTC_CR_LPOS(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_CR_LPOS_SHIFT))&RTC_CR_LPOS_MASK) /*!< RTC_CR                                  */
#define RTC_CR_OSCE_MASK                         (0x100U)                                            /*!< RTC_CR: OSCE Mask                       */
#define RTC_CR_OSCE_SHIFT                        (8U)                                                /*!< RTC_CR: OSCE Position                   */
#define RTC_CR_OSCE(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_CR_OSCE_SHIFT))&RTC_CR_OSCE_MASK) /*!< RTC_CR                                  */
#define RTC_CR_CLKO_MASK                         (0x200U)                                            /*!< RTC_CR: CLKO Mask                       */
#define RTC_CR_CLKO_SHIFT                        (9U)                                                /*!< RTC_CR: CLKO Position                   */
#define RTC_CR_CLKO(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_CR_CLKO_SHIFT))&RTC_CR_CLKO_MASK) /*!< RTC_CR                                  */
#define RTC_CR_CPE_MASK                          (0x3000000U)                                        /*!< RTC_CR: CPE Mask                        */
#define RTC_CR_CPE_SHIFT                         (24U)                                               /*!< RTC_CR: CPE Position                    */
#define RTC_CR_CPE(x)                            (((uint32_t)(((uint32_t)(x))<<RTC_CR_CPE_SHIFT))&RTC_CR_CPE_MASK) /*!< RTC_CR                                  */
/* ------- SR Bit Fields                            ------ */
#define RTC_SR_TIF_MASK                          (0x1U)                                              /*!< RTC_SR: TIF Mask                        */
#define RTC_SR_TIF_SHIFT                         (0U)                                                /*!< RTC_SR: TIF Position                    */
#define RTC_SR_TIF(x)                            (((uint32_t)(((uint32_t)(x))<<RTC_SR_TIF_SHIFT))&RTC_SR_TIF_MASK) /*!< RTC_SR                                  */
#define RTC_SR_TOF_MASK                          (0x2U)                                              /*!< RTC_SR: TOF Mask                        */
#define RTC_SR_TOF_SHIFT                         (1U)                                                /*!< RTC_SR: TOF Position                    */
#define RTC_SR_TOF(x)                            (((uint32_t)(((uint32_t)(x))<<RTC_SR_TOF_SHIFT))&RTC_SR_TOF_MASK) /*!< RTC_SR                                  */
#define RTC_SR_TAF_MASK                          (0x4U)                                              /*!< RTC_SR: TAF Mask                        */
#define RTC_SR_TAF_SHIFT                         (2U)                                                /*!< RTC_SR: TAF Position                    */
#define RTC_SR_TAF(x)                            (((uint32_t)(((uint32_t)(x))<<RTC_SR_TAF_SHIFT))&RTC_SR_TAF_MASK) /*!< RTC_SR                                  */
#define RTC_SR_TCE_MASK                          (0x10U)                                             /*!< RTC_SR: TCE Mask                        */
#define RTC_SR_TCE_SHIFT                         (4U)                                                /*!< RTC_SR: TCE Position                    */
#define RTC_SR_TCE(x)                            (((uint32_t)(((uint32_t)(x))<<RTC_SR_TCE_SHIFT))&RTC_SR_TCE_MASK) /*!< RTC_SR                                  */
/* ------- LR Bit Fields                            ------ */
#define RTC_LR_TCL_MASK                          (0x8U)                                              /*!< RTC_LR: TCL Mask                        */
#define RTC_LR_TCL_SHIFT                         (3U)                                                /*!< RTC_LR: TCL Position                    */
#define RTC_LR_TCL(x)                            (((uint32_t)(((uint32_t)(x))<<RTC_LR_TCL_SHIFT))&RTC_LR_TCL_MASK) /*!< RTC_LR                                  */
#define RTC_LR_CRL_MASK                          (0x10U)                                             /*!< RTC_LR: CRL Mask                        */
#define RTC_LR_CRL_SHIFT                         (4U)                                                /*!< RTC_LR: CRL Position                    */
#define RTC_LR_CRL(x)                            (((uint32_t)(((uint32_t)(x))<<RTC_LR_CRL_SHIFT))&RTC_LR_CRL_MASK) /*!< RTC_LR                                  */
#define RTC_LR_SRL_MASK                          (0x20U)                                             /*!< RTC_LR: SRL Mask                        */
#define RTC_LR_SRL_SHIFT                         (5U)                                                /*!< RTC_LR: SRL Position                    */
#define RTC_LR_SRL(x)                            (((uint32_t)(((uint32_t)(x))<<RTC_LR_SRL_SHIFT))&RTC_LR_SRL_MASK) /*!< RTC_LR                                  */
#define RTC_LR_LRL_MASK                          (0x40U)                                             /*!< RTC_LR: LRL Mask                        */
#define RTC_LR_LRL_SHIFT                         (6U)                                                /*!< RTC_LR: LRL Position                    */
#define RTC_LR_LRL(x)                            (((uint32_t)(((uint32_t)(x))<<RTC_LR_LRL_SHIFT))&RTC_LR_LRL_MASK) /*!< RTC_LR                                  */
/* ------- IER Bit Fields                           ------ */
#define RTC_IER_TIIE_MASK                        (0x1U)                                              /*!< RTC_IER: TIIE Mask                      */
#define RTC_IER_TIIE_SHIFT                       (0U)                                                /*!< RTC_IER: TIIE Position                  */
#define RTC_IER_TIIE(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_IER_TIIE_SHIFT))&RTC_IER_TIIE_MASK) /*!< RTC_IER                                 */
#define RTC_IER_TOIE_MASK                        (0x2U)                                              /*!< RTC_IER: TOIE Mask                      */
#define RTC_IER_TOIE_SHIFT                       (1U)                                                /*!< RTC_IER: TOIE Position                  */
#define RTC_IER_TOIE(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_IER_TOIE_SHIFT))&RTC_IER_TOIE_MASK) /*!< RTC_IER                                 */
#define RTC_IER_TAIE_MASK                        (0x4U)                                              /*!< RTC_IER: TAIE Mask                      */
#define RTC_IER_TAIE_SHIFT                       (2U)                                                /*!< RTC_IER: TAIE Position                  */
#define RTC_IER_TAIE(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_IER_TAIE_SHIFT))&RTC_IER_TAIE_MASK) /*!< RTC_IER                                 */
#define RTC_IER_TSIE_MASK                        (0x10U)                                             /*!< RTC_IER: TSIE Mask                      */
#define RTC_IER_TSIE_SHIFT                       (4U)                                                /*!< RTC_IER: TSIE Position                  */
#define RTC_IER_TSIE(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_IER_TSIE_SHIFT))&RTC_IER_TSIE_MASK) /*!< RTC_IER                                 */
#define RTC_IER_WPON_MASK                        (0x80U)                                             /*!< RTC_IER: WPON Mask                      */
#define RTC_IER_WPON_SHIFT                       (7U)                                                /*!< RTC_IER: WPON Position                  */
#define RTC_IER_WPON(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_IER_WPON_SHIFT))&RTC_IER_WPON_MASK) /*!< RTC_IER                                 */
#define RTC_IER_TSIC_MASK                        (0x70000U)                                          /*!< RTC_IER: TSIC Mask                      */
#define RTC_IER_TSIC_SHIFT                       (16U)                                               /*!< RTC_IER: TSIC Position                  */
#define RTC_IER_TSIC(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_IER_TSIC_SHIFT))&RTC_IER_TSIC_MASK) /*!< RTC_IER                                 */
/* ------- WAR Bit Fields                           ------ */
#define RTC_WAR_TSRW_MASK                        (0x1U)                                              /*!< RTC_WAR: TSRW Mask                      */
#define RTC_WAR_TSRW_SHIFT                       (0U)                                                /*!< RTC_WAR: TSRW Position                  */
#define RTC_WAR_TSRW(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_WAR_TSRW_SHIFT))&RTC_WAR_TSRW_MASK) /*!< RTC_WAR                                 */
#define RTC_WAR_TPRW_MASK                        (0x2U)                                              /*!< RTC_WAR: TPRW Mask                      */
#define RTC_WAR_TPRW_SHIFT                       (1U)                                                /*!< RTC_WAR: TPRW Position                  */
#define RTC_WAR_TPRW(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_WAR_TPRW_SHIFT))&RTC_WAR_TPRW_MASK) /*!< RTC_WAR                                 */
#define RTC_WAR_TARW_MASK                        (0x4U)                                              /*!< RTC_WAR: TARW Mask                      */
#define RTC_WAR_TARW_SHIFT                       (2U)                                                /*!< RTC_WAR: TARW Position                  */
#define RTC_WAR_TARW(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_WAR_TARW_SHIFT))&RTC_WAR_TARW_MASK) /*!< RTC_WAR                                 */
#define RTC_WAR_TCRW_MASK                        (0x8U)                                              /*!< RTC_WAR: TCRW Mask                      */
#define RTC_WAR_TCRW_SHIFT                       (3U)                                                /*!< RTC_WAR: TCRW Position                  */
#define RTC_WAR_TCRW(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_WAR_TCRW_SHIFT))&RTC_WAR_TCRW_MASK) /*!< RTC_WAR                                 */
#define RTC_WAR_CRW_MASK                         (0x10U)                                             /*!< RTC_WAR: CRW Mask                       */
#define RTC_WAR_CRW_SHIFT                        (4U)                                                /*!< RTC_WAR: CRW Position                   */
#define RTC_WAR_CRW(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_WAR_CRW_SHIFT))&RTC_WAR_CRW_MASK) /*!< RTC_WAR                                 */
#define RTC_WAR_SRW_MASK                         (0x20U)                                             /*!< RTC_WAR: SRW Mask                       */
#define RTC_WAR_SRW_SHIFT                        (5U)                                                /*!< RTC_WAR: SRW Position                   */
#define RTC_WAR_SRW(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_WAR_SRW_SHIFT))&RTC_WAR_SRW_MASK) /*!< RTC_WAR                                 */
#define RTC_WAR_LRW_MASK                         (0x40U)                                             /*!< RTC_WAR: LRW Mask                       */
#define RTC_WAR_LRW_SHIFT                        (6U)                                                /*!< RTC_WAR: LRW Position                   */
#define RTC_WAR_LRW(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_WAR_LRW_SHIFT))&RTC_WAR_LRW_MASK) /*!< RTC_WAR                                 */
#define RTC_WAR_IERW_MASK                        (0x80U)                                             /*!< RTC_WAR: IERW Mask                      */
#define RTC_WAR_IERW_SHIFT                       (7U)                                                /*!< RTC_WAR: IERW Position                  */
#define RTC_WAR_IERW(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_WAR_IERW_SHIFT))&RTC_WAR_IERW_MASK) /*!< RTC_WAR                                 */
/* ------- RAR Bit Fields                           ------ */
#define RTC_RAR_TSRR_MASK                        (0x1U)                                              /*!< RTC_RAR: TSRR Mask                      */
#define RTC_RAR_TSRR_SHIFT                       (0U)                                                /*!< RTC_RAR: TSRR Position                  */
#define RTC_RAR_TSRR(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_RAR_TSRR_SHIFT))&RTC_RAR_TSRR_MASK) /*!< RTC_RAR                                 */
#define RTC_RAR_TPRR_MASK                        (0x2U)                                              /*!< RTC_RAR: TPRR Mask                      */
#define RTC_RAR_TPRR_SHIFT                       (1U)                                                /*!< RTC_RAR: TPRR Position                  */
#define RTC_RAR_TPRR(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_RAR_TPRR_SHIFT))&RTC_RAR_TPRR_MASK) /*!< RTC_RAR                                 */
#define RTC_RAR_TARR_MASK                        (0x4U)                                              /*!< RTC_RAR: TARR Mask                      */
#define RTC_RAR_TARR_SHIFT                       (2U)                                                /*!< RTC_RAR: TARR Position                  */
#define RTC_RAR_TARR(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_RAR_TARR_SHIFT))&RTC_RAR_TARR_MASK) /*!< RTC_RAR                                 */
#define RTC_RAR_TCRR_MASK                        (0x8U)                                              /*!< RTC_RAR: TCRR Mask                      */
#define RTC_RAR_TCRR_SHIFT                       (3U)                                                /*!< RTC_RAR: TCRR Position                  */
#define RTC_RAR_TCRR(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_RAR_TCRR_SHIFT))&RTC_RAR_TCRR_MASK) /*!< RTC_RAR                                 */
#define RTC_RAR_CRR_MASK                         (0x10U)                                             /*!< RTC_RAR: CRR Mask                       */
#define RTC_RAR_CRR_SHIFT                        (4U)                                                /*!< RTC_RAR: CRR Position                   */
#define RTC_RAR_CRR(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_RAR_CRR_SHIFT))&RTC_RAR_CRR_MASK) /*!< RTC_RAR                                 */
#define RTC_RAR_SRR_MASK                         (0x20U)                                             /*!< RTC_RAR: SRR Mask                       */
#define RTC_RAR_SRR_SHIFT                        (5U)                                                /*!< RTC_RAR: SRR Position                   */
#define RTC_RAR_SRR(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_RAR_SRR_SHIFT))&RTC_RAR_SRR_MASK) /*!< RTC_RAR                                 */
#define RTC_RAR_LRR_MASK                         (0x40U)                                             /*!< RTC_RAR: LRR Mask                       */
#define RTC_RAR_LRR_SHIFT                        (6U)                                                /*!< RTC_RAR: LRR Position                   */
#define RTC_RAR_LRR(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_RAR_LRR_SHIFT))&RTC_RAR_LRR_MASK) /*!< RTC_RAR                                 */
#define RTC_RAR_IERR_MASK                        (0x80U)                                             /*!< RTC_RAR: IERR Mask                      */
#define RTC_RAR_IERR_SHIFT                       (7U)                                                /*!< RTC_RAR: IERR Position                  */
#define RTC_RAR_IERR(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_RAR_IERR_SHIFT))&RTC_RAR_IERR_MASK) /*!< RTC_RAR                                 */
/**
 * @} */ /* End group RTC_Register_Masks_GROUP 
 */

/* RTC - Peripheral instance base addresses */
#define RTC_BasePtr                    0x4003D000UL //!< Peripheral base address
#define RTC                            ((RTC_Type *) RTC_BasePtr) //!< Freescale base pointer
#define RTC_BASE_PTR                   (RTC) //!< Freescale style base pointer
/**
 * @} */ /* End group RTC_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup SCG_Peripheral_access_layer_GROUP SCG Peripheral Access Layer
* @brief C Struct for SCG
* @{
*/

/* ================================================================================ */
/* ================           SCG (file:SCG_MKE15Z7)               ================ */
/* ================================================================================ */

/**
 * @brief System Clock Generator
 */
/**
* @addtogroup SCG_structs_GROUP SCG struct
* @brief Struct for SCG
* @{
*/
typedef struct {                                /*       SCG Structure                                                */
   __I  uint32_t  VERID;                        /**< 0000: Version ID Register                                          */
   __I  uint32_t  PARAM;                        /**< 0004: Parameter Register                                           */
        uint8_t   RESERVED_0[8];               
   __I  uint32_t  CSR;                          /**< 0010: Clock Status Register                                        */
   __IO uint32_t  RCCR;                         /**< 0014: Run Clock Control Register                                   */
   __IO uint32_t  VCCR;                         /**< 0018: VLPR Clock Control Register                                  */
        uint8_t   RESERVED_1[4];               
   __IO uint32_t  CLKOUTCNFG;                   /**< 0020: SCG CLKOUT Configuration Register                            */
        uint8_t   RESERVED_2[220];             
   __IO uint32_t  SOSCCSR;                      /**< 0100: System OSC Control Status Register                           */
   __IO uint32_t  SOSCDIV;                      /**< 0104: System OSC Divide Register                                   */
   __IO uint32_t  SOSCCFG;                      /**< 0108: System Oscillator Configuration Register                     */
        uint8_t   RESERVED_3[244];             
   __IO uint32_t  SIRCCSR;                      /**< 0200: Slow IRC Control Status Register                             */
   __IO uint32_t  SIRCDIV;                      /**< 0204: Slow IRC Divide Register                                     */
   __IO uint32_t  SIRCCFG;                      /**< 0208: Slow IRC Configuration Register                              */
        uint8_t   RESERVED_4[244];             
   __IO uint32_t  FIRCCSR;                      /**< 0300: Fast IRC Control Status Register                             */
   __IO uint32_t  FIRCDIV;                      /**< 0304: Fast IRC Divide Register                                     */
   __IO uint32_t  FIRCCFG;                      /**< 0308: Fast IRC Configuration Register                              */
   __IO uint32_t  FIRCTCFG;                     /**< 030C: Fast IRC Trim Configuration Register                         */
        uint8_t   RESERVED_5[8];               
   __IO uint32_t  FIRCSTAT;                     /**< 0318: Fast IRC Status Register                                     */
        uint8_t   RESERVED_6[484];             
   __IO uint32_t  LPFLLCSR;                     /**< 0500: Low Power FLL Control Status Register                        */
   __IO uint32_t  LPFLLDIV;                     /**< 0504: Low Power FLL Divide Register                                */
   __IO uint32_t  LPFLLCFG;                     /**< 0508: Low Power FLL Configuration Register                         */
   __IO uint32_t  LPFLLTCFG;                    /**< 050C: Low Power FLL Trim Configuration Register                    */
        uint8_t   RESERVED_7[4];               
   __IO uint32_t  LPFLLSTAT;                    /**< 0514: Low Power FLL Status Register                                */
} SCG_Type;

/**
 * @} */ /* End group SCG_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'SCG' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup SCG_Register_Masks_GROUP SCG Register Masks
* @brief Register Masks for SCG
* @{
*/
/* ------- VERID Bit Fields                         ------ */
#define SCG_VERID_VERSION_MASK                   (0xFFFFFFFFU)                                       /*!< SCG_VERID: VERSION Mask                 */
#define SCG_VERID_VERSION_SHIFT                  (0U)                                                /*!< SCG_VERID: VERSION Position             */
#define SCG_VERID_VERSION(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_VERID_VERSION_SHIFT))&SCG_VERID_VERSION_MASK) /*!< SCG_VERID                               */
/* ------- PARAM Bit Fields                         ------ */
#define SCG_PARAM_CLKPRES_MASK                   (0xFFU)                                             /*!< SCG_PARAM: CLKPRES Mask                 */
#define SCG_PARAM_CLKPRES_SHIFT                  (0U)                                                /*!< SCG_PARAM: CLKPRES Position             */
#define SCG_PARAM_CLKPRES(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_PARAM_CLKPRES_SHIFT))&SCG_PARAM_CLKPRES_MASK) /*!< SCG_PARAM                               */
#define SCG_PARAM_DIVPRES_MASK                   (0xF8000000U)                                       /*!< SCG_PARAM: DIVPRES Mask                 */
#define SCG_PARAM_DIVPRES_SHIFT                  (27U)                                               /*!< SCG_PARAM: DIVPRES Position             */
#define SCG_PARAM_DIVPRES(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_PARAM_DIVPRES_SHIFT))&SCG_PARAM_DIVPRES_MASK) /*!< SCG_PARAM                               */
/* ------- CSR Bit Fields                           ------ */
#define SCG_CSR_DIVSLOW_MASK                     (0xFU)                                              /*!< SCG_CSR: DIVSLOW Mask                   */
#define SCG_CSR_DIVSLOW_SHIFT                    (0U)                                                /*!< SCG_CSR: DIVSLOW Position               */
#define SCG_CSR_DIVSLOW(x)                       (((uint32_t)(((uint32_t)(x))<<SCG_CSR_DIVSLOW_SHIFT))&SCG_CSR_DIVSLOW_MASK) /*!< SCG_CSR                                 */
#define SCG_CSR_DIVCORE_MASK                     (0xF0000U)                                          /*!< SCG_CSR: DIVCORE Mask                   */
#define SCG_CSR_DIVCORE_SHIFT                    (16U)                                               /*!< SCG_CSR: DIVCORE Position               */
#define SCG_CSR_DIVCORE(x)                       (((uint32_t)(((uint32_t)(x))<<SCG_CSR_DIVCORE_SHIFT))&SCG_CSR_DIVCORE_MASK) /*!< SCG_CSR                                 */
#define SCG_CSR_SCS_MASK                         (0xF000000U)                                        /*!< SCG_CSR: SCS Mask                       */
#define SCG_CSR_SCS_SHIFT                        (24U)                                               /*!< SCG_CSR: SCS Position                   */
#define SCG_CSR_SCS(x)                           (((uint32_t)(((uint32_t)(x))<<SCG_CSR_SCS_SHIFT))&SCG_CSR_SCS_MASK) /*!< SCG_CSR                                 */
/* ------- RCCR Bit Fields                          ------ */
#define SCG_RCCR_DIVSLOW_MASK                    (0xFU)                                              /*!< SCG_RCCR: DIVSLOW Mask                  */
#define SCG_RCCR_DIVSLOW_SHIFT                   (0U)                                                /*!< SCG_RCCR: DIVSLOW Position              */
#define SCG_RCCR_DIVSLOW(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_DIVSLOW_SHIFT))&SCG_RCCR_DIVSLOW_MASK) /*!< SCG_RCCR                                */
#define SCG_RCCR_DIVCORE_MASK                    (0xF0000U)                                          /*!< SCG_RCCR: DIVCORE Mask                  */
#define SCG_RCCR_DIVCORE_SHIFT                   (16U)                                               /*!< SCG_RCCR: DIVCORE Position              */
#define SCG_RCCR_DIVCORE(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_DIVCORE_SHIFT))&SCG_RCCR_DIVCORE_MASK) /*!< SCG_RCCR                                */
#define SCG_RCCR_SCS_MASK                        (0xF000000U)                                        /*!< SCG_RCCR: SCS Mask                      */
#define SCG_RCCR_SCS_SHIFT                       (24U)                                               /*!< SCG_RCCR: SCS Position                  */
#define SCG_RCCR_SCS(x)                          (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_SCS_SHIFT))&SCG_RCCR_SCS_MASK) /*!< SCG_RCCR                                */
/* ------- VCCR Bit Fields                          ------ */
#define SCG_VCCR_DIVSLOW_MASK                    (0xFU)                                              /*!< SCG_VCCR: DIVSLOW Mask                  */
#define SCG_VCCR_DIVSLOW_SHIFT                   (0U)                                                /*!< SCG_VCCR: DIVSLOW Position              */
#define SCG_VCCR_DIVSLOW(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_VCCR_DIVSLOW_SHIFT))&SCG_VCCR_DIVSLOW_MASK) /*!< SCG_VCCR                                */
#define SCG_VCCR_DIVCORE_MASK                    (0xF0000U)                                          /*!< SCG_VCCR: DIVCORE Mask                  */
#define SCG_VCCR_DIVCORE_SHIFT                   (16U)                                               /*!< SCG_VCCR: DIVCORE Position              */
#define SCG_VCCR_DIVCORE(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_VCCR_DIVCORE_SHIFT))&SCG_VCCR_DIVCORE_MASK) /*!< SCG_VCCR                                */
#define SCG_VCCR_SCS_MASK                        (0xF000000U)                                        /*!< SCG_VCCR: SCS Mask                      */
#define SCG_VCCR_SCS_SHIFT                       (24U)                                               /*!< SCG_VCCR: SCS Position                  */
#define SCG_VCCR_SCS(x)                          (((uint32_t)(((uint32_t)(x))<<SCG_VCCR_SCS_SHIFT))&SCG_VCCR_SCS_MASK) /*!< SCG_VCCR                                */
/* ------- CLKOUTCNFG Bit Fields                    ------ */
#define SCG_CLKOUTCNFG_CLKOUTSEL_MASK            (0xF000000U)                                        /*!< SCG_CLKOUTCNFG: CLKOUTSEL Mask          */
#define SCG_CLKOUTCNFG_CLKOUTSEL_SHIFT           (24U)                                               /*!< SCG_CLKOUTCNFG: CLKOUTSEL Position      */
#define SCG_CLKOUTCNFG_CLKOUTSEL(x)              (((uint32_t)(((uint32_t)(x))<<SCG_CLKOUTCNFG_CLKOUTSEL_SHIFT))&SCG_CLKOUTCNFG_CLKOUTSEL_MASK) /*!< SCG_CLKOUTCNFG                          */
/* ------- SOSCCSR Bit Fields                       ------ */
#define SCG_SOSCCSR_SOSCEN_MASK                  (0x1U)                                              /*!< SCG_SOSCCSR: SOSCEN Mask                */
#define SCG_SOSCCSR_SOSCEN_SHIFT                 (0U)                                                /*!< SCG_SOSCCSR: SOSCEN Position            */
#define SCG_SOSCCSR_SOSCEN(x)                    (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCEN_SHIFT))&SCG_SOSCCSR_SOSCEN_MASK) /*!< SCG_SOSCCSR                             */
#define SCG_SOSCCSR_SOSCSTEN_MASK                (0x2U)                                              /*!< SCG_SOSCCSR: SOSCSTEN Mask              */
#define SCG_SOSCCSR_SOSCSTEN_SHIFT               (1U)                                                /*!< SCG_SOSCCSR: SOSCSTEN Position          */
#define SCG_SOSCCSR_SOSCSTEN(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCSTEN_SHIFT))&SCG_SOSCCSR_SOSCSTEN_MASK) /*!< SCG_SOSCCSR                             */
#define SCG_SOSCCSR_SOSCLPEN_MASK                (0x4U)                                              /*!< SCG_SOSCCSR: SOSCLPEN Mask              */
#define SCG_SOSCCSR_SOSCLPEN_SHIFT               (2U)                                                /*!< SCG_SOSCCSR: SOSCLPEN Position          */
#define SCG_SOSCCSR_SOSCLPEN(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCLPEN_SHIFT))&SCG_SOSCCSR_SOSCLPEN_MASK) /*!< SCG_SOSCCSR                             */
#define SCG_SOSCCSR_SOSCERCLKEN_MASK             (0x8U)                                              /*!< SCG_SOSCCSR: SOSCERCLKEN Mask           */
#define SCG_SOSCCSR_SOSCERCLKEN_SHIFT            (3U)                                                /*!< SCG_SOSCCSR: SOSCERCLKEN Position       */
#define SCG_SOSCCSR_SOSCERCLKEN(x)               (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCERCLKEN_SHIFT))&SCG_SOSCCSR_SOSCERCLKEN_MASK) /*!< SCG_SOSCCSR                             */
#define SCG_SOSCCSR_SOSCCM_MASK                  (0x10000U)                                          /*!< SCG_SOSCCSR: SOSCCM Mask                */
#define SCG_SOSCCSR_SOSCCM_SHIFT                 (16U)                                               /*!< SCG_SOSCCSR: SOSCCM Position            */
#define SCG_SOSCCSR_SOSCCM(x)                    (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCCM_SHIFT))&SCG_SOSCCSR_SOSCCM_MASK) /*!< SCG_SOSCCSR                             */
#define SCG_SOSCCSR_SOSCCMRE_MASK                (0x20000U)                                          /*!< SCG_SOSCCSR: SOSCCMRE Mask              */
#define SCG_SOSCCSR_SOSCCMRE_SHIFT               (17U)                                               /*!< SCG_SOSCCSR: SOSCCMRE Position          */
#define SCG_SOSCCSR_SOSCCMRE(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCCMRE_SHIFT))&SCG_SOSCCSR_SOSCCMRE_MASK) /*!< SCG_SOSCCSR                             */
#define SCG_SOSCCSR_LK_MASK                      (0x800000U)                                         /*!< SCG_SOSCCSR: LK Mask                    */
#define SCG_SOSCCSR_LK_SHIFT                     (23U)                                               /*!< SCG_SOSCCSR: LK Position                */
#define SCG_SOSCCSR_LK(x)                        (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_LK_SHIFT))&SCG_SOSCCSR_LK_MASK) /*!< SCG_SOSCCSR                             */
#define SCG_SOSCCSR_SOSCVLD_MASK                 (0x1000000U)                                        /*!< SCG_SOSCCSR: SOSCVLD Mask               */
#define SCG_SOSCCSR_SOSCVLD_SHIFT                (24U)                                               /*!< SCG_SOSCCSR: SOSCVLD Position           */
#define SCG_SOSCCSR_SOSCVLD(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCVLD_SHIFT))&SCG_SOSCCSR_SOSCVLD_MASK) /*!< SCG_SOSCCSR                             */
#define SCG_SOSCCSR_SOSCSEL_MASK                 (0x2000000U)                                        /*!< SCG_SOSCCSR: SOSCSEL Mask               */
#define SCG_SOSCCSR_SOSCSEL_SHIFT                (25U)                                               /*!< SCG_SOSCCSR: SOSCSEL Position           */
#define SCG_SOSCCSR_SOSCSEL(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCSEL_SHIFT))&SCG_SOSCCSR_SOSCSEL_MASK) /*!< SCG_SOSCCSR                             */
#define SCG_SOSCCSR_SOSCERR_MASK                 (0x4000000U)                                        /*!< SCG_SOSCCSR: SOSCERR Mask               */
#define SCG_SOSCCSR_SOSCERR_SHIFT                (26U)                                               /*!< SCG_SOSCCSR: SOSCERR Position           */
#define SCG_SOSCCSR_SOSCERR(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCERR_SHIFT))&SCG_SOSCCSR_SOSCERR_MASK) /*!< SCG_SOSCCSR                             */
/* ------- SOSCDIV Bit Fields                       ------ */
#define SCG_SOSCDIV_SOSCDIV1_MASK                (0x7U)                                              /*!< SCG_SOSCDIV: SOSCDIV1 Mask              */
#define SCG_SOSCDIV_SOSCDIV1_SHIFT               (0U)                                                /*!< SCG_SOSCDIV: SOSCDIV1 Position          */
#define SCG_SOSCDIV_SOSCDIV1(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SOSCDIV_SOSCDIV1_SHIFT))&SCG_SOSCDIV_SOSCDIV1_MASK) /*!< SCG_SOSCDIV                             */
#define SCG_SOSCDIV_SOSCDIV2_MASK                (0x700U)                                            /*!< SCG_SOSCDIV: SOSCDIV2 Mask              */
#define SCG_SOSCDIV_SOSCDIV2_SHIFT               (8U)                                                /*!< SCG_SOSCDIV: SOSCDIV2 Position          */
#define SCG_SOSCDIV_SOSCDIV2(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SOSCDIV_SOSCDIV2_SHIFT))&SCG_SOSCDIV_SOSCDIV2_MASK) /*!< SCG_SOSCDIV                             */
/* ------- SOSCCFG Bit Fields                       ------ */
#define SCG_SOSCCFG_EREFS_MASK                   (0x4U)                                              /*!< SCG_SOSCCFG: EREFS Mask                 */
#define SCG_SOSCCFG_EREFS_SHIFT                  (2U)                                                /*!< SCG_SOSCCFG: EREFS Position             */
#define SCG_SOSCCFG_EREFS(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCFG_EREFS_SHIFT))&SCG_SOSCCFG_EREFS_MASK) /*!< SCG_SOSCCFG                             */
#define SCG_SOSCCFG_HGO_MASK                     (0x8U)                                              /*!< SCG_SOSCCFG: HGO Mask                   */
#define SCG_SOSCCFG_HGO_SHIFT                    (3U)                                                /*!< SCG_SOSCCFG: HGO Position               */
#define SCG_SOSCCFG_HGO(x)                       (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCFG_HGO_SHIFT))&SCG_SOSCCFG_HGO_MASK) /*!< SCG_SOSCCFG                             */
#define SCG_SOSCCFG_RANGE_MASK                   (0x30U)                                             /*!< SCG_SOSCCFG: RANGE Mask                 */
#define SCG_SOSCCFG_RANGE_SHIFT                  (4U)                                                /*!< SCG_SOSCCFG: RANGE Position             */
#define SCG_SOSCCFG_RANGE(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCFG_RANGE_SHIFT))&SCG_SOSCCFG_RANGE_MASK) /*!< SCG_SOSCCFG                             */
/* ------- SIRCCSR Bit Fields                       ------ */
#define SCG_SIRCCSR_SIRCEN_MASK                  (0x1U)                                              /*!< SCG_SIRCCSR: SIRCEN Mask                */
#define SCG_SIRCCSR_SIRCEN_SHIFT                 (0U)                                                /*!< SCG_SIRCCSR: SIRCEN Position            */
#define SCG_SIRCCSR_SIRCEN(x)                    (((uint32_t)(((uint32_t)(x))<<SCG_SIRCCSR_SIRCEN_SHIFT))&SCG_SIRCCSR_SIRCEN_MASK) /*!< SCG_SIRCCSR                             */
#define SCG_SIRCCSR_SIRCSTEN_MASK                (0x2U)                                              /*!< SCG_SIRCCSR: SIRCSTEN Mask              */
#define SCG_SIRCCSR_SIRCSTEN_SHIFT               (1U)                                                /*!< SCG_SIRCCSR: SIRCSTEN Position          */
#define SCG_SIRCCSR_SIRCSTEN(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SIRCCSR_SIRCSTEN_SHIFT))&SCG_SIRCCSR_SIRCSTEN_MASK) /*!< SCG_SIRCCSR                             */
#define SCG_SIRCCSR_SIRCLPEN_MASK                (0x4U)                                              /*!< SCG_SIRCCSR: SIRCLPEN Mask              */
#define SCG_SIRCCSR_SIRCLPEN_SHIFT               (2U)                                                /*!< SCG_SIRCCSR: SIRCLPEN Position          */
#define SCG_SIRCCSR_SIRCLPEN(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SIRCCSR_SIRCLPEN_SHIFT))&SCG_SIRCCSR_SIRCLPEN_MASK) /*!< SCG_SIRCCSR                             */
#define SCG_SIRCCSR_LK_MASK                      (0x800000U)                                         /*!< SCG_SIRCCSR: LK Mask                    */
#define SCG_SIRCCSR_LK_SHIFT                     (23U)                                               /*!< SCG_SIRCCSR: LK Position                */
#define SCG_SIRCCSR_LK(x)                        (((uint32_t)(((uint32_t)(x))<<SCG_SIRCCSR_LK_SHIFT))&SCG_SIRCCSR_LK_MASK) /*!< SCG_SIRCCSR                             */
#define SCG_SIRCCSR_SIRCVLD_MASK                 (0x1000000U)                                        /*!< SCG_SIRCCSR: SIRCVLD Mask               */
#define SCG_SIRCCSR_SIRCVLD_SHIFT                (24U)                                               /*!< SCG_SIRCCSR: SIRCVLD Position           */
#define SCG_SIRCCSR_SIRCVLD(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_SIRCCSR_SIRCVLD_SHIFT))&SCG_SIRCCSR_SIRCVLD_MASK) /*!< SCG_SIRCCSR                             */
#define SCG_SIRCCSR_SIRCSEL_MASK                 (0x2000000U)                                        /*!< SCG_SIRCCSR: SIRCSEL Mask               */
#define SCG_SIRCCSR_SIRCSEL_SHIFT                (25U)                                               /*!< SCG_SIRCCSR: SIRCSEL Position           */
#define SCG_SIRCCSR_SIRCSEL(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_SIRCCSR_SIRCSEL_SHIFT))&SCG_SIRCCSR_SIRCSEL_MASK) /*!< SCG_SIRCCSR                             */
/* ------- SIRCDIV Bit Fields                       ------ */
#define SCG_SIRCDIV_SIRCDIV1_MASK                (0x7U)                                              /*!< SCG_SIRCDIV: SIRCDIV1 Mask              */
#define SCG_SIRCDIV_SIRCDIV1_SHIFT               (0U)                                                /*!< SCG_SIRCDIV: SIRCDIV1 Position          */
#define SCG_SIRCDIV_SIRCDIV1(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SIRCDIV_SIRCDIV1_SHIFT))&SCG_SIRCDIV_SIRCDIV1_MASK) /*!< SCG_SIRCDIV                             */
#define SCG_SIRCDIV_SIRCDIV2_MASK                (0x700U)                                            /*!< SCG_SIRCDIV: SIRCDIV2 Mask              */
#define SCG_SIRCDIV_SIRCDIV2_SHIFT               (8U)                                                /*!< SCG_SIRCDIV: SIRCDIV2 Position          */
#define SCG_SIRCDIV_SIRCDIV2(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SIRCDIV_SIRCDIV2_SHIFT))&SCG_SIRCDIV_SIRCDIV2_MASK) /*!< SCG_SIRCDIV                             */
/* ------- SIRCCFG Bit Fields                       ------ */
#define SCG_SIRCCFG_RANGE_MASK                   (0x1U)                                              /*!< SCG_SIRCCFG: RANGE Mask                 */
#define SCG_SIRCCFG_RANGE_SHIFT                  (0U)                                                /*!< SCG_SIRCCFG: RANGE Position             */
#define SCG_SIRCCFG_RANGE(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_SIRCCFG_RANGE_SHIFT))&SCG_SIRCCFG_RANGE_MASK) /*!< SCG_SIRCCFG                             */
/* ------- FIRCCSR Bit Fields                       ------ */
#define SCG_FIRCCSR_FIRCEN_MASK                  (0x1U)                                              /*!< SCG_FIRCCSR: FIRCEN Mask                */
#define SCG_FIRCCSR_FIRCEN_SHIFT                 (0U)                                                /*!< SCG_FIRCCSR: FIRCEN Position            */
#define SCG_FIRCCSR_FIRCEN(x)                    (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_FIRCEN_SHIFT))&SCG_FIRCCSR_FIRCEN_MASK) /*!< SCG_FIRCCSR                             */
#define SCG_FIRCCSR_FIRCSTEN_MASK                (0x2U)                                              /*!< SCG_FIRCCSR: FIRCSTEN Mask              */
#define SCG_FIRCCSR_FIRCSTEN_SHIFT               (1U)                                                /*!< SCG_FIRCCSR: FIRCSTEN Position          */
#define SCG_FIRCCSR_FIRCSTEN(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_FIRCSTEN_SHIFT))&SCG_FIRCCSR_FIRCSTEN_MASK) /*!< SCG_FIRCCSR                             */
#define SCG_FIRCCSR_FIRCLPEN_MASK                (0x4U)                                              /*!< SCG_FIRCCSR: FIRCLPEN Mask              */
#define SCG_FIRCCSR_FIRCLPEN_SHIFT               (2U)                                                /*!< SCG_FIRCCSR: FIRCLPEN Position          */
#define SCG_FIRCCSR_FIRCLPEN(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_FIRCLPEN_SHIFT))&SCG_FIRCCSR_FIRCLPEN_MASK) /*!< SCG_FIRCCSR                             */
#define SCG_FIRCCSR_FIRCREGOFF_MASK              (0x8U)                                              /*!< SCG_FIRCCSR: FIRCREGOFF Mask            */
#define SCG_FIRCCSR_FIRCREGOFF_SHIFT             (3U)                                                /*!< SCG_FIRCCSR: FIRCREGOFF Position        */
#define SCG_FIRCCSR_FIRCREGOFF(x)                (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_FIRCREGOFF_SHIFT))&SCG_FIRCCSR_FIRCREGOFF_MASK) /*!< SCG_FIRCCSR                             */
#define SCG_FIRCCSR_FIRCTREN_MASK                (0x100U)                                            /*!< SCG_FIRCCSR: FIRCTREN Mask              */
#define SCG_FIRCCSR_FIRCTREN_SHIFT               (8U)                                                /*!< SCG_FIRCCSR: FIRCTREN Position          */
#define SCG_FIRCCSR_FIRCTREN(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_FIRCTREN_SHIFT))&SCG_FIRCCSR_FIRCTREN_MASK) /*!< SCG_FIRCCSR                             */
#define SCG_FIRCCSR_FIRCTRUP_MASK                (0x200U)                                            /*!< SCG_FIRCCSR: FIRCTRUP Mask              */
#define SCG_FIRCCSR_FIRCTRUP_SHIFT               (9U)                                                /*!< SCG_FIRCCSR: FIRCTRUP Position          */
#define SCG_FIRCCSR_FIRCTRUP(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_FIRCTRUP_SHIFT))&SCG_FIRCCSR_FIRCTRUP_MASK) /*!< SCG_FIRCCSR                             */
#define SCG_FIRCCSR_LK_MASK                      (0x800000U)                                         /*!< SCG_FIRCCSR: LK Mask                    */
#define SCG_FIRCCSR_LK_SHIFT                     (23U)                                               /*!< SCG_FIRCCSR: LK Position                */
#define SCG_FIRCCSR_LK(x)                        (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_LK_SHIFT))&SCG_FIRCCSR_LK_MASK) /*!< SCG_FIRCCSR                             */
#define SCG_FIRCCSR_FIRCVLD_MASK                 (0x1000000U)                                        /*!< SCG_FIRCCSR: FIRCVLD Mask               */
#define SCG_FIRCCSR_FIRCVLD_SHIFT                (24U)                                               /*!< SCG_FIRCCSR: FIRCVLD Position           */
#define SCG_FIRCCSR_FIRCVLD(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_FIRCVLD_SHIFT))&SCG_FIRCCSR_FIRCVLD_MASK) /*!< SCG_FIRCCSR                             */
#define SCG_FIRCCSR_FIRCSEL_MASK                 (0x2000000U)                                        /*!< SCG_FIRCCSR: FIRCSEL Mask               */
#define SCG_FIRCCSR_FIRCSEL_SHIFT                (25U)                                               /*!< SCG_FIRCCSR: FIRCSEL Position           */
#define SCG_FIRCCSR_FIRCSEL(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_FIRCSEL_SHIFT))&SCG_FIRCCSR_FIRCSEL_MASK) /*!< SCG_FIRCCSR                             */
#define SCG_FIRCCSR_FIRCERR_MASK                 (0x4000000U)                                        /*!< SCG_FIRCCSR: FIRCERR Mask               */
#define SCG_FIRCCSR_FIRCERR_SHIFT                (26U)                                               /*!< SCG_FIRCCSR: FIRCERR Position           */
#define SCG_FIRCCSR_FIRCERR(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_FIRCERR_SHIFT))&SCG_FIRCCSR_FIRCERR_MASK) /*!< SCG_FIRCCSR                             */
/* ------- FIRCDIV Bit Fields                       ------ */
#define SCG_FIRCDIV_FIRCDIV1_MASK                (0x7U)                                              /*!< SCG_FIRCDIV: FIRCDIV1 Mask              */
#define SCG_FIRCDIV_FIRCDIV1_SHIFT               (0U)                                                /*!< SCG_FIRCDIV: FIRCDIV1 Position          */
#define SCG_FIRCDIV_FIRCDIV1(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_FIRCDIV_FIRCDIV1_SHIFT))&SCG_FIRCDIV_FIRCDIV1_MASK) /*!< SCG_FIRCDIV                             */
#define SCG_FIRCDIV_FIRCDIV2_MASK                (0x700U)                                            /*!< SCG_FIRCDIV: FIRCDIV2 Mask              */
#define SCG_FIRCDIV_FIRCDIV2_SHIFT               (8U)                                                /*!< SCG_FIRCDIV: FIRCDIV2 Position          */
#define SCG_FIRCDIV_FIRCDIV2(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_FIRCDIV_FIRCDIV2_SHIFT))&SCG_FIRCDIV_FIRCDIV2_MASK) /*!< SCG_FIRCDIV                             */
/* ------- FIRCCFG Bit Fields                       ------ */
#define SCG_FIRCCFG_RANGE_MASK                   (0x3U)                                              /*!< SCG_FIRCCFG: RANGE Mask                 */
#define SCG_FIRCCFG_RANGE_SHIFT                  (0U)                                                /*!< SCG_FIRCCFG: RANGE Position             */
#define SCG_FIRCCFG_RANGE(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCFG_RANGE_SHIFT))&SCG_FIRCCFG_RANGE_MASK) /*!< SCG_FIRCCFG                             */
/* ------- FIRCTCFG Bit Fields                      ------ */
#define SCG_FIRCTCFG_TRIMSRC_MASK                (0x3U)                                              /*!< SCG_FIRCTCFG: TRIMSRC Mask              */
#define SCG_FIRCTCFG_TRIMSRC_SHIFT               (0U)                                                /*!< SCG_FIRCTCFG: TRIMSRC Position          */
#define SCG_FIRCTCFG_TRIMSRC(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_FIRCTCFG_TRIMSRC_SHIFT))&SCG_FIRCTCFG_TRIMSRC_MASK) /*!< SCG_FIRCTCFG                            */
#define SCG_FIRCTCFG_TRIMDIV_MASK                (0x700U)                                            /*!< SCG_FIRCTCFG: TRIMDIV Mask              */
#define SCG_FIRCTCFG_TRIMDIV_SHIFT               (8U)                                                /*!< SCG_FIRCTCFG: TRIMDIV Position          */
#define SCG_FIRCTCFG_TRIMDIV(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_FIRCTCFG_TRIMDIV_SHIFT))&SCG_FIRCTCFG_TRIMDIV_MASK) /*!< SCG_FIRCTCFG                            */
/* ------- FIRCSTAT Bit Fields                      ------ */
#define SCG_FIRCSTAT_TRIMFINE_MASK               (0x7FU)                                             /*!< SCG_FIRCSTAT: TRIMFINE Mask             */
#define SCG_FIRCSTAT_TRIMFINE_SHIFT              (0U)                                                /*!< SCG_FIRCSTAT: TRIMFINE Position         */
#define SCG_FIRCSTAT_TRIMFINE(x)                 (((uint32_t)(((uint32_t)(x))<<SCG_FIRCSTAT_TRIMFINE_SHIFT))&SCG_FIRCSTAT_TRIMFINE_MASK) /*!< SCG_FIRCSTAT                            */
#define SCG_FIRCSTAT_TRIMCOAR_MASK               (0x3F00U)                                           /*!< SCG_FIRCSTAT: TRIMCOAR Mask             */
#define SCG_FIRCSTAT_TRIMCOAR_SHIFT              (8U)                                                /*!< SCG_FIRCSTAT: TRIMCOAR Position         */
#define SCG_FIRCSTAT_TRIMCOAR(x)                 (((uint32_t)(((uint32_t)(x))<<SCG_FIRCSTAT_TRIMCOAR_SHIFT))&SCG_FIRCSTAT_TRIMCOAR_MASK) /*!< SCG_FIRCSTAT                            */
/* ------- LPFLLCSR Bit Fields                      ------ */
#define SCG_LPFLLCSR_LPFLLEN_MASK                (0x1U)                                              /*!< SCG_LPFLLCSR: LPFLLEN Mask              */
#define SCG_LPFLLCSR_LPFLLEN_SHIFT               (0U)                                                /*!< SCG_LPFLLCSR: LPFLLEN Position          */
#define SCG_LPFLLCSR_LPFLLEN(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLCSR_LPFLLEN_SHIFT))&SCG_LPFLLCSR_LPFLLEN_MASK) /*!< SCG_LPFLLCSR                            */
#define SCG_LPFLLCSR_LPFLLTREN_MASK              (0x100U)                                            /*!< SCG_LPFLLCSR: LPFLLTREN Mask            */
#define SCG_LPFLLCSR_LPFLLTREN_SHIFT             (8U)                                                /*!< SCG_LPFLLCSR: LPFLLTREN Position        */
#define SCG_LPFLLCSR_LPFLLTREN(x)                (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLCSR_LPFLLTREN_SHIFT))&SCG_LPFLLCSR_LPFLLTREN_MASK) /*!< SCG_LPFLLCSR                            */
#define SCG_LPFLLCSR_LPFLLTRUP_MASK              (0x200U)                                            /*!< SCG_LPFLLCSR: LPFLLTRUP Mask            */
#define SCG_LPFLLCSR_LPFLLTRUP_SHIFT             (9U)                                                /*!< SCG_LPFLLCSR: LPFLLTRUP Position        */
#define SCG_LPFLLCSR_LPFLLTRUP(x)                (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLCSR_LPFLLTRUP_SHIFT))&SCG_LPFLLCSR_LPFLLTRUP_MASK) /*!< SCG_LPFLLCSR                            */
#define SCG_LPFLLCSR_LPFLLTRMLOCK_MASK           (0x400U)                                            /*!< SCG_LPFLLCSR: LPFLLTRMLOCK Mask         */
#define SCG_LPFLLCSR_LPFLLTRMLOCK_SHIFT          (10U)                                               /*!< SCG_LPFLLCSR: LPFLLTRMLOCK Position     */
#define SCG_LPFLLCSR_LPFLLTRMLOCK(x)             (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLCSR_LPFLLTRMLOCK_SHIFT))&SCG_LPFLLCSR_LPFLLTRMLOCK_MASK) /*!< SCG_LPFLLCSR                            */
#define SCG_LPFLLCSR_LPFLLCM_MASK                (0x10000U)                                          /*!< SCG_LPFLLCSR: LPFLLCM Mask              */
#define SCG_LPFLLCSR_LPFLLCM_SHIFT               (16U)                                               /*!< SCG_LPFLLCSR: LPFLLCM Position          */
#define SCG_LPFLLCSR_LPFLLCM(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLCSR_LPFLLCM_SHIFT))&SCG_LPFLLCSR_LPFLLCM_MASK) /*!< SCG_LPFLLCSR                            */
#define SCG_LPFLLCSR_LPFLLCMRE_MASK              (0x20000U)                                          /*!< SCG_LPFLLCSR: LPFLLCMRE Mask            */
#define SCG_LPFLLCSR_LPFLLCMRE_SHIFT             (17U)                                               /*!< SCG_LPFLLCSR: LPFLLCMRE Position        */
#define SCG_LPFLLCSR_LPFLLCMRE(x)                (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLCSR_LPFLLCMRE_SHIFT))&SCG_LPFLLCSR_LPFLLCMRE_MASK) /*!< SCG_LPFLLCSR                            */
#define SCG_LPFLLCSR_LK_MASK                     (0x800000U)                                         /*!< SCG_LPFLLCSR: LK Mask                   */
#define SCG_LPFLLCSR_LK_SHIFT                    (23U)                                               /*!< SCG_LPFLLCSR: LK Position               */
#define SCG_LPFLLCSR_LK(x)                       (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLCSR_LK_SHIFT))&SCG_LPFLLCSR_LK_MASK) /*!< SCG_LPFLLCSR                            */
#define SCG_LPFLLCSR_LPFLLVLD_MASK               (0x1000000U)                                        /*!< SCG_LPFLLCSR: LPFLLVLD Mask             */
#define SCG_LPFLLCSR_LPFLLVLD_SHIFT              (24U)                                               /*!< SCG_LPFLLCSR: LPFLLVLD Position         */
#define SCG_LPFLLCSR_LPFLLVLD(x)                 (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLCSR_LPFLLVLD_SHIFT))&SCG_LPFLLCSR_LPFLLVLD_MASK) /*!< SCG_LPFLLCSR                            */
#define SCG_LPFLLCSR_LPFLLSEL_MASK               (0x2000000U)                                        /*!< SCG_LPFLLCSR: LPFLLSEL Mask             */
#define SCG_LPFLLCSR_LPFLLSEL_SHIFT              (25U)                                               /*!< SCG_LPFLLCSR: LPFLLSEL Position         */
#define SCG_LPFLLCSR_LPFLLSEL(x)                 (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLCSR_LPFLLSEL_SHIFT))&SCG_LPFLLCSR_LPFLLSEL_MASK) /*!< SCG_LPFLLCSR                            */
#define SCG_LPFLLCSR_LPFLLERR_MASK               (0x4000000U)                                        /*!< SCG_LPFLLCSR: LPFLLERR Mask             */
#define SCG_LPFLLCSR_LPFLLERR_SHIFT              (26U)                                               /*!< SCG_LPFLLCSR: LPFLLERR Position         */
#define SCG_LPFLLCSR_LPFLLERR(x)                 (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLCSR_LPFLLERR_SHIFT))&SCG_LPFLLCSR_LPFLLERR_MASK) /*!< SCG_LPFLLCSR                            */
/* ------- LPFLLDIV Bit Fields                      ------ */
#define SCG_LPFLLDIV_LPFLLDIV1_MASK              (0x7U)                                              /*!< SCG_LPFLLDIV: LPFLLDIV1 Mask            */
#define SCG_LPFLLDIV_LPFLLDIV1_SHIFT             (0U)                                                /*!< SCG_LPFLLDIV: LPFLLDIV1 Position        */
#define SCG_LPFLLDIV_LPFLLDIV1(x)                (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLDIV_LPFLLDIV1_SHIFT))&SCG_LPFLLDIV_LPFLLDIV1_MASK) /*!< SCG_LPFLLDIV                            */
#define SCG_LPFLLDIV_LPFLLDIV2_MASK              (0x700U)                                            /*!< SCG_LPFLLDIV: LPFLLDIV2 Mask            */
#define SCG_LPFLLDIV_LPFLLDIV2_SHIFT             (8U)                                                /*!< SCG_LPFLLDIV: LPFLLDIV2 Position        */
#define SCG_LPFLLDIV_LPFLLDIV2(x)                (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLDIV_LPFLLDIV2_SHIFT))&SCG_LPFLLDIV_LPFLLDIV2_MASK) /*!< SCG_LPFLLDIV                            */
/* ------- LPFLLCFG Bit Fields                      ------ */
#define SCG_LPFLLCFG_FSEL_MASK                   (0x3U)                                              /*!< SCG_LPFLLCFG: FSEL Mask                 */
#define SCG_LPFLLCFG_FSEL_SHIFT                  (0U)                                                /*!< SCG_LPFLLCFG: FSEL Position             */
#define SCG_LPFLLCFG_FSEL(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLCFG_FSEL_SHIFT))&SCG_LPFLLCFG_FSEL_MASK) /*!< SCG_LPFLLCFG                            */
/* ------- LPFLLTCFG Bit Fields                     ------ */
#define SCG_LPFLLTCFG_TRIMSRC_MASK               (0x3U)                                              /*!< SCG_LPFLLTCFG: TRIMSRC Mask             */
#define SCG_LPFLLTCFG_TRIMSRC_SHIFT              (0U)                                                /*!< SCG_LPFLLTCFG: TRIMSRC Position         */
#define SCG_LPFLLTCFG_TRIMSRC(x)                 (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLTCFG_TRIMSRC_SHIFT))&SCG_LPFLLTCFG_TRIMSRC_MASK) /*!< SCG_LPFLLTCFG                           */
#define SCG_LPFLLTCFG_TRIMDIV_MASK               (0x1F00U)                                           /*!< SCG_LPFLLTCFG: TRIMDIV Mask             */
#define SCG_LPFLLTCFG_TRIMDIV_SHIFT              (8U)                                                /*!< SCG_LPFLLTCFG: TRIMDIV Position         */
#define SCG_LPFLLTCFG_TRIMDIV(x)                 (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLTCFG_TRIMDIV_SHIFT))&SCG_LPFLLTCFG_TRIMDIV_MASK) /*!< SCG_LPFLLTCFG                           */
#define SCG_LPFLLTCFG_LOCKW2LSB_MASK             (0x10000U)                                          /*!< SCG_LPFLLTCFG: LOCKW2LSB Mask           */
#define SCG_LPFLLTCFG_LOCKW2LSB_SHIFT            (16U)                                               /*!< SCG_LPFLLTCFG: LOCKW2LSB Position       */
#define SCG_LPFLLTCFG_LOCKW2LSB(x)               (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLTCFG_LOCKW2LSB_SHIFT))&SCG_LPFLLTCFG_LOCKW2LSB_MASK) /*!< SCG_LPFLLTCFG                           */
/* ------- LPFLLSTAT Bit Fields                     ------ */
#define SCG_LPFLLSTAT_AUTOTRIM_MASK              (0xFFU)                                             /*!< SCG_LPFLLSTAT: AUTOTRIM Mask            */
#define SCG_LPFLLSTAT_AUTOTRIM_SHIFT             (0U)                                                /*!< SCG_LPFLLSTAT: AUTOTRIM Position        */
#define SCG_LPFLLSTAT_AUTOTRIM(x)                (((uint32_t)(((uint32_t)(x))<<SCG_LPFLLSTAT_AUTOTRIM_SHIFT))&SCG_LPFLLSTAT_AUTOTRIM_MASK) /*!< SCG_LPFLLSTAT                           */
/**
 * @} */ /* End group SCG_Register_Masks_GROUP 
 */

/* SCG - Peripheral instance base addresses */
#define SCG_BasePtr                    0x40064000UL //!< Peripheral base address
#define SCG                            ((SCG_Type *) SCG_BasePtr) //!< Freescale base pointer
#define SCG_BASE_PTR                   (SCG) //!< Freescale style base pointer
/**
 * @} */ /* End group SCG_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup SIM_Peripheral_access_layer_GROUP SIM Peripheral Access Layer
* @brief C Struct for SIM
* @{
*/

/* ================================================================================ */
/* ================           SIM (file:SIM_MKE15Z7)               ================ */
/* ================================================================================ */

/**
 * @brief System Integration Module
 */
/**
* @addtogroup SIM_structs_GROUP SIM struct
* @brief Struct for SIM
* @{
*/
typedef struct {                                /*       SIM Structure                                                */
        uint8_t   RESERVED_0[4];               
   __IO uint32_t  CHIPCTL;                      /**< 0004: Chip Control register                                        */
        uint8_t   RESERVED_1[4];               
   __IO uint32_t  FTMOPT0;                      /**< 000C: FTM Option Register 0                                        */
        uint8_t   RESERVED_2[8];               
   __IO uint32_t  ADCOPT;                       /**< 0018: ADC Options Register                                         */
   __IO uint32_t  FTMOPT1;                      /**< 001C: FTM Option Register 1                                        */
        uint8_t   RESERVED_3[4];               
   __I  uint32_t  SDID;                         /**< 0024: System Device Identification Register                        */
        uint8_t   RESERVED_4[36];              
   __IO uint32_t  FCFG1;                        /**< 004C: Flash Configuration Register 1                               */
   __I  uint32_t  FCFG2;                        /**< 0050: Flash Configuration Register 2                               */
   __I  uint32_t  UIDH;                         /**< 0054: Unique Identification Register High                          */
   __I  uint32_t  UIDMH;                        /**< 0058: Unique Identification Register Mid-High                      */
   __I  uint32_t  UIDML;                        /**< 005C: Unique Identification Register Mid Low                       */
   __I  uint32_t  UIDL;                         /**< 0060: Unique Identification Register Low                           */
        uint8_t   RESERVED_5[8];               
   __IO uint32_t  MISCTRL;                      /**< 006C: Miscellaneous Control register                               */
} SIM_Type;

/**
 * @} */ /* End group SIM_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'SIM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup SIM_Register_Masks_GROUP SIM Register Masks
* @brief Register Masks for SIM
* @{
*/
/* ------- CHIPCTL Bit Fields                       ------ */
#define SIM_CHIPCTL_ADC_INTERLEAVE_EN_MASK       (0x3U)                                              /*!< SIM_CHIPCTL: ADC_INTERLEAVE_EN Mask     */
#define SIM_CHIPCTL_ADC_INTERLEAVE_EN_SHIFT      (0U)                                                /*!< SIM_CHIPCTL: ADC_INTERLEAVE_EN Position */
#define SIM_CHIPCTL_ADC_INTERLEAVE_EN(x)         (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_ADC_INTERLEAVE_EN_SHIFT))&SIM_CHIPCTL_ADC_INTERLEAVE_EN_MASK) /*!< SIM_CHIPCTL                             */
#define SIM_CHIPCTL_CLKOUTDIV_MASK               (0x30U)                                             /*!< SIM_CHIPCTL: CLKOUTDIV Mask             */
#define SIM_CHIPCTL_CLKOUTDIV_SHIFT              (4U)                                                /*!< SIM_CHIPCTL: CLKOUTDIV Position         */
#define SIM_CHIPCTL_CLKOUTDIV(x)                 (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_CLKOUTDIV_SHIFT))&SIM_CHIPCTL_CLKOUTDIV_MASK) /*!< SIM_CHIPCTL                             */
#define SIM_CHIPCTL_CLKOUTSEL_MASK               (0xC0U)                                             /*!< SIM_CHIPCTL: CLKOUTSEL Mask             */
#define SIM_CHIPCTL_CLKOUTSEL_SHIFT              (6U)                                                /*!< SIM_CHIPCTL: CLKOUTSEL Position         */
#define SIM_CHIPCTL_CLKOUTSEL(x)                 (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_CLKOUTSEL_SHIFT))&SIM_CHIPCTL_CLKOUTSEL_MASK) /*!< SIM_CHIPCTL                             */
#define SIM_CHIPCTL_PDB_BB_SEL_MASK              (0x2000U)                                           /*!< SIM_CHIPCTL: PDB_BB_SEL Mask            */
#define SIM_CHIPCTL_PDB_BB_SEL_SHIFT             (13U)                                               /*!< SIM_CHIPCTL: PDB_BB_SEL Position        */
#define SIM_CHIPCTL_PDB_BB_SEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_PDB_BB_SEL_SHIFT))&SIM_CHIPCTL_PDB_BB_SEL_MASK) /*!< SIM_CHIPCTL                             */
#define SIM_CHIPCTL_PWTCLKSEL_MASK               (0x30000U)                                          /*!< SIM_CHIPCTL: PWTCLKSEL Mask             */
#define SIM_CHIPCTL_PWTCLKSEL_SHIFT              (16U)                                               /*!< SIM_CHIPCTL: PWTCLKSEL Position         */
#define SIM_CHIPCTL_PWTCLKSEL(x)                 (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_PWTCLKSEL_SHIFT))&SIM_CHIPCTL_PWTCLKSEL_MASK) /*!< SIM_CHIPCTL                             */
#define SIM_CHIPCTL_RTC32KCLKSEL_MASK            (0xC0000U)                                          /*!< SIM_CHIPCTL: RTC32KCLKSEL Mask          */
#define SIM_CHIPCTL_RTC32KCLKSEL_SHIFT           (18U)                                               /*!< SIM_CHIPCTL: RTC32KCLKSEL Position      */
#define SIM_CHIPCTL_RTC32KCLKSEL(x)              (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_RTC32KCLKSEL_SHIFT))&SIM_CHIPCTL_RTC32KCLKSEL_MASK) /*!< SIM_CHIPCTL                             */
/* ------- FTMOPT0 Bit Fields                       ------ */
#define SIM_FTMOPT0_FTM0FLTxSEL_MASK             (0x7U)                                              /*!< SIM_FTMOPT0: FTM0FLTxSEL Mask           */
#define SIM_FTMOPT0_FTM0FLTxSEL_SHIFT            (0U)                                                /*!< SIM_FTMOPT0: FTM0FLTxSEL Position       */
#define SIM_FTMOPT0_FTM0FLTxSEL(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM0FLTxSEL_SHIFT))&SIM_FTMOPT0_FTM0FLTxSEL_MASK) /*!< SIM_FTMOPT0                             */
#define SIM_FTMOPT0_FTM0CLKSEL_MASK              (0x3000000U)                                        /*!< SIM_FTMOPT0: FTM0CLKSEL Mask            */
#define SIM_FTMOPT0_FTM0CLKSEL_SHIFT             (24U)                                               /*!< SIM_FTMOPT0: FTM0CLKSEL Position        */
#define SIM_FTMOPT0_FTM0CLKSEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM0CLKSEL_SHIFT))&SIM_FTMOPT0_FTM0CLKSEL_MASK) /*!< SIM_FTMOPT0                             */
#define SIM_FTMOPT0_FTM1CLKSEL_MASK              (0xC000000U)                                        /*!< SIM_FTMOPT0: FTM1CLKSEL Mask            */
#define SIM_FTMOPT0_FTM1CLKSEL_SHIFT             (26U)                                               /*!< SIM_FTMOPT0: FTM1CLKSEL Position        */
#define SIM_FTMOPT0_FTM1CLKSEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM1CLKSEL_SHIFT))&SIM_FTMOPT0_FTM1CLKSEL_MASK) /*!< SIM_FTMOPT0                             */
#define SIM_FTMOPT0_FTM2CLKSEL_MASK              (0x30000000U)                                       /*!< SIM_FTMOPT0: FTM2CLKSEL Mask            */
#define SIM_FTMOPT0_FTM2CLKSEL_SHIFT             (28U)                                               /*!< SIM_FTMOPT0: FTM2CLKSEL Position        */
#define SIM_FTMOPT0_FTM2CLKSEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM2CLKSEL_SHIFT))&SIM_FTMOPT0_FTM2CLKSEL_MASK) /*!< SIM_FTMOPT0                             */
/* ------- ADCOPT Bit Fields                        ------ */
#define SIM_ADCOPT_ADC0TRGSEL_MASK               (0x1U)                                              /*!< SIM_ADCOPT: ADC0TRGSEL Mask             */
#define SIM_ADCOPT_ADC0TRGSEL_SHIFT              (0U)                                                /*!< SIM_ADCOPT: ADC0TRGSEL Position         */
#define SIM_ADCOPT_ADC0TRGSEL(x)                 (((uint32_t)(((uint32_t)(x))<<SIM_ADCOPT_ADC0TRGSEL_SHIFT))&SIM_ADCOPT_ADC0TRGSEL_MASK) /*!< SIM_ADCOPT                              */
#define SIM_ADCOPT_ADC0SWPRETRG_MASK             (0x6U)                                              /*!< SIM_ADCOPT: ADC0SWPRETRG Mask           */
#define SIM_ADCOPT_ADC0SWPRETRG_SHIFT            (1U)                                                /*!< SIM_ADCOPT: ADC0SWPRETRG Position       */
#define SIM_ADCOPT_ADC0SWPRETRG(x)               (((uint32_t)(((uint32_t)(x))<<SIM_ADCOPT_ADC0SWPRETRG_SHIFT))&SIM_ADCOPT_ADC0SWPRETRG_MASK) /*!< SIM_ADCOPT                              */
#define SIM_ADCOPT_ADC0PRETRGSEL_MASK            (0x30U)                                             /*!< SIM_ADCOPT: ADC0PRETRGSEL Mask          */
#define SIM_ADCOPT_ADC0PRETRGSEL_SHIFT           (4U)                                                /*!< SIM_ADCOPT: ADC0PRETRGSEL Position      */
#define SIM_ADCOPT_ADC0PRETRGSEL(x)              (((uint32_t)(((uint32_t)(x))<<SIM_ADCOPT_ADC0PRETRGSEL_SHIFT))&SIM_ADCOPT_ADC0PRETRGSEL_MASK) /*!< SIM_ADCOPT                              */
#define SIM_ADCOPT_ADC1TRGSEL_MASK               (0x100U)                                            /*!< SIM_ADCOPT: ADC1TRGSEL Mask             */
#define SIM_ADCOPT_ADC1TRGSEL_SHIFT              (8U)                                                /*!< SIM_ADCOPT: ADC1TRGSEL Position         */
#define SIM_ADCOPT_ADC1TRGSEL(x)                 (((uint32_t)(((uint32_t)(x))<<SIM_ADCOPT_ADC1TRGSEL_SHIFT))&SIM_ADCOPT_ADC1TRGSEL_MASK) /*!< SIM_ADCOPT                              */
#define SIM_ADCOPT_ADC1SWPRETRG_MASK             (0x600U)                                            /*!< SIM_ADCOPT: ADC1SWPRETRG Mask           */
#define SIM_ADCOPT_ADC1SWPRETRG_SHIFT            (9U)                                                /*!< SIM_ADCOPT: ADC1SWPRETRG Position       */
#define SIM_ADCOPT_ADC1SWPRETRG(x)               (((uint32_t)(((uint32_t)(x))<<SIM_ADCOPT_ADC1SWPRETRG_SHIFT))&SIM_ADCOPT_ADC1SWPRETRG_MASK) /*!< SIM_ADCOPT                              */
#define SIM_ADCOPT_ADC1PRETRGSEL_MASK            (0x3000U)                                           /*!< SIM_ADCOPT: ADC1PRETRGSEL Mask          */
#define SIM_ADCOPT_ADC1PRETRGSEL_SHIFT           (12U)                                               /*!< SIM_ADCOPT: ADC1PRETRGSEL Position      */
#define SIM_ADCOPT_ADC1PRETRGSEL(x)              (((uint32_t)(((uint32_t)(x))<<SIM_ADCOPT_ADC1PRETRGSEL_SHIFT))&SIM_ADCOPT_ADC1PRETRGSEL_MASK) /*!< SIM_ADCOPT                              */
/* ------- FTMOPT1 Bit Fields                       ------ */
#define SIM_FTMOPT1_FTM0SYNCBIT_MASK             (0x1U)                                              /*!< SIM_FTMOPT1: FTM0SYNCBIT Mask           */
#define SIM_FTMOPT1_FTM0SYNCBIT_SHIFT            (0U)                                                /*!< SIM_FTMOPT1: FTM0SYNCBIT Position       */
#define SIM_FTMOPT1_FTM0SYNCBIT(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM0SYNCBIT_SHIFT))&SIM_FTMOPT1_FTM0SYNCBIT_MASK) /*!< SIM_FTMOPT1                             */
#define SIM_FTMOPT1_FTM1SYNCBIT_MASK             (0x2U)                                              /*!< SIM_FTMOPT1: FTM1SYNCBIT Mask           */
#define SIM_FTMOPT1_FTM1SYNCBIT_SHIFT            (1U)                                                /*!< SIM_FTMOPT1: FTM1SYNCBIT Position       */
#define SIM_FTMOPT1_FTM1SYNCBIT(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM1SYNCBIT_SHIFT))&SIM_FTMOPT1_FTM1SYNCBIT_MASK) /*!< SIM_FTMOPT1                             */
#define SIM_FTMOPT1_FTM2SYNCBIT_MASK             (0x4U)                                              /*!< SIM_FTMOPT1: FTM2SYNCBIT Mask           */
#define SIM_FTMOPT1_FTM2SYNCBIT_SHIFT            (2U)                                                /*!< SIM_FTMOPT1: FTM2SYNCBIT Position       */
#define SIM_FTMOPT1_FTM2SYNCBIT(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM2SYNCBIT_SHIFT))&SIM_FTMOPT1_FTM2SYNCBIT_MASK) /*!< SIM_FTMOPT1                             */
#define SIM_FTMOPT1_FTM1CH0SEL_MASK              (0x30U)                                             /*!< SIM_FTMOPT1: FTM1CH0SEL Mask            */
#define SIM_FTMOPT1_FTM1CH0SEL_SHIFT             (4U)                                                /*!< SIM_FTMOPT1: FTM1CH0SEL Position        */
#define SIM_FTMOPT1_FTM1CH0SEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM1CH0SEL_SHIFT))&SIM_FTMOPT1_FTM1CH0SEL_MASK) /*!< SIM_FTMOPT1                             */
#define SIM_FTMOPT1_FTM2CH0SEL_MASK              (0xC0U)                                             /*!< SIM_FTMOPT1: FTM2CH0SEL Mask            */
#define SIM_FTMOPT1_FTM2CH0SEL_SHIFT             (6U)                                                /*!< SIM_FTMOPT1: FTM2CH0SEL Position        */
#define SIM_FTMOPT1_FTM2CH0SEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM2CH0SEL_SHIFT))&SIM_FTMOPT1_FTM2CH0SEL_MASK) /*!< SIM_FTMOPT1                             */
#define SIM_FTMOPT1_FTM2CH1SEL_MASK              (0x100U)                                            /*!< SIM_FTMOPT1: FTM2CH1SEL Mask            */
#define SIM_FTMOPT1_FTM2CH1SEL_SHIFT             (8U)                                                /*!< SIM_FTMOPT1: FTM2CH1SEL Position        */
#define SIM_FTMOPT1_FTM2CH1SEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM2CH1SEL_SHIFT))&SIM_FTMOPT1_FTM2CH1SEL_MASK) /*!< SIM_FTMOPT1                             */
#define SIM_FTMOPT1_FTM0_OUTSEL_MASK             (0xFF0000U)                                         /*!< SIM_FTMOPT1: FTM0_OUTSEL Mask           */
#define SIM_FTMOPT1_FTM0_OUTSEL_SHIFT            (16U)                                               /*!< SIM_FTMOPT1: FTM0_OUTSEL Position       */
#define SIM_FTMOPT1_FTM0_OUTSEL(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM0_OUTSEL_SHIFT))&SIM_FTMOPT1_FTM0_OUTSEL_MASK) /*!< SIM_FTMOPT1                             */
/* ------- SDID Bit Fields                          ------ */
#define SIM_SDID_PINID_MASK                      (0x7FU)                                             /*!< SIM_SDID: PINID Mask                    */
#define SIM_SDID_PINID_SHIFT                     (0U)                                                /*!< SIM_SDID: PINID Position                */
#define SIM_SDID_PINID(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SDID_PINID_SHIFT))&SIM_SDID_PINID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_PROJECTID_MASK                  (0xF80U)                                            /*!< SIM_SDID: PROJECTID Mask                */
#define SIM_SDID_PROJECTID_SHIFT                 (7U)                                                /*!< SIM_SDID: PROJECTID Position            */
#define SIM_SDID_PROJECTID(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_SDID_PROJECTID_SHIFT))&SIM_SDID_PROJECTID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_REVID_MASK                      (0xF000U)                                           /*!< SIM_SDID: REVID Mask                    */
#define SIM_SDID_REVID_SHIFT                     (12U)                                               /*!< SIM_SDID: REVID Position                */
#define SIM_SDID_REVID(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SDID_REVID_SHIFT))&SIM_SDID_REVID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_RAMSIZE_MASK                    (0xF0000U)                                          /*!< SIM_SDID: RAMSIZE Mask                  */
#define SIM_SDID_RAMSIZE_SHIFT                   (16U)                                               /*!< SIM_SDID: RAMSIZE Position              */
#define SIM_SDID_RAMSIZE(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_SDID_RAMSIZE_SHIFT))&SIM_SDID_RAMSIZE_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_SERIESID_MASK                   (0xF00000U)                                         /*!< SIM_SDID: SERIESID Mask                 */
#define SIM_SDID_SERIESID_SHIFT                  (20U)                                               /*!< SIM_SDID: SERIESID Position             */
#define SIM_SDID_SERIESID(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_SDID_SERIESID_SHIFT))&SIM_SDID_SERIESID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_SUBFAMID_MASK                   (0xF000000U)                                        /*!< SIM_SDID: SUBFAMID Mask                 */
#define SIM_SDID_SUBFAMID_SHIFT                  (24U)                                               /*!< SIM_SDID: SUBFAMID Position             */
#define SIM_SDID_SUBFAMID(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_SDID_SUBFAMID_SHIFT))&SIM_SDID_SUBFAMID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_FAMILYID_MASK                   (0xF0000000U)                                       /*!< SIM_SDID: FAMILYID Mask                 */
#define SIM_SDID_FAMILYID_SHIFT                  (28U)                                               /*!< SIM_SDID: FAMILYID Position             */
#define SIM_SDID_FAMILYID(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_SDID_FAMILYID_SHIFT))&SIM_SDID_FAMILYID_MASK) /*!< SIM_SDID                                */
/* ------- FCFG1 Bit Fields                         ------ */
#define SIM_FCFG1_FLASHDIS_MASK                  (0x1U)                                              /*!< SIM_FCFG1: FLASHDIS Mask                */
#define SIM_FCFG1_FLASHDIS_SHIFT                 (0U)                                                /*!< SIM_FCFG1: FLASHDIS Position            */
#define SIM_FCFG1_FLASHDIS(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_FCFG1_FLASHDIS_SHIFT))&SIM_FCFG1_FLASHDIS_MASK) /*!< SIM_FCFG1                               */
#define SIM_FCFG1_FLASHDOZE_MASK                 (0x2U)                                              /*!< SIM_FCFG1: FLASHDOZE Mask               */
#define SIM_FCFG1_FLASHDOZE_SHIFT                (1U)                                                /*!< SIM_FCFG1: FLASHDOZE Position           */
#define SIM_FCFG1_FLASHDOZE(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_FCFG1_FLASHDOZE_SHIFT))&SIM_FCFG1_FLASHDOZE_MASK) /*!< SIM_FCFG1                               */
#define SIM_FCFG1_DEPART_MASK                    (0xF000U)                                           /*!< SIM_FCFG1: DEPART Mask                  */
#define SIM_FCFG1_DEPART_SHIFT                   (12U)                                               /*!< SIM_FCFG1: DEPART Position              */
#define SIM_FCFG1_DEPART(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_FCFG1_DEPART_SHIFT))&SIM_FCFG1_DEPART_MASK) /*!< SIM_FCFG1                               */
#define SIM_FCFG1_EEERAMSIZE_MASK                (0xF0000U)                                          /*!< SIM_FCFG1: EEERAMSIZE Mask              */
#define SIM_FCFG1_EEERAMSIZE_SHIFT               (16U)                                               /*!< SIM_FCFG1: EEERAMSIZE Position          */
#define SIM_FCFG1_EEERAMSIZE(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_FCFG1_EEERAMSIZE_SHIFT))&SIM_FCFG1_EEERAMSIZE_MASK) /*!< SIM_FCFG1                               */
#define SIM_FCFG1_PFSIZE_MASK                    (0xF000000U)                                        /*!< SIM_FCFG1: PFSIZE Mask                  */
#define SIM_FCFG1_PFSIZE_SHIFT                   (24U)                                               /*!< SIM_FCFG1: PFSIZE Position              */
#define SIM_FCFG1_PFSIZE(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_FCFG1_PFSIZE_SHIFT))&SIM_FCFG1_PFSIZE_MASK) /*!< SIM_FCFG1                               */
#define SIM_FCFG1_NVMSIZE_MASK                   (0xF0000000U)                                       /*!< SIM_FCFG1: NVMSIZE Mask                 */
#define SIM_FCFG1_NVMSIZE_SHIFT                  (28U)                                               /*!< SIM_FCFG1: NVMSIZE Position             */
#define SIM_FCFG1_NVMSIZE(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_FCFG1_NVMSIZE_SHIFT))&SIM_FCFG1_NVMSIZE_MASK) /*!< SIM_FCFG1                               */
/* ------- FCFG2 Bit Fields                         ------ */
#define SIM_FCFG2_MAXADDR1_MASK                  (0x7F0000U)                                         /*!< SIM_FCFG2: MAXADDR1 Mask                */
#define SIM_FCFG2_MAXADDR1_SHIFT                 (16U)                                               /*!< SIM_FCFG2: MAXADDR1 Position            */
#define SIM_FCFG2_MAXADDR1(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_FCFG2_MAXADDR1_SHIFT))&SIM_FCFG2_MAXADDR1_MASK) /*!< SIM_FCFG2                               */
#define SIM_FCFG2_MAXADDR0_MASK                  (0x7F000000U)                                       /*!< SIM_FCFG2: MAXADDR0 Mask                */
#define SIM_FCFG2_MAXADDR0_SHIFT                 (24U)                                               /*!< SIM_FCFG2: MAXADDR0 Position            */
#define SIM_FCFG2_MAXADDR0(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_FCFG2_MAXADDR0_SHIFT))&SIM_FCFG2_MAXADDR0_MASK) /*!< SIM_FCFG2                               */
/* ------- UIDH Bit Fields                          ------ */
#define SIM_UIDH_UID127_96_MASK                  (0xFFFFFFFFU)                                       /*!< SIM_UIDH: UID127_96 Mask                */
#define SIM_UIDH_UID127_96_SHIFT                 (0U)                                                /*!< SIM_UIDH: UID127_96 Position            */
#define SIM_UIDH_UID127_96(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_UIDH_UID127_96_SHIFT))&SIM_UIDH_UID127_96_MASK) /*!< SIM_UIDH                                */
/* ------- UIDMH Bit Fields                         ------ */
#define SIM_UIDMH_UID95_64_MASK                  (0xFFFFFFFFU)                                       /*!< SIM_UIDMH: UID95_64 Mask                */
#define SIM_UIDMH_UID95_64_SHIFT                 (0U)                                                /*!< SIM_UIDMH: UID95_64 Position            */
#define SIM_UIDMH_UID95_64(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_UIDMH_UID95_64_SHIFT))&SIM_UIDMH_UID95_64_MASK) /*!< SIM_UIDMH                               */
/* ------- UIDML Bit Fields                         ------ */
#define SIM_UIDML_UID63_32_MASK                  (0xFFFFFFFFU)                                       /*!< SIM_UIDML: UID63_32 Mask                */
#define SIM_UIDML_UID63_32_SHIFT                 (0U)                                                /*!< SIM_UIDML: UID63_32 Position            */
#define SIM_UIDML_UID63_32(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_UIDML_UID63_32_SHIFT))&SIM_UIDML_UID63_32_MASK) /*!< SIM_UIDML                               */
/* ------- UIDL Bit Fields                          ------ */
#define SIM_UIDL_UID31_0_MASK                    (0xFFFFFFFFU)                                       /*!< SIM_UIDL: UID31_0 Mask                  */
#define SIM_UIDL_UID31_0_SHIFT                   (0U)                                                /*!< SIM_UIDL: UID31_0 Position              */
#define SIM_UIDL_UID31_0(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_UIDL_UID31_0_SHIFT))&SIM_UIDL_UID31_0_MASK) /*!< SIM_UIDL                                */
/* ------- MISCTRL Bit Fields                       ------ */
#define SIM_MISCTRL_SW_TRG_MASK                  (0x1U)                                              /*!< SIM_MISCTRL: SW_TRG Mask                */
#define SIM_MISCTRL_SW_TRG_SHIFT                 (0U)                                                /*!< SIM_MISCTRL: SW_TRG Position            */
#define SIM_MISCTRL_SW_TRG(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL_SW_TRG_SHIFT))&SIM_MISCTRL_SW_TRG_MASK) /*!< SIM_MISCTRL                             */
#define SIM_MISCTRL_DMA_INT_SEL_MASK             (0xF0U)                                             /*!< SIM_MISCTRL: DMA_INT_SEL Mask           */
#define SIM_MISCTRL_DMA_INT_SEL_SHIFT            (4U)                                                /*!< SIM_MISCTRL: DMA_INT_SEL Position       */
#define SIM_MISCTRL_DMA_INT_SEL(x)               (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL_DMA_INT_SEL_SHIFT))&SIM_MISCTRL_DMA_INT_SEL_MASK) /*!< SIM_MISCTRL                             */
#define SIM_MISCTRL_UART0ODE_MASK                (0x10000U)                                          /*!< SIM_MISCTRL: UART0ODE Mask              */
#define SIM_MISCTRL_UART0ODE_SHIFT               (16U)                                               /*!< SIM_MISCTRL: UART0ODE Position          */
#define SIM_MISCTRL_UART0ODE(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL_UART0ODE_SHIFT))&SIM_MISCTRL_UART0ODE_MASK) /*!< SIM_MISCTRL                             */
#define SIM_MISCTRL_UART1ODE_MASK                (0x20000U)                                          /*!< SIM_MISCTRL: UART1ODE Mask              */
#define SIM_MISCTRL_UART1ODE_SHIFT               (17U)                                               /*!< SIM_MISCTRL: UART1ODE Position          */
#define SIM_MISCTRL_UART1ODE(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL_UART1ODE_SHIFT))&SIM_MISCTRL_UART1ODE_MASK) /*!< SIM_MISCTRL                             */
#define SIM_MISCTRL_UART2ODE_MASK                (0x40000U)                                          /*!< SIM_MISCTRL: UART2ODE Mask              */
#define SIM_MISCTRL_UART2ODE_SHIFT               (18U)                                               /*!< SIM_MISCTRL: UART2ODE Position          */
#define SIM_MISCTRL_UART2ODE(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL_UART2ODE_SHIFT))&SIM_MISCTRL_UART2ODE_MASK) /*!< SIM_MISCTRL                             */
/**
 * @} */ /* End group SIM_Register_Masks_GROUP 
 */

/* SIM - Peripheral instance base addresses */
#define SIM_BasePtr                    0x40048000UL //!< Peripheral base address
#define SIM                            ((SIM_Type *) SIM_BasePtr) //!< Freescale base pointer
#define SIM_BASE_PTR                   (SIM) //!< Freescale style base pointer
/**
 * @} */ /* End group SIM_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup SMC_Peripheral_access_layer_GROUP SMC Peripheral Access Layer
* @brief C Struct for SMC
* @{
*/

/* ================================================================================ */
/* ================           SMC (file:SMC_MKE15Z7)               ================ */
/* ================================================================================ */

/**
 * @brief System Mode Controller
 */
/**
* @addtogroup SMC_structs_GROUP SMC struct
* @brief Struct for SMC
* @{
*/
typedef struct {                                /*       SMC Structure                                                */
   __I  uint32_t  VERID;                        /**< 0000: SMC Version ID Register                                      */
   __I  uint32_t  PARAM;                        /**< 0004: SMC Parameter Register                                       */
   __IO uint32_t  PMPROT;                       /**< 0008: Power Mode Protection register                               */
   __IO uint32_t  PMCTRL;                       /**< 000C: Power Mode Control register                                  */
   __IO uint32_t  STOPCTRL;                     /**< 0010: Stop Control Register                                        */
   __I  uint32_t  PMSTAT;                       /**< 0014: Power Mode Status register                                   */
} SMC_Type;

/**
 * @} */ /* End group SMC_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'SMC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup SMC_Register_Masks_GROUP SMC Register Masks
* @brief Register Masks for SMC
* @{
*/
/* ------- VERID Bit Fields                         ------ */
#define SMC_VERID_FEATURE_MASK                   (0xFFFFU)                                           /*!< SMC_VERID: FEATURE Mask                 */
#define SMC_VERID_FEATURE_SHIFT                  (0U)                                                /*!< SMC_VERID: FEATURE Position             */
#define SMC_VERID_FEATURE(x)                     (((uint32_t)(((uint32_t)(x))<<SMC_VERID_FEATURE_SHIFT))&SMC_VERID_FEATURE_MASK) /*!< SMC_VERID                               */
#define SMC_VERID_MINOR_MASK                     (0xFF0000U)                                         /*!< SMC_VERID: MINOR Mask                   */
#define SMC_VERID_MINOR_SHIFT                    (16U)                                               /*!< SMC_VERID: MINOR Position               */
#define SMC_VERID_MINOR(x)                       (((uint32_t)(((uint32_t)(x))<<SMC_VERID_MINOR_SHIFT))&SMC_VERID_MINOR_MASK) /*!< SMC_VERID                               */
#define SMC_VERID_MAJOR_MASK                     (0xFF000000U)                                       /*!< SMC_VERID: MAJOR Mask                   */
#define SMC_VERID_MAJOR_SHIFT                    (24U)                                               /*!< SMC_VERID: MAJOR Position               */
#define SMC_VERID_MAJOR(x)                       (((uint32_t)(((uint32_t)(x))<<SMC_VERID_MAJOR_SHIFT))&SMC_VERID_MAJOR_MASK) /*!< SMC_VERID                               */
/* ------- PARAM Bit Fields                         ------ */
#define SMC_PARAM_EHSRUN_MASK                    (0x1U)                                              /*!< SMC_PARAM: EHSRUN Mask                  */
#define SMC_PARAM_EHSRUN_SHIFT                   (0U)                                                /*!< SMC_PARAM: EHSRUN Position              */
#define SMC_PARAM_EHSRUN(x)                      (((uint32_t)(((uint32_t)(x))<<SMC_PARAM_EHSRUN_SHIFT))&SMC_PARAM_EHSRUN_MASK) /*!< SMC_PARAM                               */
#define SMC_PARAM_ELLS_MASK                      (0x8U)                                              /*!< SMC_PARAM: ELLS Mask                    */
#define SMC_PARAM_ELLS_SHIFT                     (3U)                                                /*!< SMC_PARAM: ELLS Position                */
#define SMC_PARAM_ELLS(x)                        (((uint32_t)(((uint32_t)(x))<<SMC_PARAM_ELLS_SHIFT))&SMC_PARAM_ELLS_MASK) /*!< SMC_PARAM                               */
#define SMC_PARAM_ELLS2_MASK                     (0x20U)                                             /*!< SMC_PARAM: ELLS2 Mask                   */
#define SMC_PARAM_ELLS2_SHIFT                    (5U)                                                /*!< SMC_PARAM: ELLS2 Position               */
#define SMC_PARAM_ELLS2(x)                       (((uint32_t)(((uint32_t)(x))<<SMC_PARAM_ELLS2_SHIFT))&SMC_PARAM_ELLS2_MASK) /*!< SMC_PARAM                               */
#define SMC_PARAM_EVLLS0_MASK                    (0x40U)                                             /*!< SMC_PARAM: EVLLS0 Mask                  */
#define SMC_PARAM_EVLLS0_SHIFT                   (6U)                                                /*!< SMC_PARAM: EVLLS0 Position              */
#define SMC_PARAM_EVLLS0(x)                      (((uint32_t)(((uint32_t)(x))<<SMC_PARAM_EVLLS0_SHIFT))&SMC_PARAM_EVLLS0_MASK) /*!< SMC_PARAM                               */
/* ------- PMPROT Bit Fields                        ------ */
#define SMC_PMPROT_AVLP_MASK                     (0x20U)                                             /*!< SMC_PMPROT: AVLP Mask                   */
#define SMC_PMPROT_AVLP_SHIFT                    (5U)                                                /*!< SMC_PMPROT: AVLP Position               */
#define SMC_PMPROT_AVLP(x)                       (((uint32_t)(((uint32_t)(x))<<SMC_PMPROT_AVLP_SHIFT))&SMC_PMPROT_AVLP_MASK) /*!< SMC_PMPROT                              */
/* ------- PMCTRL Bit Fields                        ------ */
#define SMC_PMCTRL_STOPM_MASK                    (0x7U)                                              /*!< SMC_PMCTRL: STOPM Mask                  */
#define SMC_PMCTRL_STOPM_SHIFT                   (0U)                                                /*!< SMC_PMCTRL: STOPM Position              */
#define SMC_PMCTRL_STOPM(x)                      (((uint32_t)(((uint32_t)(x))<<SMC_PMCTRL_STOPM_SHIFT))&SMC_PMCTRL_STOPM_MASK) /*!< SMC_PMCTRL                              */
#define SMC_PMCTRL_STOPA_MASK                    (0x8U)                                              /*!< SMC_PMCTRL: STOPA Mask                  */
#define SMC_PMCTRL_STOPA_SHIFT                   (3U)                                                /*!< SMC_PMCTRL: STOPA Position              */
#define SMC_PMCTRL_STOPA(x)                      (((uint32_t)(((uint32_t)(x))<<SMC_PMCTRL_STOPA_SHIFT))&SMC_PMCTRL_STOPA_MASK) /*!< SMC_PMCTRL                              */
#define SMC_PMCTRL_RUNM_MASK                     (0x60U)                                             /*!< SMC_PMCTRL: RUNM Mask                   */
#define SMC_PMCTRL_RUNM_SHIFT                    (5U)                                                /*!< SMC_PMCTRL: RUNM Position               */
#define SMC_PMCTRL_RUNM(x)                       (((uint32_t)(((uint32_t)(x))<<SMC_PMCTRL_RUNM_SHIFT))&SMC_PMCTRL_RUNM_MASK) /*!< SMC_PMCTRL                              */
/* ------- STOPCTRL Bit Fields                      ------ */
#define SMC_STOPCTRL_PSTOPO_MASK                 (0xC0U)                                             /*!< SMC_STOPCTRL: PSTOPO Mask               */
#define SMC_STOPCTRL_PSTOPO_SHIFT                (6U)                                                /*!< SMC_STOPCTRL: PSTOPO Position           */
#define SMC_STOPCTRL_PSTOPO(x)                   (((uint32_t)(((uint32_t)(x))<<SMC_STOPCTRL_PSTOPO_SHIFT))&SMC_STOPCTRL_PSTOPO_MASK) /*!< SMC_STOPCTRL                            */
/* ------- PMSTAT Bit Fields                        ------ */
#define SMC_PMSTAT_PMSTAT_MASK                   (0xFFU)                                             /*!< SMC_PMSTAT: PMSTAT Mask                 */
#define SMC_PMSTAT_PMSTAT_SHIFT                  (0U)                                                /*!< SMC_PMSTAT: PMSTAT Position             */
#define SMC_PMSTAT_PMSTAT(x)                     (((uint32_t)(((uint32_t)(x))<<SMC_PMSTAT_PMSTAT_SHIFT))&SMC_PMSTAT_PMSTAT_MASK) /*!< SMC_PMSTAT                              */
/**
 * @} */ /* End group SMC_Register_Masks_GROUP 
 */

/* SMC - Peripheral instance base addresses */
#define SMC_BasePtr                    0x4007E000UL //!< Peripheral base address
#define SMC                            ((SMC_Type *) SMC_BasePtr) //!< Freescale base pointer
#define SMC_BASE_PTR                   (SMC) //!< Freescale style base pointer
/**
 * @} */ /* End group SMC_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup SYST_Peripheral_access_layer_GROUP SYST Peripheral Access Layer
* @brief C Struct for SYST
* @{
*/

/* ================================================================================ */
/* ================           SYST (file:SYST)                     ================ */
/* ================================================================================ */

/**
 * @brief System timer
 */
/**
* @addtogroup SYST_structs_GROUP SYST struct
* @brief Struct for SYST
* @{
*/
typedef struct {                                /*       SYST Structure                                               */
   __IO uint32_t  CSR;                          /**< 0000: Control and Status Register                                  */
   __IO uint32_t  RVR;                          /**< 0004: Reload Value Register                                        */
   __IO uint32_t  CVR;                          /**< 0008: Current Value Register                                       */
   __I  uint32_t  CALIB;                        /**< 000C: Calibration Value Register                                   */
} SYST_Type;

/**
 * @} */ /* End group SYST_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'SYST' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup SYST_Register_Masks_GROUP SYST Register Masks
* @brief Register Masks for SYST
* @{
*/
/* ------- CSR Bit Fields                           ------ */
#define SYST_CSR_ENABLE_MASK                     (0x1U)                                              /*!< SYST_CSR: ENABLE Mask                   */
#define SYST_CSR_ENABLE_SHIFT                    (0U)                                                /*!< SYST_CSR: ENABLE Position               */
#define SYST_CSR_ENABLE(x)                       (((uint32_t)(((uint32_t)(x))<<SYST_CSR_ENABLE_SHIFT))&SYST_CSR_ENABLE_MASK) /*!< SYST_CSR                                */
#define SYST_CSR_TICKINT_MASK                    (0x2U)                                              /*!< SYST_CSR: TICKINT Mask                  */
#define SYST_CSR_TICKINT_SHIFT                   (1U)                                                /*!< SYST_CSR: TICKINT Position              */
#define SYST_CSR_TICKINT(x)                      (((uint32_t)(((uint32_t)(x))<<SYST_CSR_TICKINT_SHIFT))&SYST_CSR_TICKINT_MASK) /*!< SYST_CSR                                */
#define SYST_CSR_CLKSOURCE_MASK                  (0x4U)                                              /*!< SYST_CSR: CLKSOURCE Mask                */
#define SYST_CSR_CLKSOURCE_SHIFT                 (2U)                                                /*!< SYST_CSR: CLKSOURCE Position            */
#define SYST_CSR_CLKSOURCE(x)                    (((uint32_t)(((uint32_t)(x))<<SYST_CSR_CLKSOURCE_SHIFT))&SYST_CSR_CLKSOURCE_MASK) /*!< SYST_CSR                                */
#define SYST_CSR_COUNTFLAG_MASK                  (0x10000U)                                          /*!< SYST_CSR: COUNTFLAG Mask                */
#define SYST_CSR_COUNTFLAG_SHIFT                 (16U)                                               /*!< SYST_CSR: COUNTFLAG Position            */
#define SYST_CSR_COUNTFLAG(x)                    (((uint32_t)(((uint32_t)(x))<<SYST_CSR_COUNTFLAG_SHIFT))&SYST_CSR_COUNTFLAG_MASK) /*!< SYST_CSR                                */
/* ------- RVR Bit Fields                           ------ */
#define SYST_RVR_RELOAD_MASK                     (0xFFFFFFU)                                         /*!< SYST_RVR: RELOAD Mask                   */
#define SYST_RVR_RELOAD_SHIFT                    (0U)                                                /*!< SYST_RVR: RELOAD Position               */
#define SYST_RVR_RELOAD(x)                       (((uint32_t)(((uint32_t)(x))<<SYST_RVR_RELOAD_SHIFT))&SYST_RVR_RELOAD_MASK) /*!< SYST_RVR                                */
/* ------- CVR Bit Fields                           ------ */
#define SYST_CVR_CURRENT_MASK                    (0xFFFFFFU)                                         /*!< SYST_CVR: CURRENT Mask                  */
#define SYST_CVR_CURRENT_SHIFT                   (0U)                                                /*!< SYST_CVR: CURRENT Position              */
#define SYST_CVR_CURRENT(x)                      (((uint32_t)(((uint32_t)(x))<<SYST_CVR_CURRENT_SHIFT))&SYST_CVR_CURRENT_MASK) /*!< SYST_CVR                                */
/* ------- CALIB Bit Fields                         ------ */
#define SYST_CALIB_TENMS_MASK                    (0xFFFFFFU)                                         /*!< SYST_CALIB: TENMS Mask                  */
#define SYST_CALIB_TENMS_SHIFT                   (0U)                                                /*!< SYST_CALIB: TENMS Position              */
#define SYST_CALIB_TENMS(x)                      (((uint32_t)(((uint32_t)(x))<<SYST_CALIB_TENMS_SHIFT))&SYST_CALIB_TENMS_MASK) /*!< SYST_CALIB                              */
#define SYST_CALIB_SKEW_MASK                     (0x40000000U)                                       /*!< SYST_CALIB: SKEW Mask                   */
#define SYST_CALIB_SKEW_SHIFT                    (30U)                                               /*!< SYST_CALIB: SKEW Position               */
#define SYST_CALIB_SKEW(x)                       (((uint32_t)(((uint32_t)(x))<<SYST_CALIB_SKEW_SHIFT))&SYST_CALIB_SKEW_MASK) /*!< SYST_CALIB                              */
#define SYST_CALIB_NOREF_MASK                    (0x80000000U)                                       /*!< SYST_CALIB: NOREF Mask                  */
#define SYST_CALIB_NOREF_SHIFT                   (31U)                                               /*!< SYST_CALIB: NOREF Position              */
#define SYST_CALIB_NOREF(x)                      (((uint32_t)(((uint32_t)(x))<<SYST_CALIB_NOREF_SHIFT))&SYST_CALIB_NOREF_MASK) /*!< SYST_CALIB                              */
/**
 * @} */ /* End group SYST_Register_Masks_GROUP 
 */

/* SYST - Peripheral instance base addresses */
#define SYST_BasePtr                   0xE000E010UL //!< Peripheral base address
#define SYST                           ((SYST_Type *) SYST_BasePtr) //!< Freescale base pointer
#define SYST_BASE_PTR                  (SYST) //!< Freescale style base pointer
/**
 * @} */ /* End group SYST_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup TRGMUX_Peripheral_access_layer_GROUP TRGMUX Peripheral Access Layer
* @brief C Struct for TRGMUX
* @{
*/

/* ================================================================================ */
/* ================           TRGMUX0 (file:TRGMUX0_MKE15Z7)       ================ */
/* ================================================================================ */

/**
 * @brief Trigger MUX Control
 */
/**
* @addtogroup TRGMUX_structs_GROUP TRGMUX struct
* @brief Struct for TRGMUX
* @{
*/
typedef struct {                                /*       TRGMUX0 Structure                                            */
   __IO uint32_t  TRGMUX_DMAMUX0;               /**< 0000: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_EXTOUT0;               /**< 0004: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_EXTOUT1;               /**< 0008: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_ADC0;                  /**< 000C: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_ADC1;                  /**< 0010: TRGMUX Register                                              */
        uint8_t   RESERVED_0[8];               
   __IO uint32_t  TRGMUX_CMP0;                  /**< 001C: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_CMP1;                  /**< 0020: TRGMUX Register                                              */
        uint8_t   RESERVED_1[4];               
   __IO uint32_t  TRGMUX_FTM0;                  /**< 0028: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_FTM1;                  /**< 002C: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_FTM2;                  /**< 0030: TRGMUX Register                                              */
        uint8_t   RESERVED_2[4];               
   __IO uint32_t  TRGMUX_PDB0;                  /**< 0038: TRGMUX Register                                              */
        uint8_t   RESERVED_3[8];               
   __IO uint32_t  TRGMUX_FLEXIO;                /**< 0044: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_LPIT0;                 /**< 0048: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_LPUART0;               /**< 004C: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_LPUART1;               /**< 0050: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_LPI2C0;                /**< 0054: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_LPI2C1;                /**< 0058: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_LPSPI0;                /**< 005C: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_LPSPI1;                /**< 0060: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_LPTMR0;                /**< 0064: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_TSI;                   /**< 0068: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_PWT;                   /**< 006C: TRGMUX Register                                              */
} TRGMUX0_Type;

/**
 * @} */ /* End group TRGMUX_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'TRGMUX0' Position & Mask macros                     ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup TRGMUX_Register_Masks_GROUP TRGMUX Register Masks
* @brief Register Masks for TRGMUX
* @{
*/
/* ------- TRGMUX_DMAMUX0 Bit Fields                ------ */
#define TRGMUX0_TRGMUX_DMAMUX0_SEL0_MASK         (0x3FU)                                             /*!< TRGMUX0_TRGMUX_DMAMUX0: SEL0 Mask       */
#define TRGMUX0_TRGMUX_DMAMUX0_SEL0_SHIFT        (0U)                                                /*!< TRGMUX0_TRGMUX_DMAMUX0: SEL0 Position   */
#define TRGMUX0_TRGMUX_DMAMUX0_SEL0(x)           (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_DMAMUX0_SEL0_SHIFT))&TRGMUX0_TRGMUX_DMAMUX0_SEL0_MASK) /*!< TRGMUX0_TRGMUX_DMAMUX0                  */
#define TRGMUX0_TRGMUX_DMAMUX0_SEL1_MASK         (0x3F00U)                                           /*!< TRGMUX0_TRGMUX_DMAMUX0: SEL1 Mask       */
#define TRGMUX0_TRGMUX_DMAMUX0_SEL1_SHIFT        (8U)                                                /*!< TRGMUX0_TRGMUX_DMAMUX0: SEL1 Position   */
#define TRGMUX0_TRGMUX_DMAMUX0_SEL1(x)           (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_DMAMUX0_SEL1_SHIFT))&TRGMUX0_TRGMUX_DMAMUX0_SEL1_MASK) /*!< TRGMUX0_TRGMUX_DMAMUX0                  */
#define TRGMUX0_TRGMUX_DMAMUX0_SEL2_MASK         (0x3F0000U)                                         /*!< TRGMUX0_TRGMUX_DMAMUX0: SEL2 Mask       */
#define TRGMUX0_TRGMUX_DMAMUX0_SEL2_SHIFT        (16U)                                               /*!< TRGMUX0_TRGMUX_DMAMUX0: SEL2 Position   */
#define TRGMUX0_TRGMUX_DMAMUX0_SEL2(x)           (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_DMAMUX0_SEL2_SHIFT))&TRGMUX0_TRGMUX_DMAMUX0_SEL2_MASK) /*!< TRGMUX0_TRGMUX_DMAMUX0                  */
#define TRGMUX0_TRGMUX_DMAMUX0_SEL3_MASK         (0x3F000000U)                                       /*!< TRGMUX0_TRGMUX_DMAMUX0: SEL3 Mask       */
#define TRGMUX0_TRGMUX_DMAMUX0_SEL3_SHIFT        (24U)                                               /*!< TRGMUX0_TRGMUX_DMAMUX0: SEL3 Position   */
#define TRGMUX0_TRGMUX_DMAMUX0_SEL3(x)           (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_DMAMUX0_SEL3_SHIFT))&TRGMUX0_TRGMUX_DMAMUX0_SEL3_MASK) /*!< TRGMUX0_TRGMUX_DMAMUX0                  */
#define TRGMUX0_TRGMUX_DMAMUX0_LK_MASK           (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_DMAMUX0: LK Mask         */
#define TRGMUX0_TRGMUX_DMAMUX0_LK_SHIFT          (31U)                                               /*!< TRGMUX0_TRGMUX_DMAMUX0: LK Position     */
#define TRGMUX0_TRGMUX_DMAMUX0_LK(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_DMAMUX0_LK_SHIFT))&TRGMUX0_TRGMUX_DMAMUX0_LK_MASK) /*!< TRGMUX0_TRGMUX_DMAMUX0                  */
/* ------- TRGMUX_EXTOUT0 Bit Fields                ------ */
#define TRGMUX0_TRGMUX_EXTOUT0_SEL0_MASK         (0x3FU)                                             /*!< TRGMUX0_TRGMUX_EXTOUT0: SEL0 Mask       */
#define TRGMUX0_TRGMUX_EXTOUT0_SEL0_SHIFT        (0U)                                                /*!< TRGMUX0_TRGMUX_EXTOUT0: SEL0 Position   */
#define TRGMUX0_TRGMUX_EXTOUT0_SEL0(x)           (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_EXTOUT0_SEL0_SHIFT))&TRGMUX0_TRGMUX_EXTOUT0_SEL0_MASK) /*!< TRGMUX0_TRGMUX_EXTOUT0                  */
#define TRGMUX0_TRGMUX_EXTOUT0_SEL1_MASK         (0x3F00U)                                           /*!< TRGMUX0_TRGMUX_EXTOUT0: SEL1 Mask       */
#define TRGMUX0_TRGMUX_EXTOUT0_SEL1_SHIFT        (8U)                                                /*!< TRGMUX0_TRGMUX_EXTOUT0: SEL1 Position   */
#define TRGMUX0_TRGMUX_EXTOUT0_SEL1(x)           (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_EXTOUT0_SEL1_SHIFT))&TRGMUX0_TRGMUX_EXTOUT0_SEL1_MASK) /*!< TRGMUX0_TRGMUX_EXTOUT0                  */
#define TRGMUX0_TRGMUX_EXTOUT0_SEL2_MASK         (0x3F0000U)                                         /*!< TRGMUX0_TRGMUX_EXTOUT0: SEL2 Mask       */
#define TRGMUX0_TRGMUX_EXTOUT0_SEL2_SHIFT        (16U)                                               /*!< TRGMUX0_TRGMUX_EXTOUT0: SEL2 Position   */
#define TRGMUX0_TRGMUX_EXTOUT0_SEL2(x)           (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_EXTOUT0_SEL2_SHIFT))&TRGMUX0_TRGMUX_EXTOUT0_SEL2_MASK) /*!< TRGMUX0_TRGMUX_EXTOUT0                  */
#define TRGMUX0_TRGMUX_EXTOUT0_SEL3_MASK         (0x3F000000U)                                       /*!< TRGMUX0_TRGMUX_EXTOUT0: SEL3 Mask       */
#define TRGMUX0_TRGMUX_EXTOUT0_SEL3_SHIFT        (24U)                                               /*!< TRGMUX0_TRGMUX_EXTOUT0: SEL3 Position   */
#define TRGMUX0_TRGMUX_EXTOUT0_SEL3(x)           (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_EXTOUT0_SEL3_SHIFT))&TRGMUX0_TRGMUX_EXTOUT0_SEL3_MASK) /*!< TRGMUX0_TRGMUX_EXTOUT0                  */
#define TRGMUX0_TRGMUX_EXTOUT0_LK_MASK           (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_EXTOUT0: LK Mask         */
#define TRGMUX0_TRGMUX_EXTOUT0_LK_SHIFT          (31U)                                               /*!< TRGMUX0_TRGMUX_EXTOUT0: LK Position     */
#define TRGMUX0_TRGMUX_EXTOUT0_LK(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_EXTOUT0_LK_SHIFT))&TRGMUX0_TRGMUX_EXTOUT0_LK_MASK) /*!< TRGMUX0_TRGMUX_EXTOUT0                  */
/* ------- TRGMUX_EXTOUT1 Bit Fields                ------ */
#define TRGMUX0_TRGMUX_EXTOUT1_SEL0_MASK         (0x3FU)                                             /*!< TRGMUX0_TRGMUX_EXTOUT1: SEL0 Mask       */
#define TRGMUX0_TRGMUX_EXTOUT1_SEL0_SHIFT        (0U)                                                /*!< TRGMUX0_TRGMUX_EXTOUT1: SEL0 Position   */
#define TRGMUX0_TRGMUX_EXTOUT1_SEL0(x)           (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_EXTOUT1_SEL0_SHIFT))&TRGMUX0_TRGMUX_EXTOUT1_SEL0_MASK) /*!< TRGMUX0_TRGMUX_EXTOUT1                  */
#define TRGMUX0_TRGMUX_EXTOUT1_SEL1_MASK         (0x3F00U)                                           /*!< TRGMUX0_TRGMUX_EXTOUT1: SEL1 Mask       */
#define TRGMUX0_TRGMUX_EXTOUT1_SEL1_SHIFT        (8U)                                                /*!< TRGMUX0_TRGMUX_EXTOUT1: SEL1 Position   */
#define TRGMUX0_TRGMUX_EXTOUT1_SEL1(x)           (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_EXTOUT1_SEL1_SHIFT))&TRGMUX0_TRGMUX_EXTOUT1_SEL1_MASK) /*!< TRGMUX0_TRGMUX_EXTOUT1                  */
#define TRGMUX0_TRGMUX_EXTOUT1_SEL2_MASK         (0x3F0000U)                                         /*!< TRGMUX0_TRGMUX_EXTOUT1: SEL2 Mask       */
#define TRGMUX0_TRGMUX_EXTOUT1_SEL2_SHIFT        (16U)                                               /*!< TRGMUX0_TRGMUX_EXTOUT1: SEL2 Position   */
#define TRGMUX0_TRGMUX_EXTOUT1_SEL2(x)           (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_EXTOUT1_SEL2_SHIFT))&TRGMUX0_TRGMUX_EXTOUT1_SEL2_MASK) /*!< TRGMUX0_TRGMUX_EXTOUT1                  */
#define TRGMUX0_TRGMUX_EXTOUT1_SEL3_MASK         (0x3F000000U)                                       /*!< TRGMUX0_TRGMUX_EXTOUT1: SEL3 Mask       */
#define TRGMUX0_TRGMUX_EXTOUT1_SEL3_SHIFT        (24U)                                               /*!< TRGMUX0_TRGMUX_EXTOUT1: SEL3 Position   */
#define TRGMUX0_TRGMUX_EXTOUT1_SEL3(x)           (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_EXTOUT1_SEL3_SHIFT))&TRGMUX0_TRGMUX_EXTOUT1_SEL3_MASK) /*!< TRGMUX0_TRGMUX_EXTOUT1                  */
#define TRGMUX0_TRGMUX_EXTOUT1_LK_MASK           (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_EXTOUT1: LK Mask         */
#define TRGMUX0_TRGMUX_EXTOUT1_LK_SHIFT          (31U)                                               /*!< TRGMUX0_TRGMUX_EXTOUT1: LK Position     */
#define TRGMUX0_TRGMUX_EXTOUT1_LK(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_EXTOUT1_LK_SHIFT))&TRGMUX0_TRGMUX_EXTOUT1_LK_MASK) /*!< TRGMUX0_TRGMUX_EXTOUT1                  */
/* ------- TRGMUX_ADC0 Bit Fields                   ------ */
#define TRGMUX0_TRGMUX_ADC0_SEL0_MASK            (0x3FU)                                             /*!< TRGMUX0_TRGMUX_ADC0: SEL0 Mask          */
#define TRGMUX0_TRGMUX_ADC0_SEL0_SHIFT           (0U)                                                /*!< TRGMUX0_TRGMUX_ADC0: SEL0 Position      */
#define TRGMUX0_TRGMUX_ADC0_SEL0(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_ADC0_SEL0_SHIFT))&TRGMUX0_TRGMUX_ADC0_SEL0_MASK) /*!< TRGMUX0_TRGMUX_ADC0                     */
#define TRGMUX0_TRGMUX_ADC0_SEL1_MASK            (0x3F00U)                                           /*!< TRGMUX0_TRGMUX_ADC0: SEL1 Mask          */
#define TRGMUX0_TRGMUX_ADC0_SEL1_SHIFT           (8U)                                                /*!< TRGMUX0_TRGMUX_ADC0: SEL1 Position      */
#define TRGMUX0_TRGMUX_ADC0_SEL1(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_ADC0_SEL1_SHIFT))&TRGMUX0_TRGMUX_ADC0_SEL1_MASK) /*!< TRGMUX0_TRGMUX_ADC0                     */
#define TRGMUX0_TRGMUX_ADC0_LK_MASK              (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_ADC0: LK Mask            */
#define TRGMUX0_TRGMUX_ADC0_LK_SHIFT             (31U)                                               /*!< TRGMUX0_TRGMUX_ADC0: LK Position        */
#define TRGMUX0_TRGMUX_ADC0_LK(x)                (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_ADC0_LK_SHIFT))&TRGMUX0_TRGMUX_ADC0_LK_MASK) /*!< TRGMUX0_TRGMUX_ADC0                     */
/* ------- TRGMUX_ADC1 Bit Fields                   ------ */
#define TRGMUX0_TRGMUX_ADC1_SEL0_MASK            (0x3FU)                                             /*!< TRGMUX0_TRGMUX_ADC1: SEL0 Mask          */
#define TRGMUX0_TRGMUX_ADC1_SEL0_SHIFT           (0U)                                                /*!< TRGMUX0_TRGMUX_ADC1: SEL0 Position      */
#define TRGMUX0_TRGMUX_ADC1_SEL0(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_ADC1_SEL0_SHIFT))&TRGMUX0_TRGMUX_ADC1_SEL0_MASK) /*!< TRGMUX0_TRGMUX_ADC1                     */
#define TRGMUX0_TRGMUX_ADC1_SEL1_MASK            (0x3F00U)                                           /*!< TRGMUX0_TRGMUX_ADC1: SEL1 Mask          */
#define TRGMUX0_TRGMUX_ADC1_SEL1_SHIFT           (8U)                                                /*!< TRGMUX0_TRGMUX_ADC1: SEL1 Position      */
#define TRGMUX0_TRGMUX_ADC1_SEL1(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_ADC1_SEL1_SHIFT))&TRGMUX0_TRGMUX_ADC1_SEL1_MASK) /*!< TRGMUX0_TRGMUX_ADC1                     */
#define TRGMUX0_TRGMUX_ADC1_LK_MASK              (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_ADC1: LK Mask            */
#define TRGMUX0_TRGMUX_ADC1_LK_SHIFT             (31U)                                               /*!< TRGMUX0_TRGMUX_ADC1: LK Position        */
#define TRGMUX0_TRGMUX_ADC1_LK(x)                (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_ADC1_LK_SHIFT))&TRGMUX0_TRGMUX_ADC1_LK_MASK) /*!< TRGMUX0_TRGMUX_ADC1                     */
/* ------- TRGMUX_CMP0 Bit Fields                   ------ */
#define TRGMUX0_TRGMUX_CMP0_SEL0_MASK            (0x3FU)                                             /*!< TRGMUX0_TRGMUX_CMP0: SEL0 Mask          */
#define TRGMUX0_TRGMUX_CMP0_SEL0_SHIFT           (0U)                                                /*!< TRGMUX0_TRGMUX_CMP0: SEL0 Position      */
#define TRGMUX0_TRGMUX_CMP0_SEL0(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_CMP0_SEL0_SHIFT))&TRGMUX0_TRGMUX_CMP0_SEL0_MASK) /*!< TRGMUX0_TRGMUX_CMP0                     */
#define TRGMUX0_TRGMUX_CMP0_LK_MASK              (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_CMP0: LK Mask            */
#define TRGMUX0_TRGMUX_CMP0_LK_SHIFT             (31U)                                               /*!< TRGMUX0_TRGMUX_CMP0: LK Position        */
#define TRGMUX0_TRGMUX_CMP0_LK(x)                (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_CMP0_LK_SHIFT))&TRGMUX0_TRGMUX_CMP0_LK_MASK) /*!< TRGMUX0_TRGMUX_CMP0                     */
/* ------- TRGMUX_CMP1 Bit Fields                   ------ */
#define TRGMUX0_TRGMUX_CMP1_SEL0_MASK            (0x3FU)                                             /*!< TRGMUX0_TRGMUX_CMP1: SEL0 Mask          */
#define TRGMUX0_TRGMUX_CMP1_SEL0_SHIFT           (0U)                                                /*!< TRGMUX0_TRGMUX_CMP1: SEL0 Position      */
#define TRGMUX0_TRGMUX_CMP1_SEL0(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_CMP1_SEL0_SHIFT))&TRGMUX0_TRGMUX_CMP1_SEL0_MASK) /*!< TRGMUX0_TRGMUX_CMP1                     */
#define TRGMUX0_TRGMUX_CMP1_LK_MASK              (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_CMP1: LK Mask            */
#define TRGMUX0_TRGMUX_CMP1_LK_SHIFT             (31U)                                               /*!< TRGMUX0_TRGMUX_CMP1: LK Position        */
#define TRGMUX0_TRGMUX_CMP1_LK(x)                (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_CMP1_LK_SHIFT))&TRGMUX0_TRGMUX_CMP1_LK_MASK) /*!< TRGMUX0_TRGMUX_CMP1                     */
/* ------- TRGMUX_FTM0 Bit Fields                   ------ */
#define TRGMUX0_TRGMUX_FTM0_SEL0_MASK            (0x3FU)                                             /*!< TRGMUX0_TRGMUX_FTM0: SEL0 Mask          */
#define TRGMUX0_TRGMUX_FTM0_SEL0_SHIFT           (0U)                                                /*!< TRGMUX0_TRGMUX_FTM0: SEL0 Position      */
#define TRGMUX0_TRGMUX_FTM0_SEL0(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FTM0_SEL0_SHIFT))&TRGMUX0_TRGMUX_FTM0_SEL0_MASK) /*!< TRGMUX0_TRGMUX_FTM0                     */
#define TRGMUX0_TRGMUX_FTM0_SEL1_MASK            (0x3F00U)                                           /*!< TRGMUX0_TRGMUX_FTM0: SEL1 Mask          */
#define TRGMUX0_TRGMUX_FTM0_SEL1_SHIFT           (8U)                                                /*!< TRGMUX0_TRGMUX_FTM0: SEL1 Position      */
#define TRGMUX0_TRGMUX_FTM0_SEL1(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FTM0_SEL1_SHIFT))&TRGMUX0_TRGMUX_FTM0_SEL1_MASK) /*!< TRGMUX0_TRGMUX_FTM0                     */
#define TRGMUX0_TRGMUX_FTM0_SEL2_MASK            (0x3F0000U)                                         /*!< TRGMUX0_TRGMUX_FTM0: SEL2 Mask          */
#define TRGMUX0_TRGMUX_FTM0_SEL2_SHIFT           (16U)                                               /*!< TRGMUX0_TRGMUX_FTM0: SEL2 Position      */
#define TRGMUX0_TRGMUX_FTM0_SEL2(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FTM0_SEL2_SHIFT))&TRGMUX0_TRGMUX_FTM0_SEL2_MASK) /*!< TRGMUX0_TRGMUX_FTM0                     */
#define TRGMUX0_TRGMUX_FTM0_SEL3_MASK            (0x3F000000U)                                       /*!< TRGMUX0_TRGMUX_FTM0: SEL3 Mask          */
#define TRGMUX0_TRGMUX_FTM0_SEL3_SHIFT           (24U)                                               /*!< TRGMUX0_TRGMUX_FTM0: SEL3 Position      */
#define TRGMUX0_TRGMUX_FTM0_SEL3(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FTM0_SEL3_SHIFT))&TRGMUX0_TRGMUX_FTM0_SEL3_MASK) /*!< TRGMUX0_TRGMUX_FTM0                     */
#define TRGMUX0_TRGMUX_FTM0_LK_MASK              (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_FTM0: LK Mask            */
#define TRGMUX0_TRGMUX_FTM0_LK_SHIFT             (31U)                                               /*!< TRGMUX0_TRGMUX_FTM0: LK Position        */
#define TRGMUX0_TRGMUX_FTM0_LK(x)                (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FTM0_LK_SHIFT))&TRGMUX0_TRGMUX_FTM0_LK_MASK) /*!< TRGMUX0_TRGMUX_FTM0                     */
/* ------- TRGMUX_FTM1 Bit Fields                   ------ */
#define TRGMUX0_TRGMUX_FTM1_SEL0_MASK            (0x3FU)                                             /*!< TRGMUX0_TRGMUX_FTM1: SEL0 Mask          */
#define TRGMUX0_TRGMUX_FTM1_SEL0_SHIFT           (0U)                                                /*!< TRGMUX0_TRGMUX_FTM1: SEL0 Position      */
#define TRGMUX0_TRGMUX_FTM1_SEL0(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FTM1_SEL0_SHIFT))&TRGMUX0_TRGMUX_FTM1_SEL0_MASK) /*!< TRGMUX0_TRGMUX_FTM1                     */
#define TRGMUX0_TRGMUX_FTM1_SEL1_MASK            (0x3F00U)                                           /*!< TRGMUX0_TRGMUX_FTM1: SEL1 Mask          */
#define TRGMUX0_TRGMUX_FTM1_SEL1_SHIFT           (8U)                                                /*!< TRGMUX0_TRGMUX_FTM1: SEL1 Position      */
#define TRGMUX0_TRGMUX_FTM1_SEL1(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FTM1_SEL1_SHIFT))&TRGMUX0_TRGMUX_FTM1_SEL1_MASK) /*!< TRGMUX0_TRGMUX_FTM1                     */
#define TRGMUX0_TRGMUX_FTM1_SEL2_MASK            (0x3F0000U)                                         /*!< TRGMUX0_TRGMUX_FTM1: SEL2 Mask          */
#define TRGMUX0_TRGMUX_FTM1_SEL2_SHIFT           (16U)                                               /*!< TRGMUX0_TRGMUX_FTM1: SEL2 Position      */
#define TRGMUX0_TRGMUX_FTM1_SEL2(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FTM1_SEL2_SHIFT))&TRGMUX0_TRGMUX_FTM1_SEL2_MASK) /*!< TRGMUX0_TRGMUX_FTM1                     */
#define TRGMUX0_TRGMUX_FTM1_LK_MASK              (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_FTM1: LK Mask            */
#define TRGMUX0_TRGMUX_FTM1_LK_SHIFT             (31U)                                               /*!< TRGMUX0_TRGMUX_FTM1: LK Position        */
#define TRGMUX0_TRGMUX_FTM1_LK(x)                (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FTM1_LK_SHIFT))&TRGMUX0_TRGMUX_FTM1_LK_MASK) /*!< TRGMUX0_TRGMUX_FTM1                     */
/* ------- TRGMUX_FTM2 Bit Fields                   ------ */
#define TRGMUX0_TRGMUX_FTM2_SEL0_MASK            (0x3FU)                                             /*!< TRGMUX0_TRGMUX_FTM2: SEL0 Mask          */
#define TRGMUX0_TRGMUX_FTM2_SEL0_SHIFT           (0U)                                                /*!< TRGMUX0_TRGMUX_FTM2: SEL0 Position      */
#define TRGMUX0_TRGMUX_FTM2_SEL0(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FTM2_SEL0_SHIFT))&TRGMUX0_TRGMUX_FTM2_SEL0_MASK) /*!< TRGMUX0_TRGMUX_FTM2                     */
#define TRGMUX0_TRGMUX_FTM2_SEL1_MASK            (0x3F00U)                                           /*!< TRGMUX0_TRGMUX_FTM2: SEL1 Mask          */
#define TRGMUX0_TRGMUX_FTM2_SEL1_SHIFT           (8U)                                                /*!< TRGMUX0_TRGMUX_FTM2: SEL1 Position      */
#define TRGMUX0_TRGMUX_FTM2_SEL1(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FTM2_SEL1_SHIFT))&TRGMUX0_TRGMUX_FTM2_SEL1_MASK) /*!< TRGMUX0_TRGMUX_FTM2                     */
#define TRGMUX0_TRGMUX_FTM2_SEL2_MASK            (0x3F0000U)                                         /*!< TRGMUX0_TRGMUX_FTM2: SEL2 Mask          */
#define TRGMUX0_TRGMUX_FTM2_SEL2_SHIFT           (16U)                                               /*!< TRGMUX0_TRGMUX_FTM2: SEL2 Position      */
#define TRGMUX0_TRGMUX_FTM2_SEL2(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FTM2_SEL2_SHIFT))&TRGMUX0_TRGMUX_FTM2_SEL2_MASK) /*!< TRGMUX0_TRGMUX_FTM2                     */
#define TRGMUX0_TRGMUX_FTM2_LK_MASK              (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_FTM2: LK Mask            */
#define TRGMUX0_TRGMUX_FTM2_LK_SHIFT             (31U)                                               /*!< TRGMUX0_TRGMUX_FTM2: LK Position        */
#define TRGMUX0_TRGMUX_FTM2_LK(x)                (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FTM2_LK_SHIFT))&TRGMUX0_TRGMUX_FTM2_LK_MASK) /*!< TRGMUX0_TRGMUX_FTM2                     */
/* ------- TRGMUX_PDB0 Bit Fields                   ------ */
#define TRGMUX0_TRGMUX_PDB0_SEL0_MASK            (0x3FU)                                             /*!< TRGMUX0_TRGMUX_PDB0: SEL0 Mask          */
#define TRGMUX0_TRGMUX_PDB0_SEL0_SHIFT           (0U)                                                /*!< TRGMUX0_TRGMUX_PDB0: SEL0 Position      */
#define TRGMUX0_TRGMUX_PDB0_SEL0(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_PDB0_SEL0_SHIFT))&TRGMUX0_TRGMUX_PDB0_SEL0_MASK) /*!< TRGMUX0_TRGMUX_PDB0                     */
#define TRGMUX0_TRGMUX_PDB0_LK_MASK              (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_PDB0: LK Mask            */
#define TRGMUX0_TRGMUX_PDB0_LK_SHIFT             (31U)                                               /*!< TRGMUX0_TRGMUX_PDB0: LK Position        */
#define TRGMUX0_TRGMUX_PDB0_LK(x)                (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_PDB0_LK_SHIFT))&TRGMUX0_TRGMUX_PDB0_LK_MASK) /*!< TRGMUX0_TRGMUX_PDB0                     */
/* ------- TRGMUX_FLEXIO Bit Fields                 ------ */
#define TRGMUX0_TRGMUX_FLEXIO_SEL0_MASK          (0x3FU)                                             /*!< TRGMUX0_TRGMUX_FLEXIO: SEL0 Mask        */
#define TRGMUX0_TRGMUX_FLEXIO_SEL0_SHIFT         (0U)                                                /*!< TRGMUX0_TRGMUX_FLEXIO: SEL0 Position    */
#define TRGMUX0_TRGMUX_FLEXIO_SEL0(x)            (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FLEXIO_SEL0_SHIFT))&TRGMUX0_TRGMUX_FLEXIO_SEL0_MASK) /*!< TRGMUX0_TRGMUX_FLEXIO                   */
#define TRGMUX0_TRGMUX_FLEXIO_SEL1_MASK          (0x3F00U)                                           /*!< TRGMUX0_TRGMUX_FLEXIO: SEL1 Mask        */
#define TRGMUX0_TRGMUX_FLEXIO_SEL1_SHIFT         (8U)                                                /*!< TRGMUX0_TRGMUX_FLEXIO: SEL1 Position    */
#define TRGMUX0_TRGMUX_FLEXIO_SEL1(x)            (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FLEXIO_SEL1_SHIFT))&TRGMUX0_TRGMUX_FLEXIO_SEL1_MASK) /*!< TRGMUX0_TRGMUX_FLEXIO                   */
#define TRGMUX0_TRGMUX_FLEXIO_SEL2_MASK          (0x3F0000U)                                         /*!< TRGMUX0_TRGMUX_FLEXIO: SEL2 Mask        */
#define TRGMUX0_TRGMUX_FLEXIO_SEL2_SHIFT         (16U)                                               /*!< TRGMUX0_TRGMUX_FLEXIO: SEL2 Position    */
#define TRGMUX0_TRGMUX_FLEXIO_SEL2(x)            (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FLEXIO_SEL2_SHIFT))&TRGMUX0_TRGMUX_FLEXIO_SEL2_MASK) /*!< TRGMUX0_TRGMUX_FLEXIO                   */
#define TRGMUX0_TRGMUX_FLEXIO_SEL3_MASK          (0x3F000000U)                                       /*!< TRGMUX0_TRGMUX_FLEXIO: SEL3 Mask        */
#define TRGMUX0_TRGMUX_FLEXIO_SEL3_SHIFT         (24U)                                               /*!< TRGMUX0_TRGMUX_FLEXIO: SEL3 Position    */
#define TRGMUX0_TRGMUX_FLEXIO_SEL3(x)            (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FLEXIO_SEL3_SHIFT))&TRGMUX0_TRGMUX_FLEXIO_SEL3_MASK) /*!< TRGMUX0_TRGMUX_FLEXIO                   */
#define TRGMUX0_TRGMUX_FLEXIO_LK_MASK            (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_FLEXIO: LK Mask          */
#define TRGMUX0_TRGMUX_FLEXIO_LK_SHIFT           (31U)                                               /*!< TRGMUX0_TRGMUX_FLEXIO: LK Position      */
#define TRGMUX0_TRGMUX_FLEXIO_LK(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_FLEXIO_LK_SHIFT))&TRGMUX0_TRGMUX_FLEXIO_LK_MASK) /*!< TRGMUX0_TRGMUX_FLEXIO                   */
/* ------- TRGMUX_LPIT0 Bit Fields                  ------ */
#define TRGMUX0_TRGMUX_LPIT0_SEL0_MASK           (0x3FU)                                             /*!< TRGMUX0_TRGMUX_LPIT0: SEL0 Mask         */
#define TRGMUX0_TRGMUX_LPIT0_SEL0_SHIFT          (0U)                                                /*!< TRGMUX0_TRGMUX_LPIT0: SEL0 Position     */
#define TRGMUX0_TRGMUX_LPIT0_SEL0(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPIT0_SEL0_SHIFT))&TRGMUX0_TRGMUX_LPIT0_SEL0_MASK) /*!< TRGMUX0_TRGMUX_LPIT0                    */
#define TRGMUX0_TRGMUX_LPIT0_SEL1_MASK           (0x3F00U)                                           /*!< TRGMUX0_TRGMUX_LPIT0: SEL1 Mask         */
#define TRGMUX0_TRGMUX_LPIT0_SEL1_SHIFT          (8U)                                                /*!< TRGMUX0_TRGMUX_LPIT0: SEL1 Position     */
#define TRGMUX0_TRGMUX_LPIT0_SEL1(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPIT0_SEL1_SHIFT))&TRGMUX0_TRGMUX_LPIT0_SEL1_MASK) /*!< TRGMUX0_TRGMUX_LPIT0                    */
#define TRGMUX0_TRGMUX_LPIT0_SEL2_MASK           (0x3F0000U)                                         /*!< TRGMUX0_TRGMUX_LPIT0: SEL2 Mask         */
#define TRGMUX0_TRGMUX_LPIT0_SEL2_SHIFT          (16U)                                               /*!< TRGMUX0_TRGMUX_LPIT0: SEL2 Position     */
#define TRGMUX0_TRGMUX_LPIT0_SEL2(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPIT0_SEL2_SHIFT))&TRGMUX0_TRGMUX_LPIT0_SEL2_MASK) /*!< TRGMUX0_TRGMUX_LPIT0                    */
#define TRGMUX0_TRGMUX_LPIT0_SEL3_MASK           (0x3F000000U)                                       /*!< TRGMUX0_TRGMUX_LPIT0: SEL3 Mask         */
#define TRGMUX0_TRGMUX_LPIT0_SEL3_SHIFT          (24U)                                               /*!< TRGMUX0_TRGMUX_LPIT0: SEL3 Position     */
#define TRGMUX0_TRGMUX_LPIT0_SEL3(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPIT0_SEL3_SHIFT))&TRGMUX0_TRGMUX_LPIT0_SEL3_MASK) /*!< TRGMUX0_TRGMUX_LPIT0                    */
#define TRGMUX0_TRGMUX_LPIT0_LK_MASK             (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_LPIT0: LK Mask           */
#define TRGMUX0_TRGMUX_LPIT0_LK_SHIFT            (31U)                                               /*!< TRGMUX0_TRGMUX_LPIT0: LK Position       */
#define TRGMUX0_TRGMUX_LPIT0_LK(x)               (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPIT0_LK_SHIFT))&TRGMUX0_TRGMUX_LPIT0_LK_MASK) /*!< TRGMUX0_TRGMUX_LPIT0                    */
/* ------- TRGMUX_LPUART0 Bit Fields                ------ */
#define TRGMUX0_TRGMUX_LPUART0_SEL0_MASK         (0x3FU)                                             /*!< TRGMUX0_TRGMUX_LPUART0: SEL0 Mask       */
#define TRGMUX0_TRGMUX_LPUART0_SEL0_SHIFT        (0U)                                                /*!< TRGMUX0_TRGMUX_LPUART0: SEL0 Position   */
#define TRGMUX0_TRGMUX_LPUART0_SEL0(x)           (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPUART0_SEL0_SHIFT))&TRGMUX0_TRGMUX_LPUART0_SEL0_MASK) /*!< TRGMUX0_TRGMUX_LPUART0                  */
#define TRGMUX0_TRGMUX_LPUART0_LK_MASK           (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_LPUART0: LK Mask         */
#define TRGMUX0_TRGMUX_LPUART0_LK_SHIFT          (31U)                                               /*!< TRGMUX0_TRGMUX_LPUART0: LK Position     */
#define TRGMUX0_TRGMUX_LPUART0_LK(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPUART0_LK_SHIFT))&TRGMUX0_TRGMUX_LPUART0_LK_MASK) /*!< TRGMUX0_TRGMUX_LPUART0                  */
/* ------- TRGMUX_LPUART1 Bit Fields                ------ */
#define TRGMUX0_TRGMUX_LPUART1_SEL0_MASK         (0x3FU)                                             /*!< TRGMUX0_TRGMUX_LPUART1: SEL0 Mask       */
#define TRGMUX0_TRGMUX_LPUART1_SEL0_SHIFT        (0U)                                                /*!< TRGMUX0_TRGMUX_LPUART1: SEL0 Position   */
#define TRGMUX0_TRGMUX_LPUART1_SEL0(x)           (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPUART1_SEL0_SHIFT))&TRGMUX0_TRGMUX_LPUART1_SEL0_MASK) /*!< TRGMUX0_TRGMUX_LPUART1                  */
#define TRGMUX0_TRGMUX_LPUART1_LK_MASK           (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_LPUART1: LK Mask         */
#define TRGMUX0_TRGMUX_LPUART1_LK_SHIFT          (31U)                                               /*!< TRGMUX0_TRGMUX_LPUART1: LK Position     */
#define TRGMUX0_TRGMUX_LPUART1_LK(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPUART1_LK_SHIFT))&TRGMUX0_TRGMUX_LPUART1_LK_MASK) /*!< TRGMUX0_TRGMUX_LPUART1                  */
/* ------- TRGMUX_LPI2C0 Bit Fields                 ------ */
#define TRGMUX0_TRGMUX_LPI2C0_SEL0_MASK          (0x3FU)                                             /*!< TRGMUX0_TRGMUX_LPI2C0: SEL0 Mask        */
#define TRGMUX0_TRGMUX_LPI2C0_SEL0_SHIFT         (0U)                                                /*!< TRGMUX0_TRGMUX_LPI2C0: SEL0 Position    */
#define TRGMUX0_TRGMUX_LPI2C0_SEL0(x)            (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPI2C0_SEL0_SHIFT))&TRGMUX0_TRGMUX_LPI2C0_SEL0_MASK) /*!< TRGMUX0_TRGMUX_LPI2C0                   */
#define TRGMUX0_TRGMUX_LPI2C0_LK_MASK            (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_LPI2C0: LK Mask          */
#define TRGMUX0_TRGMUX_LPI2C0_LK_SHIFT           (31U)                                               /*!< TRGMUX0_TRGMUX_LPI2C0: LK Position      */
#define TRGMUX0_TRGMUX_LPI2C0_LK(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPI2C0_LK_SHIFT))&TRGMUX0_TRGMUX_LPI2C0_LK_MASK) /*!< TRGMUX0_TRGMUX_LPI2C0                   */
/* ------- TRGMUX_LPI2C1 Bit Fields                 ------ */
#define TRGMUX0_TRGMUX_LPI2C1_SEL0_MASK          (0x3FU)                                             /*!< TRGMUX0_TRGMUX_LPI2C1: SEL0 Mask        */
#define TRGMUX0_TRGMUX_LPI2C1_SEL0_SHIFT         (0U)                                                /*!< TRGMUX0_TRGMUX_LPI2C1: SEL0 Position    */
#define TRGMUX0_TRGMUX_LPI2C1_SEL0(x)            (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPI2C1_SEL0_SHIFT))&TRGMUX0_TRGMUX_LPI2C1_SEL0_MASK) /*!< TRGMUX0_TRGMUX_LPI2C1                   */
#define TRGMUX0_TRGMUX_LPI2C1_LK_MASK            (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_LPI2C1: LK Mask          */
#define TRGMUX0_TRGMUX_LPI2C1_LK_SHIFT           (31U)                                               /*!< TRGMUX0_TRGMUX_LPI2C1: LK Position      */
#define TRGMUX0_TRGMUX_LPI2C1_LK(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPI2C1_LK_SHIFT))&TRGMUX0_TRGMUX_LPI2C1_LK_MASK) /*!< TRGMUX0_TRGMUX_LPI2C1                   */
/* ------- TRGMUX_LPSPI0 Bit Fields                 ------ */
#define TRGMUX0_TRGMUX_LPSPI0_SEL0_MASK          (0x3FU)                                             /*!< TRGMUX0_TRGMUX_LPSPI0: SEL0 Mask        */
#define TRGMUX0_TRGMUX_LPSPI0_SEL0_SHIFT         (0U)                                                /*!< TRGMUX0_TRGMUX_LPSPI0: SEL0 Position    */
#define TRGMUX0_TRGMUX_LPSPI0_SEL0(x)            (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPSPI0_SEL0_SHIFT))&TRGMUX0_TRGMUX_LPSPI0_SEL0_MASK) /*!< TRGMUX0_TRGMUX_LPSPI0                   */
#define TRGMUX0_TRGMUX_LPSPI0_LK_MASK            (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_LPSPI0: LK Mask          */
#define TRGMUX0_TRGMUX_LPSPI0_LK_SHIFT           (31U)                                               /*!< TRGMUX0_TRGMUX_LPSPI0: LK Position      */
#define TRGMUX0_TRGMUX_LPSPI0_LK(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPSPI0_LK_SHIFT))&TRGMUX0_TRGMUX_LPSPI0_LK_MASK) /*!< TRGMUX0_TRGMUX_LPSPI0                   */
/* ------- TRGMUX_LPSPI1 Bit Fields                 ------ */
#define TRGMUX0_TRGMUX_LPSPI1_SEL0_MASK          (0x3FU)                                             /*!< TRGMUX0_TRGMUX_LPSPI1: SEL0 Mask        */
#define TRGMUX0_TRGMUX_LPSPI1_SEL0_SHIFT         (0U)                                                /*!< TRGMUX0_TRGMUX_LPSPI1: SEL0 Position    */
#define TRGMUX0_TRGMUX_LPSPI1_SEL0(x)            (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPSPI1_SEL0_SHIFT))&TRGMUX0_TRGMUX_LPSPI1_SEL0_MASK) /*!< TRGMUX0_TRGMUX_LPSPI1                   */
#define TRGMUX0_TRGMUX_LPSPI1_LK_MASK            (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_LPSPI1: LK Mask          */
#define TRGMUX0_TRGMUX_LPSPI1_LK_SHIFT           (31U)                                               /*!< TRGMUX0_TRGMUX_LPSPI1: LK Position      */
#define TRGMUX0_TRGMUX_LPSPI1_LK(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPSPI1_LK_SHIFT))&TRGMUX0_TRGMUX_LPSPI1_LK_MASK) /*!< TRGMUX0_TRGMUX_LPSPI1                   */
/* ------- TRGMUX_LPTMR0 Bit Fields                 ------ */
#define TRGMUX0_TRGMUX_LPTMR0_SEL0_MASK          (0x3FU)                                             /*!< TRGMUX0_TRGMUX_LPTMR0: SEL0 Mask        */
#define TRGMUX0_TRGMUX_LPTMR0_SEL0_SHIFT         (0U)                                                /*!< TRGMUX0_TRGMUX_LPTMR0: SEL0 Position    */
#define TRGMUX0_TRGMUX_LPTMR0_SEL0(x)            (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPTMR0_SEL0_SHIFT))&TRGMUX0_TRGMUX_LPTMR0_SEL0_MASK) /*!< TRGMUX0_TRGMUX_LPTMR0                   */
#define TRGMUX0_TRGMUX_LPTMR0_LK_MASK            (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_LPTMR0: LK Mask          */
#define TRGMUX0_TRGMUX_LPTMR0_LK_SHIFT           (31U)                                               /*!< TRGMUX0_TRGMUX_LPTMR0: LK Position      */
#define TRGMUX0_TRGMUX_LPTMR0_LK(x)              (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_LPTMR0_LK_SHIFT))&TRGMUX0_TRGMUX_LPTMR0_LK_MASK) /*!< TRGMUX0_TRGMUX_LPTMR0                   */
/* ------- TRGMUX_TSI Bit Fields                    ------ */
#define TRGMUX0_TRGMUX_TSI_SEL0_MASK             (0x3FU)                                             /*!< TRGMUX0_TRGMUX_TSI: SEL0 Mask           */
#define TRGMUX0_TRGMUX_TSI_SEL0_SHIFT            (0U)                                                /*!< TRGMUX0_TRGMUX_TSI: SEL0 Position       */
#define TRGMUX0_TRGMUX_TSI_SEL0(x)               (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_TSI_SEL0_SHIFT))&TRGMUX0_TRGMUX_TSI_SEL0_MASK) /*!< TRGMUX0_TRGMUX_TSI                      */
#define TRGMUX0_TRGMUX_TSI_LK_MASK               (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_TSI: LK Mask             */
#define TRGMUX0_TRGMUX_TSI_LK_SHIFT              (31U)                                               /*!< TRGMUX0_TRGMUX_TSI: LK Position         */
#define TRGMUX0_TRGMUX_TSI_LK(x)                 (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_TSI_LK_SHIFT))&TRGMUX0_TRGMUX_TSI_LK_MASK) /*!< TRGMUX0_TRGMUX_TSI                      */
/* ------- TRGMUX_PWT Bit Fields                    ------ */
#define TRGMUX0_TRGMUX_PWT_SEL0_MASK             (0x3FU)                                             /*!< TRGMUX0_TRGMUX_PWT: SEL0 Mask           */
#define TRGMUX0_TRGMUX_PWT_SEL0_SHIFT            (0U)                                                /*!< TRGMUX0_TRGMUX_PWT: SEL0 Position       */
#define TRGMUX0_TRGMUX_PWT_SEL0(x)               (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_PWT_SEL0_SHIFT))&TRGMUX0_TRGMUX_PWT_SEL0_MASK) /*!< TRGMUX0_TRGMUX_PWT                      */
#define TRGMUX0_TRGMUX_PWT_LK_MASK               (0x80000000U)                                       /*!< TRGMUX0_TRGMUX_PWT: LK Mask             */
#define TRGMUX0_TRGMUX_PWT_LK_SHIFT              (31U)                                               /*!< TRGMUX0_TRGMUX_PWT: LK Position         */
#define TRGMUX0_TRGMUX_PWT_LK(x)                 (((uint32_t)(((uint32_t)(x))<<TRGMUX0_TRGMUX_PWT_LK_SHIFT))&TRGMUX0_TRGMUX_PWT_LK_MASK) /*!< TRGMUX0_TRGMUX_PWT                      */
/**
 * @} */ /* End group TRGMUX_Register_Masks_GROUP 
 */

/* TRGMUX0 - Peripheral instance base addresses */
#define TRGMUX0_BasePtr                0x40062000UL //!< Peripheral base address
#define TRGMUX0                        ((TRGMUX0_Type *) TRGMUX0_BasePtr) //!< Freescale base pointer
#define TRGMUX0_BASE_PTR               (TRGMUX0) //!< Freescale style base pointer
/**
 * @} */ /* End group TRGMUX_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup TRGMUX_Peripheral_access_layer_GROUP TRGMUX Peripheral Access Layer
* @brief C Struct for TRGMUX
* @{
*/

/* ================================================================================ */
/* ================           TRGMUX1 (file:TRGMUX1_MKE15Z7)       ================ */
/* ================================================================================ */

/**
 * @brief Trigger MUX Control
 */
/**
* @addtogroup TRGMUX_structs_GROUP TRGMUX struct
* @brief Struct for TRGMUX
* @{
*/
typedef struct {                                /*       TRGMUX1 Structure                                            */
   __IO uint32_t  TRGMUX_CTRL0;                 /**< 0000: TRGMUX Register                                              */
   __IO uint32_t  TRGMUX_CTRL1;                 /**< 0004: TRGMUX Register                                              */
} TRGMUX1_Type;

/**
 * @} */ /* End group TRGMUX_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'TRGMUX1' Position & Mask macros                     ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup TRGMUX_Register_Masks_GROUP TRGMUX Register Masks
* @brief Register Masks for TRGMUX
* @{
*/
/* ------- TRGMUX_CTRL0 Bit Fields                  ------ */
#define TRGMUX1_TRGMUX_CTRL0_SEL0_MASK           (0x3FU)                                             /*!< TRGMUX1_TRGMUX_CTRL0: SEL0 Mask         */
#define TRGMUX1_TRGMUX_CTRL0_SEL0_SHIFT          (0U)                                                /*!< TRGMUX1_TRGMUX_CTRL0: SEL0 Position     */
#define TRGMUX1_TRGMUX_CTRL0_SEL0(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX1_TRGMUX_CTRL0_SEL0_SHIFT))&TRGMUX1_TRGMUX_CTRL0_SEL0_MASK) /*!< TRGMUX1_TRGMUX_CTRL0                    */
#define TRGMUX1_TRGMUX_CTRL0_SEL1_MASK           (0x3F00U)                                           /*!< TRGMUX1_TRGMUX_CTRL0: SEL1 Mask         */
#define TRGMUX1_TRGMUX_CTRL0_SEL1_SHIFT          (8U)                                                /*!< TRGMUX1_TRGMUX_CTRL0: SEL1 Position     */
#define TRGMUX1_TRGMUX_CTRL0_SEL1(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX1_TRGMUX_CTRL0_SEL1_SHIFT))&TRGMUX1_TRGMUX_CTRL0_SEL1_MASK) /*!< TRGMUX1_TRGMUX_CTRL0                    */
#define TRGMUX1_TRGMUX_CTRL0_SEL2_MASK           (0x3F0000U)                                         /*!< TRGMUX1_TRGMUX_CTRL0: SEL2 Mask         */
#define TRGMUX1_TRGMUX_CTRL0_SEL2_SHIFT          (16U)                                               /*!< TRGMUX1_TRGMUX_CTRL0: SEL2 Position     */
#define TRGMUX1_TRGMUX_CTRL0_SEL2(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX1_TRGMUX_CTRL0_SEL2_SHIFT))&TRGMUX1_TRGMUX_CTRL0_SEL2_MASK) /*!< TRGMUX1_TRGMUX_CTRL0                    */
#define TRGMUX1_TRGMUX_CTRL0_SEL3_MASK           (0x3F000000U)                                       /*!< TRGMUX1_TRGMUX_CTRL0: SEL3 Mask         */
#define TRGMUX1_TRGMUX_CTRL0_SEL3_SHIFT          (24U)                                               /*!< TRGMUX1_TRGMUX_CTRL0: SEL3 Position     */
#define TRGMUX1_TRGMUX_CTRL0_SEL3(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX1_TRGMUX_CTRL0_SEL3_SHIFT))&TRGMUX1_TRGMUX_CTRL0_SEL3_MASK) /*!< TRGMUX1_TRGMUX_CTRL0                    */
#define TRGMUX1_TRGMUX_CTRL0_LK_MASK             (0x80000000U)                                       /*!< TRGMUX1_TRGMUX_CTRL0: LK Mask           */
#define TRGMUX1_TRGMUX_CTRL0_LK_SHIFT            (31U)                                               /*!< TRGMUX1_TRGMUX_CTRL0: LK Position       */
#define TRGMUX1_TRGMUX_CTRL0_LK(x)               (((uint32_t)(((uint32_t)(x))<<TRGMUX1_TRGMUX_CTRL0_LK_SHIFT))&TRGMUX1_TRGMUX_CTRL0_LK_MASK) /*!< TRGMUX1_TRGMUX_CTRL0                    */
/* ------- TRGMUX_CTRL1 Bit Fields                  ------ */
#define TRGMUX1_TRGMUX_CTRL1_SEL0_MASK           (0x3FU)                                             /*!< TRGMUX1_TRGMUX_CTRL1: SEL0 Mask         */
#define TRGMUX1_TRGMUX_CTRL1_SEL0_SHIFT          (0U)                                                /*!< TRGMUX1_TRGMUX_CTRL1: SEL0 Position     */
#define TRGMUX1_TRGMUX_CTRL1_SEL0(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX1_TRGMUX_CTRL1_SEL0_SHIFT))&TRGMUX1_TRGMUX_CTRL1_SEL0_MASK) /*!< TRGMUX1_TRGMUX_CTRL1                    */
#define TRGMUX1_TRGMUX_CTRL1_SEL1_MASK           (0x3F00U)                                           /*!< TRGMUX1_TRGMUX_CTRL1: SEL1 Mask         */
#define TRGMUX1_TRGMUX_CTRL1_SEL1_SHIFT          (8U)                                                /*!< TRGMUX1_TRGMUX_CTRL1: SEL1 Position     */
#define TRGMUX1_TRGMUX_CTRL1_SEL1(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX1_TRGMUX_CTRL1_SEL1_SHIFT))&TRGMUX1_TRGMUX_CTRL1_SEL1_MASK) /*!< TRGMUX1_TRGMUX_CTRL1                    */
#define TRGMUX1_TRGMUX_CTRL1_SEL2_MASK           (0x3F0000U)                                         /*!< TRGMUX1_TRGMUX_CTRL1: SEL2 Mask         */
#define TRGMUX1_TRGMUX_CTRL1_SEL2_SHIFT          (16U)                                               /*!< TRGMUX1_TRGMUX_CTRL1: SEL2 Position     */
#define TRGMUX1_TRGMUX_CTRL1_SEL2(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX1_TRGMUX_CTRL1_SEL2_SHIFT))&TRGMUX1_TRGMUX_CTRL1_SEL2_MASK) /*!< TRGMUX1_TRGMUX_CTRL1                    */
#define TRGMUX1_TRGMUX_CTRL1_SEL3_MASK           (0x3F000000U)                                       /*!< TRGMUX1_TRGMUX_CTRL1: SEL3 Mask         */
#define TRGMUX1_TRGMUX_CTRL1_SEL3_SHIFT          (24U)                                               /*!< TRGMUX1_TRGMUX_CTRL1: SEL3 Position     */
#define TRGMUX1_TRGMUX_CTRL1_SEL3(x)             (((uint32_t)(((uint32_t)(x))<<TRGMUX1_TRGMUX_CTRL1_SEL3_SHIFT))&TRGMUX1_TRGMUX_CTRL1_SEL3_MASK) /*!< TRGMUX1_TRGMUX_CTRL1                    */
#define TRGMUX1_TRGMUX_CTRL1_LK_MASK             (0x80000000U)                                       /*!< TRGMUX1_TRGMUX_CTRL1: LK Mask           */
#define TRGMUX1_TRGMUX_CTRL1_LK_SHIFT            (31U)                                               /*!< TRGMUX1_TRGMUX_CTRL1: LK Position       */
#define TRGMUX1_TRGMUX_CTRL1_LK(x)               (((uint32_t)(((uint32_t)(x))<<TRGMUX1_TRGMUX_CTRL1_LK_SHIFT))&TRGMUX1_TRGMUX_CTRL1_LK_MASK) /*!< TRGMUX1_TRGMUX_CTRL1                    */
/**
 * @} */ /* End group TRGMUX_Register_Masks_GROUP 
 */

/* TRGMUX1 - Peripheral instance base addresses */
#define TRGMUX1_BasePtr                0x40063000UL //!< Peripheral base address
#define TRGMUX1                        ((TRGMUX1_Type *) TRGMUX1_BasePtr) //!< Freescale base pointer
#define TRGMUX1_BASE_PTR               (TRGMUX1) //!< Freescale style base pointer
/**
 * @} */ /* End group TRGMUX_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup WDOG_Peripheral_access_layer_GROUP WDOG Peripheral Access Layer
* @brief C Struct for WDOG
* @{
*/

/* ================================================================================ */
/* ================           WDOG (file:WDOG_MKE15Z7)             ================ */
/* ================================================================================ */

/**
 * @brief Watchdog timer
 */
/**
* @addtogroup WDOG_structs_GROUP WDOG struct
* @brief Struct for WDOG
* @{
*/
typedef struct {                                /*       WDOG Structure                                               */
   __IO uint32_t  CS;                           /**< 0000: Watchdog Control and Status Register                         */
   union {                                      /**< 0000: (size=0004)                                                  */
      __IO uint32_t  CNT;                       /**< 0004: Counter Register:                                            */
      struct {                                  /**< 0000: (size=0004)                                                  */
         __I  uint8_t   CNTLOW;                 /**< 0004: Counter Register: Low (see CNT for description)              */
         __I  uint8_t   CNTHIGH;                /**< 0005: Counter Register: High (see CNT for description)             */
              uint8_t   RESERVED_0[2];         
      };
   };
   union {                                      /**< 0000: (size=0004)                                                  */
      __IO uint32_t  TOVAL;                     /**< 0008: Timeout Value Register:                                      */
      struct {                                  /**< 0000: (size=0004)                                                  */
         __IO uint8_t   TOVALLOW;               /**< 0008: Timeout Value Register: Low (see TOVAL for description)      */
         __IO uint8_t   TOVALHIGH;              /**< 0009: Timeout Value Register: High (see TOVAL for description)     */
              uint8_t   RESERVED_1[2];         
      };
   };
   union {                                      /**< 0000: (size=0004)                                                  */
      __IO uint32_t  WIN;                       /**< 000C: Window Register:                                             */
      struct {                                  /**< 0000: (size=0004)                                                  */
         __IO uint8_t   WINLOW;                 /**< 000C: Window Register: Low (see WIN for description)               */
         __IO uint8_t   WINHIGH;                /**< 000D: Window Register: High (see WIN for description)              */
              uint8_t   RESERVED_2[2];         
      };
   };
} WDOG_Type;

/**
 * @} */ /* End group WDOG_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'WDOG' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup WDOG_Register_Masks_GROUP WDOG Register Masks
* @brief Register Masks for WDOG
* @{
*/
/* ------- CS Bit Fields                            ------ */
#define WDOG_CS_STOP_MASK                        (0x1U)                                              /*!< WDOG_CS: STOP Mask                      */
#define WDOG_CS_STOP_SHIFT                       (0U)                                                /*!< WDOG_CS: STOP Position                  */
#define WDOG_CS_STOP(x)                          (((uint32_t)(((uint32_t)(x))<<WDOG_CS_STOP_SHIFT))&WDOG_CS_STOP_MASK) /*!< WDOG_CS                                 */
#define WDOG_CS_WAIT_MASK                        (0x2U)                                              /*!< WDOG_CS: WAIT Mask                      */
#define WDOG_CS_WAIT_SHIFT                       (1U)                                                /*!< WDOG_CS: WAIT Position                  */
#define WDOG_CS_WAIT(x)                          (((uint32_t)(((uint32_t)(x))<<WDOG_CS_WAIT_SHIFT))&WDOG_CS_WAIT_MASK) /*!< WDOG_CS                                 */
#define WDOG_CS_DBG_MASK                         (0x4U)                                              /*!< WDOG_CS: DBG Mask                       */
#define WDOG_CS_DBG_SHIFT                        (2U)                                                /*!< WDOG_CS: DBG Position                   */
#define WDOG_CS_DBG(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_DBG_SHIFT))&WDOG_CS_DBG_MASK) /*!< WDOG_CS                                 */
#define WDOG_CS_TST_MASK                         (0x18U)                                             /*!< WDOG_CS: TST Mask                       */
#define WDOG_CS_TST_SHIFT                        (3U)                                                /*!< WDOG_CS: TST Position                   */
#define WDOG_CS_TST(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_TST_SHIFT))&WDOG_CS_TST_MASK) /*!< WDOG_CS                                 */
#define WDOG_CS_UPDATE_MASK                      (0x20U)                                             /*!< WDOG_CS: UPDATE Mask                    */
#define WDOG_CS_UPDATE_SHIFT                     (5U)                                                /*!< WDOG_CS: UPDATE Position                */
#define WDOG_CS_UPDATE(x)                        (((uint32_t)(((uint32_t)(x))<<WDOG_CS_UPDATE_SHIFT))&WDOG_CS_UPDATE_MASK) /*!< WDOG_CS                                 */
#define WDOG_CS_INT_MASK                         (0x40U)                                             /*!< WDOG_CS: INT Mask                       */
#define WDOG_CS_INT_SHIFT                        (6U)                                                /*!< WDOG_CS: INT Position                   */
#define WDOG_CS_INT(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_INT_SHIFT))&WDOG_CS_INT_MASK) /*!< WDOG_CS                                 */
#define WDOG_CS_EN_MASK                          (0x80U)                                             /*!< WDOG_CS: EN Mask                        */
#define WDOG_CS_EN_SHIFT                         (7U)                                                /*!< WDOG_CS: EN Position                    */
#define WDOG_CS_EN(x)                            (((uint32_t)(((uint32_t)(x))<<WDOG_CS_EN_SHIFT))&WDOG_CS_EN_MASK) /*!< WDOG_CS                                 */
#define WDOG_CS_CLK_MASK                         (0x300U)                                            /*!< WDOG_CS: CLK Mask                       */
#define WDOG_CS_CLK_SHIFT                        (8U)                                                /*!< WDOG_CS: CLK Position                   */
#define WDOG_CS_CLK(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_CLK_SHIFT))&WDOG_CS_CLK_MASK) /*!< WDOG_CS                                 */
#define WDOG_CS_RCS_MASK                         (0x400U)                                            /*!< WDOG_CS: RCS Mask                       */
#define WDOG_CS_RCS_SHIFT                        (10U)                                               /*!< WDOG_CS: RCS Position                   */
#define WDOG_CS_RCS(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_RCS_SHIFT))&WDOG_CS_RCS_MASK) /*!< WDOG_CS                                 */
#define WDOG_CS_ULK_MASK                         (0x800U)                                            /*!< WDOG_CS: ULK Mask                       */
#define WDOG_CS_ULK_SHIFT                        (11U)                                               /*!< WDOG_CS: ULK Position                   */
#define WDOG_CS_ULK(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_ULK_SHIFT))&WDOG_CS_ULK_MASK) /*!< WDOG_CS                                 */
#define WDOG_CS_PRES_MASK                        (0x1000U)                                           /*!< WDOG_CS: PRES Mask                      */
#define WDOG_CS_PRES_SHIFT                       (12U)                                               /*!< WDOG_CS: PRES Position                  */
#define WDOG_CS_PRES(x)                          (((uint32_t)(((uint32_t)(x))<<WDOG_CS_PRES_SHIFT))&WDOG_CS_PRES_MASK) /*!< WDOG_CS                                 */
#define WDOG_CS_CMD32EN_MASK                     (0x2000U)                                           /*!< WDOG_CS: CMD32EN Mask                   */
#define WDOG_CS_CMD32EN_SHIFT                    (13U)                                               /*!< WDOG_CS: CMD32EN Position               */
#define WDOG_CS_CMD32EN(x)                       (((uint32_t)(((uint32_t)(x))<<WDOG_CS_CMD32EN_SHIFT))&WDOG_CS_CMD32EN_MASK) /*!< WDOG_CS                                 */
#define WDOG_CS_FLG_MASK                         (0x4000U)                                           /*!< WDOG_CS: FLG Mask                       */
#define WDOG_CS_FLG_SHIFT                        (14U)                                               /*!< WDOG_CS: FLG Position                   */
#define WDOG_CS_FLG(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_FLG_SHIFT))&WDOG_CS_FLG_MASK) /*!< WDOG_CS                                 */
#define WDOG_CS_WIN_MASK                         (0x8000U)                                           /*!< WDOG_CS: WIN Mask                       */
#define WDOG_CS_WIN_SHIFT                        (15U)                                               /*!< WDOG_CS: WIN Position                   */
#define WDOG_CS_WIN(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_WIN_SHIFT))&WDOG_CS_WIN_MASK) /*!< WDOG_CS                                 */
/* ------- CNT Bit Fields                           ------ */
#define WDOG_CNT_CNTLOW_MASK                     (0xFFU)                                             /*!< WDOG_CNT: CNTLOW Mask                   */
#define WDOG_CNT_CNTLOW_SHIFT                    (0U)                                                /*!< WDOG_CNT: CNTLOW Position               */
#define WDOG_CNT_CNTLOW(x)                       (((uint32_t)(((uint32_t)(x))<<WDOG_CNT_CNTLOW_SHIFT))&WDOG_CNT_CNTLOW_MASK) /*!< WDOG_CNT                                */
#define WDOG_CNT_CNTHIGH_MASK                    (0xFF00U)                                           /*!< WDOG_CNT: CNTHIGH Mask                  */
#define WDOG_CNT_CNTHIGH_SHIFT                   (8U)                                                /*!< WDOG_CNT: CNTHIGH Position              */
#define WDOG_CNT_CNTHIGH(x)                      (((uint32_t)(((uint32_t)(x))<<WDOG_CNT_CNTHIGH_SHIFT))&WDOG_CNT_CNTHIGH_MASK) /*!< WDOG_CNT                                */
/* ------- CNTLOW Bit Fields                        ------ */
/* ------- CNTHIGH Bit Fields                       ------ */
/* ------- TOVAL Bit Fields                         ------ */
#define WDOG_TOVAL_TOVALLOW_MASK                 (0xFFU)                                             /*!< WDOG_TOVAL: TOVALLOW Mask               */
#define WDOG_TOVAL_TOVALLOW_SHIFT                (0U)                                                /*!< WDOG_TOVAL: TOVALLOW Position           */
#define WDOG_TOVAL_TOVALLOW(x)                   (((uint32_t)(((uint32_t)(x))<<WDOG_TOVAL_TOVALLOW_SHIFT))&WDOG_TOVAL_TOVALLOW_MASK) /*!< WDOG_TOVAL                              */
#define WDOG_TOVAL_TOVALHIGH_MASK                (0xFF00U)                                           /*!< WDOG_TOVAL: TOVALHIGH Mask              */
#define WDOG_TOVAL_TOVALHIGH_SHIFT               (8U)                                                /*!< WDOG_TOVAL: TOVALHIGH Position          */
#define WDOG_TOVAL_TOVALHIGH(x)                  (((uint32_t)(((uint32_t)(x))<<WDOG_TOVAL_TOVALHIGH_SHIFT))&WDOG_TOVAL_TOVALHIGH_MASK) /*!< WDOG_TOVAL                              */
/* ------- TOVALLOW Bit Fields                      ------ */
/* ------- TOVALHIGH Bit Fields                     ------ */
/* ------- WIN Bit Fields                           ------ */
#define WDOG_WIN_WINLOW_MASK                     (0xFFU)                                             /*!< WDOG_WIN: WINLOW Mask                   */
#define WDOG_WIN_WINLOW_SHIFT                    (0U)                                                /*!< WDOG_WIN: WINLOW Position               */
#define WDOG_WIN_WINLOW(x)                       (((uint32_t)(((uint32_t)(x))<<WDOG_WIN_WINLOW_SHIFT))&WDOG_WIN_WINLOW_MASK) /*!< WDOG_WIN                                */
#define WDOG_WIN_WINHIGH_MASK                    (0xFF00U)                                           /*!< WDOG_WIN: WINHIGH Mask                  */
#define WDOG_WIN_WINHIGH_SHIFT                   (8U)                                                /*!< WDOG_WIN: WINHIGH Position              */
#define WDOG_WIN_WINHIGH(x)                      (((uint32_t)(((uint32_t)(x))<<WDOG_WIN_WINHIGH_SHIFT))&WDOG_WIN_WINHIGH_MASK) /*!< WDOG_WIN                                */
/* ------- WINLOW Bit Fields                        ------ */
/* ------- WINHIGH Bit Fields                       ------ */
/**
 * @} */ /* End group WDOG_Register_Masks_GROUP 
 */

/* WDOG - Peripheral instance base addresses */
#define WDOG_BasePtr                   0x40052000UL //!< Peripheral base address
#define WDOG                           ((WDOG_Type *) WDOG_BasePtr) //!< Freescale base pointer
#define WDOG_BASE_PTR                  (WDOG) //!< Freescale style base pointer
/**
 * @} */ /* End group WDOG_Peripheral_access_layer_GROUP 
 */
/* --------------------  End of section using anonymous unions  ------------------- */
#if defined(__CC_ARM)
  #pragma pop
#elif defined(__ICCARM__)
  /* leave anonymous unions enabled */
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning restore
#else
  #warning Not supported compiler type
#endif
/**
 * @} */ /* End group Peripheral_access_layer_GROUP 
 */

#ifdef __cplusplus
}
#endif


#endif  /* MCU_MKE14Z7 */

