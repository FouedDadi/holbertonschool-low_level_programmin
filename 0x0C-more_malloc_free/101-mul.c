#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 *main- multiply two positive numbers
 *@argc: number of positive numbers
 *@argv: each positive number
 *Return: return 0
 */
int main(int argc, char *argv[])
{
int mul, num1, num2;
if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
}
else
{
printf("Error\n");
exit(98);
}
mul = num1 * num2;
printf("%d\n", mul);
return (0);
}
