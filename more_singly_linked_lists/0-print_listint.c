#include "lists.h"
/**
 * print_listint - function that prints all the elements of a list_t list
 * @h: the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		count = h->next;
	}
	return (count);
}
