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
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
        {
        }
        for (i = 0; i < n && src[i] != '\0'; i++)
        {
		if (src[i] < n)
		{
			putchar('-');
		}
                dest[j + i] = src[i];
        }
        return (dest);
}	
