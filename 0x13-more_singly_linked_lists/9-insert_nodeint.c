#include "lists.h"
#include <stdio.h>
/**
 *insert_nodeint_at_index- function to add node at a certain index
 *@head: head of the list
 *@idx: index
 *@n: numbers
 *Return: return NULL or new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
struct listint_s *tmp, *new_node;
unsigned int x;
tmp = *head;
new_node = (struct listint_s *) malloc(sizeof(struct listint_s));
if (new_node == NULL)
return (NULL);
if (head == NULL)
return (NULL);
if (idx == 0)
{
new_node->n = n;
new_node->next = tmp;
*head = new_node;
return (new_node);
}
for (x = 0; x < (idx - 1); x++)
{
if (tmp == NULL)
return (NULL);
if (tmp->next == NULL)
return (NULL);
tmp = tmp->next;
}
new_node->n = n;
new_node->next = tmp->next;
tmp->next = new_node;
return (new_node);
}
