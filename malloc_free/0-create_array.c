#define "main.h"

/**
 * create_array - creates an array of chars
 * @size: the size of
 * @c: initializes with a specific char
 * Return: pointer to the array or NULL if it fails
 **/
char create_array(unsigned int size, char c)
{
	int i;
	char *str;

	str = malloc(size);
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c
	}
	return (str);
}
