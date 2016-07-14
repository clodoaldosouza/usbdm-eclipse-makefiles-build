/*****************************************************************
 * @file     segment_lcd.h
 *
 * Routines to interface to Segment LCD on FRDM-KL46Z
 *
 * Based on:
 * https://eewiki.net/display/microcontroller/Using+the+Segment+LCD+Controller+on+the+Kinetis+KL46
 *
 * @revision 1.0 EPH Initial version
 * @date     8/20/2014
 * @author   Ethan Hettwer
 *
 *****************************************************************/

#ifndef __SEG_LCD_H_
#define __SEG_LCD_H_

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

class SegmentLcd {
private:
   static constexpr volatile LCD_Type *lcd = LcdInfo::lcd;

public:

   /**
    * Initializes all components of the SLCD on the FRDM-KL46Z
    */
   static void enable(void);

   /**
    * Set Decimal point/colon on or off
    *
    * @param digit 0-2 => DP, 3 => colon
    * @param value true/false => on/off
    *
    */
   static void setDPs(int digit, int value);

   /**
    * Displays a hex value in a specified position on the LCD.  \n
    * Will display error if position is outside of range.
    *
    * @param value    Value to display (0-F), -1 => blank
    * @param position Digit position (left=1 - 4=right)
    */
   static void set(int value, int position);

   /**
    * Displays a 4 digit decimal number
    *
    * @param value Value to display (0-9999)
    */
   static void displayDecimal(uint16_t value);

   /**
    * Displays a 4 digit decimal number with leading zero suppression
    *
    * @param value Value to display (0-9999)
    */
   static void displayDecimalLz(uint16_t value);

   /**
    * Displays a 4 Digit hex number
    *
    * @param value Value to display (0x0-0xFFFF)
    */
   static void displayHex(uint16_t value);

   /**
    * Displays two numbers in hour:minute format i.e. separated by colon
    *
    * @param hour Hours value to display (0-99)
    * @param minutes Minutes value to display (0-59)
    *
    */
   static void displayTime(uint8_t hour, uint8_t minutes);

   /**
    * Display error number
    *
    * @param ErrorNum Error number value 0-F.
    *        If ErrorNum is outside of that range, just displays Err
    */
   static void displayError(uint8_t ErrorNum);

};
}  // End namespace USBDM

#endif
