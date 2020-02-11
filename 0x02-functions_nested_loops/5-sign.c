#include "holberton.h"
/**
 *print_sign - show sign of the int
 *@n: just an int
 *Return: + for positive 0 for zero and - for negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
