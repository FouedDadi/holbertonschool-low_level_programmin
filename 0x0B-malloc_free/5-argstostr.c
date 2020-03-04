#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
**argstostr- concatenate all arguments into a string
*@ac: integer of string
*@av: pointer to a pointer
*Return: pointer
*/
char *argstostr(int ac, char **av)
{
int x, y, w = 0, l = 0;
char *S;
for (x = 0; x < ac; x++)
{
for (y = 0; av[x][y] != '\0'; y++)
l++;
}
S = malloc(l);
for (x = 0; x < ac; x++)
{
for (y = 0; av[x][y] != '\0'; y++)
{
S[w] = av[x][y];
w++;
}
S[w++] = '\n';
}
S[w] = '\0';
return (S);
}
