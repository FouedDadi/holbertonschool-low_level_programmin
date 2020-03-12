#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main- main code
 *@argc: number of arguments
 *@argv: each argument
 *Return: return 0
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
int b;
printf("Error\n");
exit(1);
}
b = atoi(argv[1]);
if (b < 0)
{
printf("Error\n");
exit(2);
}
return (0);
}
