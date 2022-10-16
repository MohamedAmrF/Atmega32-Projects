/*
 * timer.c
 *
 * Created: 9/14/2022 1:05:25 PM
 *  Author: Mohamed Amr Ahmed
 */ 
#include "timer.h"


void timer0_init_normal()
{
	TCCR0 = 0x00;    // configure in Normal Mode 
}
void timer0_start_normal()
{
	TCCR0 = 0x00;     // Set tccr0 to zeros (unnecessary)
	TCCR0 |= 1;       // set the first bit to 1
}
void timer0_stop_normal()
{
	TCCR0 = 0x00;     // stop the timer0 and configure it to normal as a standard for later
}
void one_ms_delay() // in ms
{
	// configure in normal mode
	timer0_init_normal();
	
	volatile long overflowcounter = 0;
	
	// start the timer
	timer0_start_normal();
	
	// the calculations are done @ a freq of 1 MHz to produce a 1 ms delay
	while(overflowcounter < 4)
	{
		TCNT0 = 50;
		while((TIFR & (1<<0))==0);
		overflowcounter++;
		TIFR |= (1<<0);
	}
	timer0_stop_normal();
}

// call the one ms delay function delaytime number of times with an option of a loopbreaker flag in case you want to break the delay
void my_delay_ms(uint32 delaytime, uint8* LOOP_BEAKERR)
{
	uint32 i=0;
	for(; i<delaytime && !(*LOOP_BEAKERR); i++)
		one_ms_delay();
	return;
}
