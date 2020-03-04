#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
***strtow- splits string into words
 *@str: pointer to string
 *Return: return statement
 */
char **strtow(char *str)
{
int x, y, l;
char **w;
if (str == NULL || *str == '\0')
return (NULL);
l = 0;
for (x = 0; str[x]; x++)
l++;
w = malloc(l);
if (w == NULL)
return (NULL);
for (x = 0; x < str[x]; x++)
{
for (y = 0; y < str[y]; y++)
if (str[x] != " ")
*w[x] = str[x];
x++;
}
return (w);
}
