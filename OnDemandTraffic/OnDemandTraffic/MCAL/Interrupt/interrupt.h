/*
 * interrupt.h
 *
 * Created: 9/17/2022 11:42:07 AM
 *  Author: Mohamed Amr Ahmed
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#define EXT_INT_0  __vector_1

#define ISR(INT_VECT)	void INT_VECT() __attribute__ ((signal, used));\
		void INT_VECT(void)	

#define IBIT    7
#define ISC00   0
#define ISC01   1
#define INT0    6

#include "../../Utilities/Types.h"
#include "../../Utilities/Registers.h"

void global_interrupt_enable();

void interrupt_init();


#endif /* INTERRUPT_H_ */