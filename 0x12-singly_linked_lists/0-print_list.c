#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_list- function to print all elements of list
 *@h: pointer to head of list
 *Return: return x
 */
size_t print_list(const list_t *h)
{
int x;
while (h != NULL)
{
if (h->str != NULL)
printf("[%d] %s", h->len, h->str);
if (h->str == NULL)
printf("[%d] (nil)", x);
printf("\n");
h = h->next;
x++;
}
return (x);
}
