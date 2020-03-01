#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main- print number of arguments
 *@argc: number of arguments
 *@argv: each argument
 *Return: return 1 if argc < 3
 */
int main(int argc, char *argv[])
{
int x, y, S = 0;
if (argc == 3)
{
x = atoi(argv[1]);
y = atoi(argv[2]);
S = x *y;
printf("%d\n", S);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
