#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings- function that print strings
 *@separator: string between strings
 *@n: number of strings
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
char *c;
va_list target;
va_start(target, n);
x = 0;
while (x < n)
{
c = va_arg(target, char *);
if (c == NULL)
printf("nil\n");
else
printf("%s", c);
if (x < n - 1)
{
if (separator != NULL)
printf("%s", separator);
}
x++;
}
va_end(target);
printf("\n");
}
