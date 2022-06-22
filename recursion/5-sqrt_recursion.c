#include "main.h"

/**
 * _sqrt - test it
 * @n: square root
 * @i: integral
 * Return: the square root of numb
 **/
int _sqrt(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i > n / 2)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(i + 1, n));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the floating point value
 * Return: the natural square root of n
 **/
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
