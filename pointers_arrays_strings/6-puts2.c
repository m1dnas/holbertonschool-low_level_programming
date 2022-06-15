#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string, starting with the first char
 * @str: the string
 * Return: void
 **/
void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len - 1; i++)
	{
		putchar(str + 2);
	}
	putchar('\n');
}
