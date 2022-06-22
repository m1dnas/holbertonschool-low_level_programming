#include "main.h"
#include <ctype.h>

/**
 * _isdigit - functions that checks for a digit
 * @c: parameter to check
 * Return: 1 if is c is a digit, 0 otherwise
 **/
int _isdigit(int c)
{
	if (isdigit(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
