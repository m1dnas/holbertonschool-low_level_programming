#include "main.h"
#include <stdio.h>

/**
 * main - prints the fizz-buzz test
 * Return: 0
 **/
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		printf("%d ", a);
		if (a % 3 == 0)
			printf("Fizz ");
		if (a % 5 == 0)
			printf("Buzz ");
		if (a % 5 == 0 && a % 3 == 0)
			printf("FizzBuzz ");
	}
	printf("\n");
	return (0);
}
