#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *_strdup- duplicate an old string
 *@str: pointer to charracter
 *Return: return pointer to character
 */
char *_strdup(char *str)
{
int size;
static char *dp;
char *c;
size = strlen(str);
dp = malloc(sizeof(size + 1));
if (dp == NULL)
return (NULL);
c = dp;
while (*str)
{
*c = *str;
c++;
str++;
}
*c = '\0';
return(dp);
}
