#include "main.h"
#include "4-pow_recursion.c"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the floating point value
 * Return: the natural square root of n
 **/
int _sqrt_recursion(int n)
{
	int i;

	if (i != n)
	{
		if (_pow_recursion(i, 2) < n || _pow_recursion(i, 2) > n)
		{
			return (-1);
		}
	}
	n = _sqrt_recursion(n);
	if (n = _pow_recursion(i, 2))
	return (i);
}
