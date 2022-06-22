#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: main C string to be scanned
 * @needle: small string to be searched with-in haystack string
 * Return: to the begin
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}
			if (!needle[b])
			{
				return (&haystack[a]);
			}
	}
	return (NULL);
}
