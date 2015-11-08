/*
 * GccApplication3.c
 *
 * Created: 10/9/2015 6:41:00 PM
 * Author : cdahms
 */ 

#ifndef F_CPU					// if F_CPU was not defined in Project -> Properties
#define F_CPU 1000000UL			// define it now as 1 GHz unsigned long
#endif

#include <avr/io.h>				// this is always included in AVR programs
#include <util/delay.h>			// add this to use the delay function

///////////////////////////////////////////////////////////////////////////////////////////////////
int main(void) {
	
	DDRD = 0xFF;			// set Port D to output
	
	while (1) {
		PORTD = 0x01;			// set Port D bit 1 high
		_delay_ms(500);			// delay 1/2 second
		PORTD = 0x00;			// set all Port D bits low
		_delay_ms(500);			// delay 1/2 second
	}
}


