#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars
 * @size: the size of
 * @c: initializes with a specific char
 * Return: pointer to the array or NULL if it fails
 **/
char *create_array(unsigned int size, char c)
{
	/* to compare i with size, both must be the same type (unsigned int) */
	unsigned int i;
	char *str;

	str = malloc(size);
	if (str == 0)
	{
		return (NULL);
	}
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	return (str);
	}
	else
		return (NULL);
}
