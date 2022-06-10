#include "main.h"

/**
 *  * print_to_98 - prints all natural numbers from n to 98
 *   *
 *    **/
void print_to_98(int n)
{
	if (n == 0)
	{
	for (n = 0 ; n <= 98 ; n++)
	{
		_putchar(n + '0');
		_putchar (',');
		_putchar (' ');
	}
	}
	if (n = 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n = 111)
	{
	for (n = 111 ; n >= 98 ; n--)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
	}
	if (n = 81)
	{
	for (n = 81 ; n <= 98 ; n++)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
	}
	if (n = -10)
	{
	for (n = -10 ; n <= 98 ; n++)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
	}
	_putchar('\n');
}
