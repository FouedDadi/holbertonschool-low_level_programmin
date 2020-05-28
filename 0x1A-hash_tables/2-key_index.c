#include "hash_tables.h"
/**
*key_index- returns index where key/value stored
*
*@key: key of the array
*@size: size of the array
*Return: return index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;
index = hash_djb2(key) % size;
return (index);
}
