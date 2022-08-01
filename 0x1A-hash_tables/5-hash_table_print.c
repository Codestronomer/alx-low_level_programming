#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table
 * Return: always nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			if (first)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				first = 0;
			}
			else
			{
				printf(", '%s': '%s'", ptr->key, ptr->value);
			}
			ptr = ptr->next;
		}
	}
	printf("}\n");
}

