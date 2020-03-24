#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_listint- function to print elements of list
 *@h: head of the list
 *Return: return x
 */
size_t print_listint(const listint_t *h)
{
unsigned int x;
for (x = 0; h != NULL; x++)
{
if (h-> != 0)
printf("%d\n", h->n);
h = h->next;
}
return (x);
}
