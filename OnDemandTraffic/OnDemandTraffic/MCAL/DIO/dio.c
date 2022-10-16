/*
 * dio.c
 *
 * Created: 8/6/2022 6:49:45 PM
 *  Author: Mohamed Amr Ahmed
 */ 


//Function definitions
#include "dio.h"

void DIO_init(uint8 portnumber, uint8 pinnumber, uint8 direction)
{
	switch(portnumber)
	{
		case 'A':
			if(direction == IN)
			{
				DDRA &= !(1<<pinnumber);
			}
			else if(direction == OUT)
			{
				DDRA |= (1<<pinnumber);
			}
			else
			{
				// ERROR HANDLING
			}
		break;
		case 'B':
			if(direction == IN)
			{
				DDRB &= !(1<<pinnumber);
			}
			else if(direction == OUT)
			{
				DDRB |= (1<<pinnumber);
			}
			else
			{
				// ERROR HANDLING
			}
		break;
		case 'C':
			if(direction == IN)
			{
				DDRC &= !(1<<pinnumber);
			}
			else if(direction == OUT)
			{
				DDRC |= (1<<pinnumber);
			}
			else
			{
				// ERROR HANDLING
			}
		break;
		case 'D':
			if(direction == IN)
			{
				DDRD &= !(1<<pinnumber);
			}
			else if(direction == OUT)
			{
				DDRD |= (1<<pinnumber);
			}
			else
			{
				// ERROR HANDLING
			}
		break;
	}
}
void DIO_write(uint8 portnumber, uint8 pinnumber, uint8 value)
{
	switch(portnumber)
	{
		case 'A':
		if(value == IN)
		{
			PORTA &= !(1<<pinnumber);
		}
		else if(value == OUT)
		{
			PORTA |= (1<<pinnumber);
		}
		else
		{
			// ERROR HANDLING
		}
		break;
		case 'B':
		if(value == IN)
		{
			PORTB &= !(1<<pinnumber);
		}
		else if(value == OUT)
		{
			PORTB |= (1<<pinnumber);
		}
		else
		{
			// ERROR HANDLING
		}
		break;
		case 'C':
		if(value == IN)
		{
			PORTC &= !(1<<pinnumber);
		}
		else if(value == OUT)
		{
			PORTC |= (1<<pinnumber);
		}
		else
		{
			// ERROR HANDLING
		}
		break;
		case 'D':
		if(value == IN)
		{
			PORTD &= !(1<<pinnumber);
		}
		else if(value == OUT)
		{
			PORTD |= (1<<pinnumber);
		}
		else
		{
			// ERROR HANDLING
		}
		break;
	}	
}
void DIO_toggle(uint8 portnumber, uint8 pinnumber)
{
	switch(portnumber)
	{
		case 'A':
		togglebitxor(PINA, pinnumber);
		break;
		
		case 'B':
		togglebitxor(PINB, pinnumber);
		break;
		
		case 'C':
		togglebitxor(PINC, pinnumber);
		break;
		
		case 'D':
		togglebitxor(PIND, pinnumber);
		break;
	}
}

void DIO_read(uint8 portnumber, uint8 pinnumber, uint8 *value)
{
	switch(portnumber)
	{
		case 'A':
		*value = readbit(PINA,pinnumber);
		break;
		
		case 'B':
		*value = readbit(PINB,pinnumber);
		break;
		
		case 'C':
		*value = readbit(PINC,pinnumber);
		break;
		
		case 'D':
		*value = readbit(PIND,pinnumber);
		break;
	}
}

