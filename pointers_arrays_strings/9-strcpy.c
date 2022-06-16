#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: the buffer to copy the string to
 * @src: the source string to copy
 * Return: the pointer to dest
 **/
char *_strcpy(char *dest, char *src)
{
	int i;

/** src[i] is to go until the last character of the string src */
	for (i = 0; i >= '\0'; i++)
	{
	dest[i] = src[i];
	}

	return (dest);
}
