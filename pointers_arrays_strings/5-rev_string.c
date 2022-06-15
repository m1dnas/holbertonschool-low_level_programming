#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that prints a string, in reverse
 * @s: the string
 * Return: void
 **/
void rev_string(char *s)
{
	int b, len;
	char t;

	len = strlen(s);

	for (b = 0; b < len / 2; b--)
	{
		t = s[b];
		s[b] = s[len - b - 1];
		s[len - b - 1] = t;
	}
}
