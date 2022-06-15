#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string, starting w/ the first char
 * @str: the string
 * Return: void
 **/
void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		putchar(*(str + i * 2));
	}
	putchar('\n');
}
