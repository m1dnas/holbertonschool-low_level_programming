#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string, starting w/ the first char
 * @str: the string
 * Return: void
 **/
void puts2(char *str)
{
	int i;

	for (i = 0; i > '\0' ; i++)
	{
		putchar(*(str + i * 2));
	}
	putchar('\n');
}
