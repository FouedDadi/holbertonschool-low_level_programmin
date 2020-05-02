#include "lists.h"
#include <stdio.h>
/**
 *insert_dnodeint_at_index- function to add node at a certain index
 *@h: head of the list
 *@idx: index
 *@n: integer data
 *Return: return NULL or new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
struct dlistint_s *tmp, *new_node;
unsigned int x;
new_node = malloc(sizeof(struct dlistint_s));
if (new_node == NULL || h == NULL)
return (NULL);
tmp = *h;
if (idx == 0)
return (add_dnodeint(h, n));
for (x = 0; x < (idx - 1); x++)
{
if (tmp == NULL)
return (NULL);
tmp = tmp->next;
}
if (tmp->next == NULL)
return (add_dnodeint_end(h, n));
new_node->n = n;
new_node->prev = tmp;
tmp->next->prev = new_node;
new_node->next = tmp->next;
tmp->next = new_node;
return (new_node);
}
