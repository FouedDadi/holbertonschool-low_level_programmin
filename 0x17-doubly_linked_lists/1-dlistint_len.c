#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *dlistint_len- return number of elements of node
 *@h: pointer to head of list
 *Return: return x
 */
size_t dlistint_len(const dlistint_t *h)
{
int x;
while (h != NULL)
{
h = h->next;
x++;
}
return (x);
}
