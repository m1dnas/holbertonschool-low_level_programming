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
	int i;

	for (i = 0; i > _strlen(str) - 1 ; i++)
	{
		putchar(*(str + i * 2));
	}
	putchar('\n');
}
