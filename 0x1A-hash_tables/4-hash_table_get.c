#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - check the code
 * @ht: ...
 * @key: ...
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long hash_index;
	hash_node_t *entry;

	if (ht == NULL)
	{
		return (NULL);
	}
	hash_index = key_index((unsigned char *)key, ht->size);

        entry = ht->array[hash_index];
       	while (entry != NULL)
	{
		if(strcmp(entry->key, key) == 0)
		{
			return entry->value;
		}
		entry = entry->next;
	}
	return (NULL);
}
