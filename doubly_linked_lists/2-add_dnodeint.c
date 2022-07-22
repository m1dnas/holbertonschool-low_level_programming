#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: header
 * @n: node
 * Return: the address of the new element or NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (NULL);
	}
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = *head;
		newnode->prev = NULL;
		if (*head != NULL)
		{
			(*head)->prev = newnode;
		}
		*head = newnode;
	}
	return (*head);
}
