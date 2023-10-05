#include "hash_tables.h"

/*
 * hash_table_create: function that creates a hash table.
 * @size: the size of the array.
 * Returns: a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long  int i = 0;
hash_table_t *new_hash_table = NULL;
new_hash_table = malloc(sizeof(hash_table_t));
if (!new_hash_table)
	return (NULL);
new_hash_table->size = size;
new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
if (!new_hash_table->array)
{
	free(new_hash_table);
	return (NULL);
}
for (; i < size; i++)
	(new_hash_table->array)[i] = NULL;
return (new_hash_table);
}
