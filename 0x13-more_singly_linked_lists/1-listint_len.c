#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *listint_len- function that return the number of elements
 *@h: head of the list
 *Return: return x
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
