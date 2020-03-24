#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *pop_listint- function that deletes the head
 *@head: head of the linked list
 *Return: return data
 */
int pop_listint(listint_t **head)
{
int data;
struct listint_s *tmp;
if (*head == NULL)
return (0);
if (*head != NULL)
{
tmp = *head;
free(*head);
data = tmp->n;
*head = (*head)->next;
}
return (data);
}
