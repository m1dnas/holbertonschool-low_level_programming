#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 **/
void times_table(void)
{
	int x, y;
	int n= y * x;

	for (y = 0; y <= 9 ; y++)
	{
		for (x = 0; x <= 9 ; x++)
		{
				if (n <= 9)
				{
					_putchar(n + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (n > 9)
				{
					_putchar(n + '0');
					_putchar(',');
					_putchar(' ');
				}
		}
	}
	_putchar('\n');
}

