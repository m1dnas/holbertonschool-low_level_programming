#include "main.h"
#include <stdio.h>


/**
 * print_array - prints n elements of an array of integers
 * @a: the string
 * @n: number of elements of the array to be printed
 * Return: void
 **/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i = n - 1)
			printf("%d", a[i]);
		else if (!(i = n - 1))
			printf("%d, ", a[i]);
	}
}
