#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string
 * Return: string in uppercase
 **/
char *string_toupper(char *j)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (j[i] >= 'a' && j[i] <= 'z')
		{
			j[i] = j[i] - 32;
		}
	}
	return (j);
}
