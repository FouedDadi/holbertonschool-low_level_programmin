#include "holberton.h"
/**
 *print_number- display a number
 *
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
n = -n;
}
if (n == 0)
_putchar('0');
if (n > 10)
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
