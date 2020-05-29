#include "hash_tables.h"
/**
*hash_table_get- function that gets value depending on key
*@ht: pointer to hash table
*@key: key from hash table
*Return: return value or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned int index;
hash_node_t *node;
if (key == NULL || ht == NULL)
return (NULL);
index = key_index((unsigned char *)key, ht->size);
node = ht->next;
while (node != NULL)
{
if (strcmp(node->key, key) != 0)
node = node->next;
return (node->value);
}
return (NULL);
}
