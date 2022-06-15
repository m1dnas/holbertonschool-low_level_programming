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
	int len = _strlen(str);
	int n = len / 2;
	int nodd = (len + 1) / 2;

	if (!(len % 2 == 0))
	{
		for (i = (nodd + 1) / 2; i < len; i++)
		{
			putchar(str[i]);
		}
	if (len % 2 == 0)
	{
		for (i = n; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
