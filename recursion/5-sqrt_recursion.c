#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the floating point value
 * Return: the natural square root of n
 **/
int _sqrt_recursion(int n)
{
	int i;
        int j = i * i;

	if (j < n || j > n)
	{
		return (-1);
	}
	j = _sqrt_recursion(n);
	return (i);
}
