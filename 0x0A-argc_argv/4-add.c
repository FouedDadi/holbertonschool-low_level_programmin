#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main- print number of arguments
 *@argc: number of arguments
 *@argv: each argument
 *Return: return 1 if argv[x] is not a digit
 */
int main(int argc, char *argv[])
{
int x, y, S = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (x = 1; x < argc; x++)
{
for (y = 0; argv[x][y] != '\0'; y++)
{
if (!isdigit(argv[x][y]))
{
printf("Error\n");
return (1);
}
}
}
for (x = 1; x < argc; x++)
S += atoi(argv[x]);
printf("%d\n", S);
return (0);
}
