/*
 * app.c
 *
 * Created: 9/16/2022 7:45:15 PM
 *  Author: Mohamed Amr Ahmed
 */ 
#include "app.h"

void app_init()
{
	// initiate ledpins for cars
	led_init(PORT_A, GREEN);
	led_init(PORT_A, YELLOW);
	led_init(PORT_A, RED);
		
	// initiate ledpings for pedestrians
	led_init(PORT_B, GREEN);
	led_init(PORT_B, YELLOW);
	led_init(PORT_B, RED);
	
	// set button pin as input
	button_init(PORT_D, 2);
	
	// Enable interrupts
	global_interrupt_enable();
	interrupt_init();
}

void pedestrian_unallowed(uint8 *BREAKER)
{
	led_on(PORT_A, GREEN);
	led_on(PORT_B, RED);
	my_delay_ms(5000, BREAKER);
	led_off(PORT_A, GREEN);
	led_off(PORT_B, RED);
}
void pedestrian_allowed()
{
	led_on(PORT_B, GREEN);
	led_on(PORT_A, RED);
	my_delay_ms(5000, 0);
	led_off(PORT_B, GREEN);
	led_off(PORT_A, RED);
}

void blink_yellow(uint32 timeinsec)
{
	int i=0;
	for(; i<timeinsec; i++)
	{
		led_on(PORT_A, YELLOW);
		led_on(PORT_B, YELLOW);
		my_delay_ms(500, 0);
		led_off(PORT_A, YELLOW);
		led_off(PORT_B, YELLOW);
		my_delay_ms(500, 0);
	}
}

void app_start(uint8* BREAKER)
{
	// PEDESTRIAN RED , CARS GREEN
	*BREAKER = 0;
	pedestrian_unallowed(BREAKER);
	
	
	*BREAKER = 0;
	// blink yellow lights FOR PEDESTRIANS AND VEHICLES
	blink_yellow(5);
	
	// PEDESTRIAN GREEN, CARS RED
	*BREAKER = 0;
	pedestrian_allowed();
	
	*BREAKER = 0;
	// blink yellow lights FOR PEDESTRIANS AND VEHICLES
	blink_yellow(5);
}