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
int x = 0;
while  (h != NULL)
{
h = h->next;
x++;
}
return (x);
}
