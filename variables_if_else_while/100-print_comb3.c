#include <stdio.h>

/**
 * main - entry point
 * Return: successfully
 **/
int main(void)
{
	int x, y;

	for (x = 48 ; x <= 56 ; x++)
	{
	for (y = 49 ; y <= 57 ; y++)
	{
		putchar(x);
		putchar(y);
			if (x != 8 && y != 9)
			{
				putchar(',');
				putchar(' ');
			}
	}
	}
	putchar('\n');
	return (0);
}
