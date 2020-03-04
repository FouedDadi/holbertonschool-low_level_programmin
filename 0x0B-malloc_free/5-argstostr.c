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
int x, y, w, l;
char *S;
if (ac == 0)
return (NULL);
if (av == NULL)
return (NULL);
l = 0;
w = 0;
while (x < ac)
{
y = 0;
while (av[x][y] != '\0')
{
l++;
y++;
}
l++;
x++;
}
l++;
S = malloc(l);
if (S == NULL)
return (NULL);
x = 0;
while (x < ac)
{
y = 0;
while (av[x][y] != '\0')
{
S[w] = av[x][y];
w++;
y++;
}
S[w] = '\n';
w++;
x++;
}
S[w] = '\0';
return (S);
}
