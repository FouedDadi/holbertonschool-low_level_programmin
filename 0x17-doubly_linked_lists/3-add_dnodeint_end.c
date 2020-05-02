#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_dnodeint_end- function that add a new node at the end of list
 *@head: head of the chain
 *@n: integer data
 *Return: return new node or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
struct dlistint_s *tmp;
struct dlistint_s *new = malloc(sizeof(struct dlistint_s));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
else if (*head != NULL)
{
tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new;
new->prev = tmp;
}
return (new);
}
