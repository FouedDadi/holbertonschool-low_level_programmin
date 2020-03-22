#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
unsigned int x;
struct list_t *new_node;
struct list_t *last;
new_node = (struct list_t*) malloc(sizeof(struct list_t));
if (new_node == NULL)
return (NULL);
if (new_node != NULL)
{
new_node->str = strdup(str);
for (x = 0; str[x] != '\0'; x++)
new_node->next = *head;
new_node->len = x;
if (*head == NULL)
*head = new_node;
else
{
while (last->next != NULL)
last = last->next;
last->next = new_node;
}
}
return (new_node);
}
