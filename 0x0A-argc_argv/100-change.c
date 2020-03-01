#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main- find the minimum number of coins to make a change
 *@argc: number of arguments
 *@argv: pointer to each argument
 *Return: return 1 or 0
 */
int main(int argc, char *argv[])
{
  int cents , c25 = 0, c10 = 0, c5 = 0, c2 = 0, c1 = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents <= 0)
{
printf("0\n");
return (0);
}
if (cents >= 25)
{
c25 = cents / 25;
cents = cents % 25;
}
 if (cents >= 10)
{
c10 = cents / 10;
cents= cents % 10;
}
if (cents >= 5)
{
c5 = cents / 5;
cents = cents % 5;
}
if (cents >= 2)
{
c5 = cents / 2;
cents = cents % 2;
}
if (cents >= 1)
{
c1 = cents / 1;
cents = cents % 1;
}
printf("%d\n", c25 + c10 + c5 + c2 + c1);
return (0);
}
