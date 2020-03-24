#include "lists.h"
#include <stdio.h>
/**
 *getçnodeint_at_index- function that gets the nth node of a linked list
 *@head: head of the linked list
 *@index: index
 *Return: return current
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
struct listint_s *current;
unsigned int x;
if (head == NULL)
return (NULL);
current = head;
for (x = 0; head != NULL; x++)
{
if (x == index)
return (current);
current = current->next;
}
return (current);
}
