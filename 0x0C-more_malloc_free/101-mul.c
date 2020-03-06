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
if (argv[1] >= 0 && argv[2] <= 9)
num1 = atoi(argv[1]);
if (argv[2] >= '0' && argv[2] <= '9')
num2 = atoi(argv[2]);
mul = num1 *num2;
printf("%d\n", mul);
if (argc != 3)
{
printf("Error\n");
exit(98);
}
if isdigit(num1) == 0 && isdigit(num2) == 0
{
printf("Error\n");
exit(98);
}
return (0);
}
