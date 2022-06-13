#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: parameter to print the times table
 *
 **/
void print_times_table(int n)
{
	int a, b;


	if (n >= 0 || n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				int c = a * b;

				if (c == 0)
				{
					printf("%d", c);
				}
				else if (c >= 100)
				{
					printf(" ,%d", c);
				}
				else if (c < 10 && c != 0)
				{
					printf("   ,%d", c);
				}
				else if (c >= 10 && c < 100)
				{
					printf("  ,%d", c);
				}
			}
		}
	}
}
