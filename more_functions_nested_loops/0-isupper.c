#include "main.h"
#include <ctype.h>

/**
 *  * _isupper - checks for uppercase character
 *   * Return: 0
 **/
int _isupper(int c)
{
	if (isupper(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
