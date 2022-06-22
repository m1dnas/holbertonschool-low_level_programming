#include "main.h"

/**
 * helper - does all the work
 * @i: help int
 * @j: integer
 * Return: x value
 **/
int helper(int i, int j)
{
	if (j % i == 0 && j != i)
		return (0);
	if (j % i != 0 && i < j)
		return (helper(i + 1, j));
	return (1);
}

/**
 * is_prime_number - test if the integer is a prime number
 * @n: the integer
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 **/
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (helper(i, n));
}
