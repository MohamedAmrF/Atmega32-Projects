/*
 * interrupt.c
 *
 * Created: 9/17/2022 11:42:23 AM
 *  Author: Mohamed Amr Ahmed
 */ 
#include "interrupt.h"

void global_interrupt_enable()
{
	// enable global interrupts
	SREG |= (1<<IBIT);
}

void interrupt_init()
{
	// sensing on rising edge interrupt 0
	MCUCR |= (1<<ISC00) | (1<<ISC01);
	
	// enable interrupts (interrupt 0)
	GICR |= (1<<INT0);
}

