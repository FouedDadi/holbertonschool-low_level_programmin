#include "lists.h"
/**
 *free_listint2- function that frees a list
 *@head: head of the list
 */
void free_listint2(listint_t **head)
{
struct listint_s *tmp;
if (head == NULL)
return (NULL);
while (*head != NULL)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
head = NULL;
}
