#include "main.h"

/**
 *  * print_to_98 - prints all natural numbers from n to 98
 *   *
 *    **/
void print_to_98(int n)
{
	for (n = 0 ; n <= 98 ; n++)
	{
		_putchar(n + '0');
		_putchar (',');
		_putchar (' ');
	}
	for (n = 98 ; ;)
	{
		_putchar(n + '0');
	}
	for (n = 111 ; n >= 98 ; n--)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	for (n = 81 ; n <= 98 ; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	for (n = -10 ; n <= 98 ; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
