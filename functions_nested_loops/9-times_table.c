#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 **/
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 0)
			{
				_putchar(a * b + '0');
			}
			else if (a *b >= 10)
			{
				_putchar(' ');
				_putchar(a * b / 10 + '0');
				_putchar(a * b % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(a * b + '0');
			}
			if (b == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
			}
		}
	}
}
