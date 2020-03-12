#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *op_add- fucntion that returns result of sum
 *@a: integer
 *@b: integer
 *Return: return S
 */
int op_add(int a, int b)
{
int S;
S = a + b;
return (S);
}
/**
 *op_sub- function returns difference btw a and b
 *@a: integer
 *@b: integer
 *Return: return D
 */
int op_sub(int a, int b)
{
int D;
D = a - b;
return (D);
}
/**
 *op_mul- function that multiply a and b
 *@a: integer
 *@b: integer
 *Return: return M
 */
int op_mul(int a, int b)
{
int M;
M = a * b;
return (M);
}
/**
 *op_div- function that return division of a/b
 *@a: integer
 *@b: integer
 *Return: return d
 */
int op_div(int a, int b)
{
int d;
if (b == 0)
{
printf("Error\n");
exit(100);
}
d = a / b;
return (d);
}
/**
 *op_mod- function that return modulo of a % b
 *@a: integer
 *@b: integer
 *Return: return m
 */
int op_mod(int a, int b)
{
int m;
if (b == 0)
{
printf("Error\n");
exit(100);
}
m = a % b;
return (m);
}
