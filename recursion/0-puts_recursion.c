#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string
 * Return: void
 **/
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
