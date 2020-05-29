#include "hash_tables.h"
/**
*hash_table_delete- function that deletes a hash table
*@ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *node;

	if (ht == NULL)
		return;
	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node)
		{	
			free(node);
			free(node->key);
			free(node->value);
			node = node->next;
		}
	}
	free(ht->array);
	free(ht);
}
