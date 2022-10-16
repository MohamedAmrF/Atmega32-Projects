/*
 * LED.h
 *
 * Created: 9/14/2022 12:31:51 AM
 *  Author: Mohamed Amr Ahmed
 */ 
#ifndef LED_H
#define LED_H

#include "../../MCAL/DIO/dio.h"

void led_init(uint8 ledport, uint8 ledpin);

void led_on(uint8 ledport, uint8 ledpin);

void led_off(uint8 ledport, uint8 ledpin);

void led_toggle(uint8 ledport, uint8 ledpin);


#endif