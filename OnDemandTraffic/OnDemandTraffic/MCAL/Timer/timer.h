/*
 * timer.h
 *
 * Created: 9/14/2022 1:05:40 PM
 *  Author: Mohamed Amr Ahmed
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "../../Utilities/Registers.h"
#include "../../Utilities/Types.h"

void timer0_init_normal();
void timer0_start_normal();
void timer0_stop_normal();
void one_ms_delay();
void my_delay_ms(uint32 delaytime, uint8* LOOP_BEAKERR);


#endif /* TIMER_H_ */