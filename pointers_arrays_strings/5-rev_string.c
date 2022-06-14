#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - function that prints a string, in reverse
 * @s: the string
 * Return: void
 **/
void print_rev(char *s)
{
	int b, len;

	len = strlen(s);

	for (b = len - 1; b >= 0; b--)
	{
		putchar(s[b]);
	}
}
