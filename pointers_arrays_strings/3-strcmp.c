#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: the first string to be compared 
 * @s2: the second string to be compared
 * Return: the value if s2 is less, greater or equal to s1
 **/
int _strcmp(char *s1, char *s2)
{
	if (s2 > s1)
	{
		return (-15);
	}
	if (s2 < s1)
	{
		return (15);
	}
	if (s2 == s1)
		return (0);
}
