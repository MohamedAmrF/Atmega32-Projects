/*
 * LED.c
 *
 * Created: 9/14/2022 12:31:35 AM
 *  Author: Mohamed Amr Ahmed
 */ 
#include "LED.h"

void led_init(uint8 ledport, uint8 ledpin)
{
	// initiate ledpin as an output pin
	DIO_init(ledport, ledpin, OUT);
}

void led_on(uint8 ledport, uint8 ledpin)
{
	// set the ledpin to high
	DIO_write(ledport, ledpin, HIGH);
}


void led_off(uint8 ledport, uint8 ledpin)
{
	// output a low voltage on the ledpin
	DIO_write(ledport, ledpin, LOW);
}

// toggles the ledpin
void led_toggle(uint8 ledport, uint8 ledpin)
{
	uint8* state;
	DIO_read(ledport, ledpin, state);
	// checks the case of the pin then sets the opposite states to the pin
	// this was done using the ternary operator
	DIO_write(ledport, ledpin, ((*state)?LOW:HIGH));
}
