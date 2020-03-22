#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strlen- lengh of string
 *@s: pointer s
 *Return: return l
 */
int _strlen(const char *s)
{
int l = 0;
while (*s++)
l++;
return (l);
}
/**
 *add_node_end- function that adds a new node at the end
 *@head: head oft he list
 *@str: string
 *Return: return new_node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
struct list_s *new_node = (struct list_s*) malloc(sizeof(struct list_s));
struct list_s *last;
if (new_node == NULL)
return (NULL);
if (new_node != NULL)
new_node->str = strdup(str);
new_node->next = NULL;
new_node->len = _strlen(str);
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new_node;
return (new_node);
}
