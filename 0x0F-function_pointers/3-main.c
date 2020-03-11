#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main- main code
 *@argc: number of arguments
 *@argv: each argument
 *Return: return 0
 */
int main (int argc, char *argv[])
{
int num1, num2, r;
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (get_op_func(argv[2]) != ops(i))
{
printf("Error\n");
exit(99);
}
r = get_op_func((argv[2])(num1, num2);
printf("%d\n", res);
return (0);
}
