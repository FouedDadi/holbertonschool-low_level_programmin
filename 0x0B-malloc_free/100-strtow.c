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
int x, c = 0, p = 0;
char array, token;
if (str == NULL || str == "")
return (NULL);
for (x = 0; str[x] != '\0'; x++)
{
if (str[x] == ' ')
{
c++;
}
}
c += 1;
char *array[c + 1];
char *token = strtok(str, " ");
while (token != NULL)
{
array[p] = malloc(strlen(token));
strcpy(array[p], token);
token = strtok(NULL, " ");
p++;
return (0);
}
