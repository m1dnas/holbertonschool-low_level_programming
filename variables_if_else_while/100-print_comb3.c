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
		if (y > x)
		{
			putchar(x);
			putchar(y);
			putchar(',');
			putchar(' ');
		}
	}
	}
	return (0);
}