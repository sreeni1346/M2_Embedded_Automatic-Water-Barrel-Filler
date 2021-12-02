/**
 * @file barrel.h
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
uint8_t top_switch_state;
uint8_t bottom_switch_state;
void floatSwitchInit(void);
void relayInit(void);