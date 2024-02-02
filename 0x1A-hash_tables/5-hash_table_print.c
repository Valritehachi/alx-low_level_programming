#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - Print the elements of a hash table
 * @ht: The hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (current != NULL)
			{
				printf(", ");
				current = current->next;
        		}
    		}
	}	
	printf("}\n");
}
