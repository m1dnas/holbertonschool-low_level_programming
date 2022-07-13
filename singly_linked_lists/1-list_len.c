#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: nude
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	if (list_len == NULL)
		return (NULL);
	while (h->next != NULL)
	{
		return(list_len(h->next)+ 1);
	}
	return(1);
}
