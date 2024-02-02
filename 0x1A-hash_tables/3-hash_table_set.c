#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_node - check the code
 * @key: ...
 * @value: ...
 * Return: Always EXIT_SUCCESS.
 */
hash_node_t *create_node(char *key, const char *value)
{
	hash_node_t *node;

	node = (hash_node_t *)calloc(1, sizeof(hash_node_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node);
		return (NULL);
	}
	strcpy(node->value, value);

	return (node);
}

/**
 * hash_table_set - check the code
 * @ht: ...
 * @key: ...
 * @value: ...
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long hash_index;
	hash_node_t *entry;

	if (key == NULL || *key == 0)
	{
		return (0);
	}

	hash_index = key_index((unsigned char *)key, 1024);
	entry = ht->array[hash_index];
	if (entry == NULL)
	{
		entry = create_node((char *)key, value);
		if (entry == NULL)
		{
			return (0);
		}
		ht->array[hash_index] = entry;
	}
	else
	{
		node = create_node((char *)key, value);
		if (node == NULL)
		{
			return (0);
		}
		node->next = entry;
		ht->array[hash_index]  = node;
	}
	return (1);
}
