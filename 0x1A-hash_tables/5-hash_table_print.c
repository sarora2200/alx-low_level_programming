#include "hash_tables.h"


/**
 * hash_table_print - A function that prints a hash table.
 * @ht: the hash table
*/

void hash_table_print(const hash_table_t *ht)
{
unsigned long int index = 0, last = 0;
hash_node_t *node = NULL;

if (ht == NULL)
return;
putchar('{');
if (ht)
{
for (; index < ht->size - 1; index++)
{
if (ht->array[index] != NULL)
last = index;
}
for (index = 0; index <= last; index++)
{
node = ht->array[index];
while (node)
{
printf("'%s': '%s'", node->key, node->value);
node = node->next;
if (index < last - 1)
printf(", ");
}
}
}
printf("}\n");
}
