#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: parameter to give a number
 * Return: the value of the last digit
 **/
int print_last_digit(int n)
{
	int e;

	e = n % 10;
	_putchar((abs(e)) + '0');
	return (abs(e));
	_putchar('\n');
}
