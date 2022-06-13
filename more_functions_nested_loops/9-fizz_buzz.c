#include "main.h"
#include <stdio.h>

/**
 * main - prints the fizz-buzz test
 * Return: 0
 **/
int main(void)
{
	int a, b, c, d;

	b = a * 3;
	c = a * 5;
	d = b && c;

	for (a = 1; a <= 100; a++)
	{
		printf("%d ", a);
		if (b = a)
		{
			b = a;
			printf("Fizz ");
		}
	}
}
