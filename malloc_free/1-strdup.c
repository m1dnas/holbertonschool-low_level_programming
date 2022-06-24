#include "main.h"
#include <stdlib.h>

/**
 * _strdup - it duplicates a string
 * @str: the string
 * Return: On success returns the duplicated string. NULL if there aren't
 * sufficient memory
 **/
char *_strdup(char *str)
{
	unsigned int i, j;
	char *ssttrr;

	for (j = 0; str[j]; j++)
		;
	j++;

	ssttrr = malloc(j * sizeof(char));

	if (str != 0)
	{
		if (ssttrr != 0)
		{
			for (i = 0; str[i]; i++)
			{
				ssttrr[i] = str[i];
			}
			return (ssttrr);
		}
	}
	if (str == NULL || ssttrr == NULL)
	{
		return (NULL);
	}
	else
		return (NULL);
}
