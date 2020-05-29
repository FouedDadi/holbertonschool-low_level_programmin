#include "hash_tables.h"
/**
*hash_table_set- function that sets a value
*@ht: pointer to hash table
*@key: key from hash table
*@value: value of key
*Return: return 1 or 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node, *head;
unsigned long int index;
node = malloc(sizeof(hash_node_t));
if (node == NULL)
	return (0);
index = key_index((const unsigned char *)key, ht->size);
head = ht->array[index];
while (head)
{
	if (strcmp(key, head->key) == 0)
	{
		free(head->value);
		head->value = strdup(value);
		return (1);
	}
	head = head->next;
}
node->next = head;
node->key = strdup(key);
if (node->value == NULL)
{
	free(node);
	return (0);
}
node->value = strdup(value);
if (node->value == NULL)
{
	free(node);
	free(node->key);
	return (0);
}
head = node;
return (1);
}
