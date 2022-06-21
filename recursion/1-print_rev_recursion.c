#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 * Return: void
 **/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		/* it's going char per char until the end */
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
