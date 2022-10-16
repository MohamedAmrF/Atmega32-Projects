/*
 * dio.h
 *
 * Created: 8/6/2022 6:49:31 PM
 *  Author: Mohamed Amr Ahmed
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../../Utilities/Registers.h"
#include "../../Utilities/bitmath.h"
#include "../Interrupt/interrupt.h"

// DRIVER MACROS
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'


// DIRECTION DEFINES
#define IN 0
#define OUT 1


// HIGH LOW DEFINES
#define HIGH 1
#define LOW  0

// ENABLE PULL UP RESISTOR
#define ENABLEPULLUP  1
#define DISABLEPULLUP 0


// FUNCTION PROTOTYPES
void DIO_init(uint8 portnumber, uint8 pinnumber, uint8 direction);
void DIO_write(uint8 portnumber, uint8 pinnumber, uint8 value);
void DIO_toggle(uint8 portnumber, uint8 pinnnumber);

void DIO_read(uint8 portnumber, uint8 pinnumber, uint8 *value);


#endif /* DIO_H_ */