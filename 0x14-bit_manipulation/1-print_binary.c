#include "holberton.h"
/**
 *print_biinary- function that print binary rep
 *@n: number
 */
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
