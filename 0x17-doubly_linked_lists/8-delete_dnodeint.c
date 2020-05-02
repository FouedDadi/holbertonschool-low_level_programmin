#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *delete_nodeint_at_index- function that delete node at precised index
 *@head: head of the list
 *@index: index
 *Return: return 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
struct dlistint_s *tmp, *suivant;
unsigned int x;
if (*head == NULL)
return (-1);
tmp = *head;
if (index == 0)
{
*head = tmp->next;
free(tmp);
return (1);
}
for (x = 0; x < (index - 1) && tmp != NULL; x++)
tmp = tmp->next;
if (tmp == NULL)
return (-1);
if (tmp->next == NULL)
return (-1);
suivant = tmp->next->next;
suivant->prev->prev = tmp;
free(tmp->next);
free(suivant->prev);
tmp->next = suivant;
suivant->prev = tmp;
return (1);
}
