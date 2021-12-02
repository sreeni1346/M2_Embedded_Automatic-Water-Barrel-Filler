/**
 * @file main.c
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
#include "barrel.c"

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif
int main(void)
{
	//Initialize the components
    floatSwitchInit();
    relayInit();
	
    while (1)
	{			
		//if water is above top level, turn off pump
		top_switch_state = PIND & (1<<0);
		if (top_switch_state == 0)
		{
			PORTB &= ~(1<<PORTB1);	
		}
		//if water is below bottom level, turn on pump
		bottom_switch_state = PIND & (1<<1);
		if (bottom_switch_state == (1<<1))
		{
			PORTB |= (1<<PORTB1);
		}
	}
}