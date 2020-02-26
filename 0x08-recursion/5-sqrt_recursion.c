#include "holberton.h"
/**
 *_sqrt- helper function
 *@n: integer
 *@x: counter
 *Return: return statement
 */
int _sqrt(int n, int x)
{
int S;
S = x * x;
if (n == S)
return (x);
else if (n < S)
return (-1);
return (_sqrt(n, ++x));
}
#include "holberton.h"
/**
 *_sqrt_recursion- sqaure implementation
 *@n: integer
 *Return: return statement
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (_sqrt(n, 2));
}
