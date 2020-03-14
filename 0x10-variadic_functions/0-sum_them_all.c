#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *sum_them_all- function that sums all args
 *@n: number of arguments
 *Return: return the result
 */
int sum_them_all(const unsigned int n, ...)
{
int S = 0;
unsigned int x;
va_list unintargp;
va_start(unintargp, n);
if (n == 0)
return (S);
for (x = 0; x < n; x++)
S += va_arg(unintargp, unsigned int);
va_end(unintargp);
return (S);
}
