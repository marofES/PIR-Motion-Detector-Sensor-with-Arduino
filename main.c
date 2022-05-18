#include <avr/io.h>
#include <avr/delay.h>

#define F_CPU 16000000UL

int main(void)
{
	DDRD &= ~_BV(DDD2);
	DDRB |= _BV(DDB5);
	PORTB = 0x00;

	while(1)
	{
		if(bit_is_set(PIND,PIND2))
		{
			PORTB |= _BV(PORTB5);
		}
		else
		{
			PORTB &= ~_BV(PORTB5);
		}
	}
}

