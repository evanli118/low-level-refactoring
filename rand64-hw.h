//
//  rand64-hw.h
//  assignment5_35L
//
//  Created by Evan Li on 2022-11-08.
//

#ifndef rand64_hw_h
#define rand64_hw_h
#include <cpuid.h>
/* Hardware implementation.  */

/* Description of the current CPU.  */
struct cpuid { unsigned eax, ebx, ecx, edx; };

/* Return information about the CPU.  See <http://wiki.osdev.org/CPUID>.  */
struct cpuid
cpuid (unsigned int leaf, unsigned int subleaf);

/* Return true if the CPU supports the RDRAND instruction.  */
_Bool rdrand_supported (void);

/* Initialize the hardware rand64 implementation.  */
void hardware_rand64_init (void);

/* Return a random value, using hardware operations.  */
unsigned long long hardware_rand64 (void);

/* Finalize the hardware rand64 implementation.  */
void hardware_rand64_fini (void);

#endif /* rand64_hw_h */
