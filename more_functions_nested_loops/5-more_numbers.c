#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function that prints 10 times the numbers, from 10 to 14
 *
 **/
void more_numbers(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = '0'; a <= '14'; a++)
		{
			if (a <= '9')
			{
				_putchar((a % 10) + '0');
			}
			else
			{
				_putchar(a + '0');
			}
		}
	}
	_putchar('\n');
}
