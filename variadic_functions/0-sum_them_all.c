#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameter 1
 * Return: the sum of all its parameters, or if n = 0 returns 0
 **/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list argSum;

	if (n != 0)
	{
		va_start(argSum, n);
		sum += va_arg(argSum, int);
		va_end(argSum);
		return (sum);
	}
	return (0);
}
