#include "main.h"

/**
 * jack_bauer - prints every minute of the day, starting from 00 to 23.59
 *
 **/
void jack_bauer(void)
{
	int h, m;

	for (h = 0 ; h < 24 ; h++)
	{
		for (m = 0 ; m < 60 ; m++)
		{
			_putchar(h / 10)
			_putchar(';')
		}
	}
}
