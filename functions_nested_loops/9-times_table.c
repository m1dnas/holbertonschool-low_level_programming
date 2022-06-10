#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 **/
void times_table(void)
{
	int u, d;

	for (d = 0; u <= 9 ; u++)
	{
		for (u = 0; u <= 9; d++)
		{
			int n = d * u;
			if (n > 9)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar(' ');
			}
			else if (!(d* (u+1) > 9))
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (u != 9)
			{
				_putchar(',');
			}
		}
	}
}

