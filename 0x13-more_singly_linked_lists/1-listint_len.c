#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *
 *
 *
 */
size_t listint_len(const listint_t *h)
{
int x = 0;
while  (h != NULL)
{
h = h->next;
x++;
}
return (x);
}
