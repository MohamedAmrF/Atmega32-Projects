/*
 * OnDemandTraffic.c
 *
 * Created: 9/13/2022 11:10:12 PM
 * Author : Mohamed Amr Ahmed
 */ 
#ifndef F_CPU
#define F_CPU 1000000
#endif



//#include <avr/io.h>
//#include "avr/interrupt.h"
#include "MCAL/Timer/timer.h"
#include "MCAL/DIO/dio.h"
#include "ECUAL/LED/LED.h"
#include "Application/app.h"

uint8 LOOP_BREAKER = 0;
uint8 RED_STATE = 0;

int main(void)
{	
	app_init();
    while (1) 
    {
		app_start(&LOOP_BREAKER);
    }
}

ISR(EXT_INT_0)
{
	LOOP_BREAKER = 1;
}

