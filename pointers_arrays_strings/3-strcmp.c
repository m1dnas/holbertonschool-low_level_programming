#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: if the 1st non-matching char has a lower ascii value in s1 than s2
 *         if the strings are equal
 *         if the 1st non-matching char has a higher ascii value in s1 than s2
 **/
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
