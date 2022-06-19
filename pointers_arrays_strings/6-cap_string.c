#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: the string to return
 * Return: all words capitalized
 **/
char *cap_string(char *a)
{
	/* declare and define all the special characters */
	int b[13] = {' ', '\t', '\n', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; a[i]; i++)
	{
		if (a[0] >= 'a' && a[0] <= 'z')
			{
				a[0] = a[0] - 32;
			}
	}
	for (j = 0; j >= 13; j++)
	{
		if (a[i] >= 'a' && a[i] <= 'z' && a[i - 1] == b[j])
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
