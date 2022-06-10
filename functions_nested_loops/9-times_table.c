#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 **/
void times_table(void)
{
	int i, ii;

	for (i = 0; i <= 9 ; i++)
	{
		for (ii = 0; i <= 9 ; ii++)
		{
			n = i * ii
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

