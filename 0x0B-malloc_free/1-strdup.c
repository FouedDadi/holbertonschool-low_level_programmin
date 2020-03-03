#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strdup- duplicate an old string
 *@str: pointer to charracter
 *Return: return pointer to character
 */
char *_strdup(char *str)
{
int x;
char *dp;
char *c;
if (str == NULL)
return (NULL);
while (str[x])
x++;
dp = malloc(x + 1);
c = dp;
if (dp == NULL)
return (NULL);
while (*str)
*c++ = *str++;
*c = '\0';
return (dp);
free(dp);
}
