#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: the pointer to the destination array where the content's to be copied
 * @src: the string to be copied
 * @n: the number of characters to be copied from source
 * Return: dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
