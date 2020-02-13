#include "holberton.h"
/**
 *print_number- display a number
 *
 */
void print_number(int n)
{
if (n % 10 != 0)
{
if (n > 0)
{
_putchar(n % 10 + '0');
else 
_putchar(-n % 10 + '0')
}
}
if ((n % 10 == 0) && (n > 0))
_putchar(n % 10 + '0');
if (n > 10)
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
