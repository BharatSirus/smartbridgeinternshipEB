/*
 * led.c
 *
 * Created: 5/16/2019 11:10:21 AM
 * Author : BharatSirus
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB = 0xFF;
	while (1)
	{
		PORTB =  0xFF;
		_delay_ms(100);
		PORTB =  0x00;
		_delay_ms(100);
	}
}