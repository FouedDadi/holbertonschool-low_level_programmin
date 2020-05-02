#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dlistint- function that frees a list t
 *@head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}

