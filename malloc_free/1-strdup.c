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
	int i;
	char *ssttrr;

	ssttrr = malloc(*str);
	
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
	return (NULL);
}
