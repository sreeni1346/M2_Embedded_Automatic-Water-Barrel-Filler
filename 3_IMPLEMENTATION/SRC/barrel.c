/**
 * @file barrel.c
 * @author Sreeni N K (sreenink1346@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-12-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 16000000

#include <avr/io.h>



void floatSwitchInit(void)
{
	/* top sensor */
	DDRD &= ~(1<<0);	//set pinD0 as input
	PORTD |= (1<<0); //use pull-up resistor on pinD0
	
	/* bottom sensor */
	DDRD &= ~(1<<1);	//set pinD1 as input
	PORTD |= (1<<1); //use pull-up resistor on pinD1
}

void relayInit(void)
{
	DDRB |= (1<<1); //set pinB1 as output
	PORTB &= ~(1<<1); //set portB1 low
}

