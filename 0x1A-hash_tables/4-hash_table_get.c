#include "hash_tables.h"


/**
 * hash_table_get - A function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = 0;
char *value = NULL;
hash_node_t *node;

if (!ht || !key)
return (NULL);
else if (strlen(key) == 0)
return (NULL);

index = key_index((unsigned char *)key, ht->size);
if ((ht->array)[index] == NULL)
return (NULL);

node = ht->array[index];
while (!value)
{
if (strcmp(node->key, key) == 0)
value = node->value;
node = node->next;
}
return (value);
}
