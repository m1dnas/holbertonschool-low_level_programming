#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: array to set
 * @b: value to set it as
 * @n: times
 * Return: value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
