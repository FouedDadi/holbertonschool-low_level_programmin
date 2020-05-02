#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_dnodeint- function that add a new node
 *@head: head of the chain
 *@n: integer data
 *Return: return new node or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
struct dlistint_s *new = malloc(sizeof(struct dlistint_s));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
new->prev = NULL;
if (*head != NULL)
(*head)->prev = new;
*head = new;
return (new);
}
