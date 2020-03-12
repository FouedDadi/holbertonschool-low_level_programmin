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
printf("error\n");
exit(1);
}
if (atoi(argv[1]) < 0)
{
printf("Error\n");
exit(2);
}
return (0);
}
