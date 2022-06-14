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
	int i, length, w;
	length = strlen(s);

	for (i = 0; i < length/2; i++)
	{
		w = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = w;
		printf("%d", s[i]);
	}
	printf("\n");
}
