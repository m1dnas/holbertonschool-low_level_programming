#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase character
 * @c: parameter to check
 * Return: 1 if c is lowercase, 0 otherwise
 **/
int _islower(int c)
{
	if (islower(c) > 0)
	{
		_putchar('1');
	}
			else if (islower(c) == 0)
			{
				_putchar('0');
			}
	_putchar('\n');
	return(0);
}
