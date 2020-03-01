#include "holberton.h"
#include <stdio.h>
/**
 *main- find the minimum number of coins to make a change
 *@argc: number of arguments
 *@argv: pointer to each argument
 *Return: return 1 or 0
 */
int main(int argc, char **argv[])
{
int cent, x25 = 0, x10 = 0, x5 = 0, x2 = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cent = atoi(argv[1]);
if (cent <= 0)
{
printf("0\n");
return (0);
}

return (0); 
} 
