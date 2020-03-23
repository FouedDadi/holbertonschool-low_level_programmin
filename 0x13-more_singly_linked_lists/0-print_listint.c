#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *
 *
 *
 */
size_t print_listint(const listint_t *h)
{
int x;
for (x = 0; h != NULL; x++)
{
if (h->n != 0)
printf("%d\n", h->n);
h = h->next;
}
return (x);
}
