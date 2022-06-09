#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: parameter to check
 * Return: 1 if 'c' is a letter, lowercase or uppercase. And '0' otherwise
 **/
int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
		return (1);
	}
	return (0);
	putchar('\n');
}
