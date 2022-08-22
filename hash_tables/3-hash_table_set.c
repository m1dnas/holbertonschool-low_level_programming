#include "hash_tables.h"

/**
 * hash_table_set - sets the value of a key in a hash table
 * @ht: hash table
 * @key: key to set
 * @value: value to set
 * Return: 1 if key was found and value was set, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *searchnode = NULL, *newnode = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	newnode = malloc(sizeof(hash_node_t));

	if (newnode == NULL)
		return (0);

	searchnode = ht->array[index];

	while (searchnode != NULL)
	{
		if (strcmp(searchnode->key, key) == 0)
		{
			free(searchnode->value);
			searchnode->value = strdup(value);
			free(newnode);
			return (1);
		}

		searchnode = searchnode->next;
	}

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
