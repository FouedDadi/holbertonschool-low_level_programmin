#include "hash_tables.h"
/**
*hash_table_create- function that creates a new hash table
*@size: size of the hash table
*Return: return pointer to new hash table (table)
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
unsigned long int x;
if (size == 0)
return (NULL);
table = malloc(sizeof(hash_table_t));
if (table == NULL)
return (NULL);
table->array = malloc(sizeof(hash_table_t) * size);
if (table->array == NULL)
return (NULL);
table->size = size;
for (x = 0; x < size; x++)
table->array[x] = NULL;
return (table);
}
