#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @list_t: the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
	}
	return (size);
}
