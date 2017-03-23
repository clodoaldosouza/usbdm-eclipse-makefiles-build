/*----------------------------------------------------------------------------
 * @file cmsis-cpp-timer.cpp
 *
 * RTX example program
 *----------------------------------------------------------------------------
 */
#include <stdio.h>
#include "cmsis.h"                      // CMSIS RTX
#include "hardware.h"                   // Hardware interface

using RED_LED   = USBDM::$(demo.cpp.red.led:GpioB<0>);
using GREEN_LED = USBDM::$(demo.cpp.green.led:GpioB<1>);

/**
 * Timer example
 */
void timerExample() {
   static auto cb1 = [] (const void *) {
      RED_LED::toggle();
   };
   static auto cb2 = [] (const void *) {
      GREEN_LED::toggle();
   };
   static CMSIS::Timer<osTimerPeriodic> myTimer1(cb1);
   static CMSIS::Timer<osTimerPeriodic> myTimer2(cb2);

   GREEN_LED::setOutput();
   RED_LED::setOutput();

   myTimer2.start(500);
   myTimer1.start(1000);

   printf(" myTimer1::getId() = %p\n\r", myTimer1.getId());
   printf(" myTimer2::getId() = %p\n\r", myTimer2.getId());
}

int main() {
   timerExample();

   for(;;) {
   }
   return 0;
}

