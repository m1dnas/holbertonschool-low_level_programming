#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @list_t: the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	
	if (h)
	{
		size++;
		if (h->next != NULL)
		{
			printf("[%d] (%s)\n", h->len, h->str);
		}
		if (h->str)
		{
			printf("[0] (nil)\n");
		}

	}
	return (size);
}
