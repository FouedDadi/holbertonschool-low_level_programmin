#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint- function that free a list
 *@head: head of the list
 */
void free_listint(listint_t *head)
{
struct listint_s *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
