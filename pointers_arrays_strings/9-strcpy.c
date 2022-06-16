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
	int i = 0;

/** src[i] is to go until the last character of the string src */
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
