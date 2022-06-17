#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: the pointer to the destination array, which should contain a C string
 * @src: the string to be appended
 * Return: a pointer to the resulting string dest
 **/
char *_strcat(char *dest, char *src)
{
	int i, a;

	for (i = 0; src[i]; i++)
	{
		a = dest[i] + src[i];
		dest[i] = a;
	}
	return (dest);
}
