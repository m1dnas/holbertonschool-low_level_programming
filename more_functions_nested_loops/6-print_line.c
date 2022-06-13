#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: parameter to draw 'n' times
 **/
void print_line(int n)
{
	int a;

	for (a = 0; n > a; n++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
