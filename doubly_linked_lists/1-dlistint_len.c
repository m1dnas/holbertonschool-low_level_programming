#include "lists.h"

/**
 * dlistint_len - the number of elements in a linked list
 * @h: header
 * Return: the number of elements
 **/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
