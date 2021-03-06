#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: the pointer to the destination array, which should contain a C string
 * @src: the string to be appended
 * @n: maximum number of characters to be appended
 * Return: string dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	return (dest);
}
