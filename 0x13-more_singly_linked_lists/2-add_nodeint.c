#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint- adds a node at the beginning of a list
 *@head: head of the list
 *@n: number to be added
 *Return: return new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
if (new_node != NULL)
{
new_node->n = n;
new_node->next = *head;
*head = new_node;
}
return (new_node);
}
