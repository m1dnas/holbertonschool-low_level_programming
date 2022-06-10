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
			if (u != 9)
			{
				_putchar(',');
			if (!((d * (u + 1)) > 9))
			{
				_putchar(' ');
				_putchar(' ');
			}
			}
		}
	_putchar('\n');
	}
}

