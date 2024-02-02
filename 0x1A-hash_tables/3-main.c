#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("Hash Table: \n");
	hash_table_set(ht, "betty", "cool");
	print_hash_table(ht);

	hash_table_set(ht, "hetairas", "random 1");
	hash_table_set(ht, "mentioner", "random 2");
	print_hash_table(ht);

	hash_table_set(ht, "heliotropes", "random 3");
	hash_table_set(ht, "neurospora", "random 4");
	print_hash_table(ht);

	hash_table_set(ht, "stylist", "random 5");
	hash_table_set(ht, "subgenera", "random 6");
	print_hash_table(ht);

	hash_table_set(ht, "dram", "random 7");
	hash_table_set(ht, "vivency", "random 8");
	print_hash_table(ht);

	return (EXIT_SUCCESS);
}
