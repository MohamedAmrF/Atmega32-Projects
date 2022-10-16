/*
 * button.h
 *
 * Created: 9/14/2022 12:24:27 AM
 *  Author: Mohamed Amr Ahmed
 */ 
#ifndef BUTTON_H
#define BUTTON_H

#include "../../MCAL/DIO/dio.h"

void button_init(uint8 buttonport, uint8 buttonpin);
void button_read(uint8 buttonport, uint8 buttonpin, uint8 *value);

#endif