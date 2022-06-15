#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * puts_half - prints the second half of a string
 * @str: the string
 * Return: void
 **/
void puts_half(char *str)
{
	int i, n;
	n = (length_of_the_string - 1) / 2;

	for (i = n; i < _strlen(str) - 1; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
