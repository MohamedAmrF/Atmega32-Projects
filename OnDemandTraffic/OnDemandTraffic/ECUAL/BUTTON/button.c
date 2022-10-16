/*
 * button.c
 *
 * Created: 9/14/2022 12:24:17 AM
 *  Author: Mohamed Amr Ahmed
 */ 

#include "button.h"
void button_init(uint8 buttonport, uint8 buttonpin)
{
	// set button as input
	DIO_init(buttonport, buttonpin, IN);
}

void button_read(uint8 buttonport, uint8 buttonpin, uint8 *value)
{
	// reads if the button is low or high
	DIO_read(buttonport, buttonpin, value);
}

