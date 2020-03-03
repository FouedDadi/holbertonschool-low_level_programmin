#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **str_concat- concatenate two strings
 *@s1: pointer of string 1
 *@s2: pointer of string 2
 *Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
int x1 = 0, x2 = 0, x = 0, y = 0;
char *f;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
x = 0;
while (s1[x] != '\0')
{
x1++;
x++;
}
x = 0;
while (s2[x] != '\0')
{
x2++;
x++;
}
f = malloc(x1 + x2 + 1);
if (f == NULL)
return (NULL);
x = 0;
while (x < x1)
{
f[x] = s1[x];
x++;
}
while (x < (x1 + x2))
{
f[x] = s2[y];
x++;
y++;
}
f[x] = '\0';
return (f);
free(f);
}
