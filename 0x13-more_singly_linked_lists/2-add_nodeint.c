#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *
 *
 *
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
struct listint_s *new_node = (struct listint_s *) malloc(sizeof(struct listint_s));
if (new_node == NULL)
return (NULL);
if (new_node != NULL)
{
new_node->next = *head;
new_node->n = n;
*head = new_node;
}
return (new_node);
}
