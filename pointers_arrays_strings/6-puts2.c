#include "main.h"
#include <stdio.h>
#include <string.h>
#include <2-strlen.c>

/**
 * puts2 - prints every other character of a string, starting w/ the first char
 * @str: the string
 * Return: void
 **/
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
