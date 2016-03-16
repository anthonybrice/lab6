// DAC.c

#include <stdint.h>

#include "msp432p401r.h"

#include "DAC.h"

void DAC_Init(void) {
	P4SEL0 &= ~0x0f;
	P4SEL1 &= ~0x0f;		// configure P4.0 - P4.4 as GPIO
	
	P4DIR |= 0x0f;			// make P4 out
}

void DAC_Out(uint8_t bits) {
	P4OUT = (P4OUT & ~0x0f) | (bits & 0x0f);
}
