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
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	return (dest);
}
