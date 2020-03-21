#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node- function that add a new node
 *@head: head of the chain
 *@str: string
 *Return: return null or adress
 */
list_t *add_node(list_t **head, const char *str)
{
unsigned int x;
struct list_s *new_node = (struct list_s *) malloc(sizeof(struct list_s));
if (new_node != NULL)
new_node->str = strdup(str);
for (x = 0; str[x] != '\0'; x++)
new_node->next = *head;
new_node->len = x;
if (new_node == NULL)
return (NULL);
*head = new_node;
return (new_node);
}
