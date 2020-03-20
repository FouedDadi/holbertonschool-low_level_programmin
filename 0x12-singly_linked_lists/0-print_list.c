#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 */
size_t print_list(const list_t *h)
{
int x;
for (x = 0; h != NULL; x++)
{
if (h->str != NULL)
printf("[%d] %s", h->len, h->str);
if (h->str == NULL)
printf("[%d] (nil)", x);
printf("\n");
h = h->next;
}
return (x);
}
