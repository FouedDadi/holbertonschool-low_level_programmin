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
int x = 0;
while (h != NULL)
{
if (h->n != 0)
printf("%d\n", h->n);
h = h->next;
x++;
}
return (x);
}
