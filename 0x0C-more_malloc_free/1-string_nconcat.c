#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **string_nconcat- concatenate two strings
 *@s1: pointer 1
 *@s2: pointer 2
 *@n: number of bytes
 *Return: return the pointer p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x1, x2, x;
char *p;
x1 = 0;
x2 = 0;
if (s1 == '\0')
s1 = "";
if (s2 == '\0')
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
p = malloc(x1 + n + 1);
if (p == NULL)
return (NULL);
if (n >= x2)
n = x2;
x = 0;
while (s1[x] != '\0')
{
p[x] = s1[x];
x++;
}
for (x = 0; x < n; x++)
p[x1 + x] = s2[x];
p[x1 + n] = '\0';
return (p);
}
