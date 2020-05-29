#include "hash_tables.h"
/**
*hash_table_print- function that print a hash table
*@ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int x;
	int p = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node != NULL)
		{
			if (p)
			printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			p++;
			node = node->next;
		}
	}
	printf("}\n");
}
