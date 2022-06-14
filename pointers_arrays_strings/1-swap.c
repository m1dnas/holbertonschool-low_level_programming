#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: integer
 * @b: integer 2
 * Return: void
 **/
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
