#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: Always nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *ptr;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			tmp = ptr;
			ptr = ptr->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		free(ptr);
	}
	free(ht->array);
	free(ht);
}
