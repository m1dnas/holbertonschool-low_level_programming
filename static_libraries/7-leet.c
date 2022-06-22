#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string without 1337
 * Return: the string into 1337
 **/
char *leet(char *s)
{
	char a[] = "a4A4e3E3o0O0t7T7l1L1";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			/**
			 * when one char is equal to other char of the other
			 * string's going to output the number that is
			 * next (+1) to the mentioned character
			 **/
			if (s[i] == a[j])
			{
				s[i] = a[j + 1];
				break;
			}
		}
	}
	return (s);
}
