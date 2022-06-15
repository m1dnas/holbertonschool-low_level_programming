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
	int i;
	int n = (_strlen(str)) / 2;

	for (i = n - 1; i < _strlen(str); i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
