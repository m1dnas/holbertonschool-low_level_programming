#include <stdio.h>

/**
 * main - entry point
 * Return: successfully
 **/
int main(void)
{
	int x, y;
	int z = 49;

	for (x = 48 ; x <= 56 ; x++)
	{
	for (y = z ; y <= 57 ;)
	{
		putchar(x);
		putchar(y);
			if (x < 8)
			{
				putchar(',');
				putchar(' ');
			}
			x++;
	}
	z++;
	}
	putchar('\n');
	return (0);
}
