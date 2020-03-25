#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *reverse_listint- function to reverse a linked list
 *@head: head of the linked list
 *Return: return head or NULL
 */
listint_t *reverse_listint(listint_t **head)
{
struct listint_s *pre, *next;
if (head == NULL)
return (NULL);
pre = NULL;
next = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = pre;
pre = *head;
*head = next;
}
*head = pre;
return (*head);
}
