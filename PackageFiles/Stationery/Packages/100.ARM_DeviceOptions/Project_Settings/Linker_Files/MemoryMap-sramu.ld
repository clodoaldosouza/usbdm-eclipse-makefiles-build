/* MemoryMap-sramu.ld
 *
 * Memory map for devices with SRAM_U allocation for bit-band/bme
 */
 
/* ---- <<< Use Configuration Wizard in Context Menu >>> ---- */

/* <o> Stack Size
   <i> Required amount of stack space
   <i> In CMSIS this will determine the ISR stack size
   <0x0-$(linkerRamSize)> 
*/
__stack_size = $(linkerStackSize);

/* <o> Minimum Heap Size 
   <i> Actual heap may be larger as it fills all unused RAM up to STACK
   <0x0-$(linkerRamSize)> 
*/
__heap_size  = $(linkerHeapSize);

/* <o0> Size of RAM region reserved for bit-band or bit-manipulation-engine (bytes) 
   <i>  Space is allocated in SRAM_U memory region
   <i>  Each byte as also mapped to 8 words in .bitband memory region (if present)
   <i>
   <i>  C Example:
   <i>    // Variable allocated in bitband/bme accessible region (SRAM_U)
   <i>    // May be uint8_t, uint16_t or uint32_t
   <i>    __attribute__ ((section(".sram_u"))) uint32_t variable;
   <i>
   <i>    // Each word of array maps to an individual bit in bit-band
   <i>    __attribute__ ((section(".bitband"))) uint32_t variable_bits[8*sizeof(variable)];
   <i>
   <i>  See bme.h and bitband.h for more information
*/
__sram_u_size = 0;
   
$(linkerInformation)

