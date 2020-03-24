#include "lists.h"
#include <stdio.h>
/**
 *sum_listint- function that sums all data of list
 *@head: head of the list
 *Return: return s
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
