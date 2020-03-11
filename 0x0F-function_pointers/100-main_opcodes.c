#include "function_pointers.h"
#include <stdio.h>
#include <sdtlib.h>
/**
 *main- main code
 *@argc: 
 *@argv: each argument
 *Return: return 0
 */
int main (int argc, int argv[])
{
int b;
if (argc != 2)
{
printf("error\n");
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
