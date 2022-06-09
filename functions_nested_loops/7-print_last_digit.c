#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: parameter to give a number
 * Return: the value of the last digit
 **/
int print_last_digit(int n)
{
	int e;

	e = n % 10;
	return (e);
	_putchar('0' + e);
	_putchar('\n');
}
