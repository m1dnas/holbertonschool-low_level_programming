#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @j: the string
 * Return: string in uppercase
 **/
char *string_toupper(char *j)
{
	int i;

	for (i = 0; j[i]; i++)
	{
		if (j[i] >= 'a' && j[i] <= 'z')
		{
			j[i] = j[i] - 32;
		}
	}
	return (j);
}
