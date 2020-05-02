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
const dlistint_t *tmp = h;
size_t x;
for (x = 0; tmp != NULL; x++)
{
if (tmp->n != 0)
printf("%d\n", tmp->n);
tmp = tmp->next;
}
return (x);
}
