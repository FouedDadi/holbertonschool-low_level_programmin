#include "lists.h"
#include <stdio.h>
/**
 *get_dnodeint_at_index- function that gets the nth node of a linked list
 *@head: head of the linked list
 *@index: index
 *Return: return current
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
struct dlistint_s *current;
unsigned int x;
if (head == NULL)
return (NULL);
current = head;
for (x = 0; current != NULL; x++)
{
if (x == index)
return (current);
current = current->next;
}
return (current);
}
