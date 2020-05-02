#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dlistint- print all elements of node h
 *@h: pointer to head of list
 *Return: return x
 */
size_t print_dlistint(const dlistint_t *h)
{
int x;
for (x = 0; h != 0; x++)
{
if (h->n != 0)
printf("%d\n", h->n);
h = h->next;
}
return (x);
}
