#include "hash_tables.h"

/**
 * add_hash_node - adds a node at the beginning of a given index
 * in an hash table
 * @h: head of the index's linked list
 * @key: key of the node
 * @value: value of the node
 * Return: head of the given index linked list
 */

hash_node_t *add_hash_node(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *new_node, *ptr;

	ptr = *h;
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (*h);
		}
		ptr = ptr->next;
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = *h;
	*h = new_node;

	return (*h);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL)
		return (0);

	if (key == NULL || key == 0 || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (add_hash_node(&(ht->array[index]), key, value) == NULL)
			return (0);

	return (1);
}
