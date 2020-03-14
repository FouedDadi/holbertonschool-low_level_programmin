#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers- function that print numbers
 *@separator: string between numbers
 *@n: number of integers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list unintargp;
va_start(unintargp, n);
x = 0;
while (x < n)
{
printf("%d", va_arg(unintargp, int));
if (x < n - 1)
{
if (separator != NULL)
printf("%s", separator);
}
x++;
}
va_end(unintargp);
printf("\n");
}
