#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_list- function that frees a list t
 *@head: head of the list
 */
void free_list(list_t *head)
{
struct list_t *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);
}
}
