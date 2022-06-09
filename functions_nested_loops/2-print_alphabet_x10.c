#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet x10
 * Return: its 0
 **/
void print_alphabet_x10(void)
{
	char c;
	char d;

	for (c = 1 ; c <= 10 ; c++)
	{
		for (d = 'a' ; d <= 'z' ; d++)
		{
			_putchar(d);
		}
		_putchar('\n')
	}
}
