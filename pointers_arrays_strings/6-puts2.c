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
	int i, len;

	len = strlen(str);

	for (i = 0; i > len - 1 ; i++)
	{
		_putchar(str);
	}
	putchar('\n');
}
