#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * print_hash_table - Print the elements of a hash table
 * @ht: The hash table to be printed
 */
void print_hash_table(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *current;

    if (ht == NULL)
        return;

    printf("{\n");

    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current != NULL)
        {
            printf("'%s': '%s'", current->key, current->value);
            current = current->next;

            if (current != NULL)
                printf(", ");
        }

	if (ht->array[i] != NULL)
	{
		printf("\n");
	}
    }

    printf("\n}\n");
}
