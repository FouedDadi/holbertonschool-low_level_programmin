#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *list_len- function that return number of elements
 *@h: pointer to head of list
 *Return: return x
 */
size_t list_len(const list_t *h)
{
int x;
for (x = 0; h != NULL; x++)  
h = h->next;
return (x);
}
