/*
 * app.h
 *
 * Created: 9/16/2022 7:45:27 PM
 *  Author: Mohamed Amr Ahmed
 */ 


#ifndef APP_H_
#define APP_H_

#include "../MCAL/DIO/dio.h"
#include "../MCAL/Timer/timer.h"
#include "../ECUAL/BUTTON/button.h"
#include "../ECUAL/LED/LED.h"
#include "../MCAL/Interrupt/interrupt.h"

#define GREEN  0
#define YELLOW 1
#define RED    2

void app_init();

void app_start();


#endif /* APP_H_ */