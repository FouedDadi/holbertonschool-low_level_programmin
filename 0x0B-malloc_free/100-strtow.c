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
 char *w, i;
if (str == NULL || *str == '\0')
return (NULL);
l = 0;
for (x = 0; x < str; x++)
{
for (y = 0; str[x][y] != '\0'; y++)
l++;
}
l++;
w = malloc(l);
if (w == NULL)
return (NULL);
for (x = 0; x < str; x++)
{
for (y = 0; str[x][y] !='\0'; y++)
if (*w == " ")
*w += 1;
w[i] = str[x][y];
i++;
}
return (w);
}
