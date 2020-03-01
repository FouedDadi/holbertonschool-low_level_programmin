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
for (y = 1; argv[y] != '\0'; y++)
{
if (!isdigit(*argv[y]))
{
printf("Error\n");
return (1);
}
}
if (argc < 2)
{
printf("0\n");
return (0);
}
for (x = 1; x < argc; x++)
S += atoi(argv[x]);
printf("%d\n", S);
return (0);
}
