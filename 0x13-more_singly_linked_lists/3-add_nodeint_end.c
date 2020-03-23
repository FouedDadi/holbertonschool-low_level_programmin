#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end- add node at the end of list
 *@head: head of the list
 *@n: number to be added
 *Return: return NULL or new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
struct listint_s *last;
if (new_node == NULL)
return (NULL);
if (new_node != NULL)
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new_node;
return (new_node);
}
