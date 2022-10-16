/*
 * IncFile1.h
 *
 * Created: 8/6/2022 6:35:11 PM
 *  Author: Mohamed Amr Ahmed
 */ 

#include "Types.h"



#ifndef REGISTERS_H
#define REGISTERS_H

#define RXEN	4
#define TXEN	3
#define URSEL	7
#define UDRE	5
#define RXC		7

#define PORTA *((volatile uint8*)(0x3B))
#define DDRA  *((volatile uint8*)(0x3A))
#define PINA  *((volatile uint8*)(0x39))

#define PORTB *((volatile uint8*)(0x38))
#define DDRB  *((volatile uint8*)(0x37))
#define PINB  *((volatile uint8*)(0x36))


#define PORTC *((volatile uint8*)(0x35))
#define DDRC  *((volatile uint8*)(0x34))
#define PINC  *((volatile uint8*)(0x33))

#define PORTD *((volatile uint8*)(0x32))
#define DDRD  *((volatile uint8*)(0x31))
#define PIND  *((volatile uint8*)(0x30))

// UART DRIVERS
#define UDR   *((volatile uint8*)(0x2C))
#define UCSRA *((volatile uint8*)(0x2B))
#define UCSRB *((volatile uint8*)(0x2A))
#define USCRC *((volatile uint8*)(0x3B))
#define UBRRL *((volatile uint8*)(0x29))

// Timer Registers
#define TCCR0   *((volatile uint8*)(0x53))
#define TCNT0   *((volatile uint8*)(0x52))
#define TIFR    *((volatile uint8*)(0x58))



#define SREG   *((volatile uint8*)(0x5F))
#define GICR   *((volatile uint8*)(0x5B))
#define MCUCR   *((volatile uint8*)(0x55))


#endif /* REGISTERS_H */