#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void delete_node(hash_node_t *node)
{
	hash_node_t *temp;

	if (node == NULL)
	{
		return;
	}
	while(node != NULL)
	{
		temp = node;
		node = node->next;
		if(temp->value)
		{
			free(temp->key);
			free(temp->value);
		}
		free(temp);
	}
}
/**
 * hash_table_delete - check the code
 * @ht: ...,
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		node  = ht->array[i];
		if(node != NULL)
		{
			delete_node(node);
			ht->array[i] = NULL;
		}
	}
	free(ht->array);
	free(ht);
}
