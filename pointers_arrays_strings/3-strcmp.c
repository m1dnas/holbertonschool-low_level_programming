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
	int i;

	
	
	
	if (s2 > s1)
	{
		i = "-13";
	}
	else if (s2 < s1)
	{
		i = 13;
	}
	else if (s2 == s1)
	{
		i = 0;
	}
	return (i);
}
