#include "holberton.h"
/**
 *print_binary- function that print binary rep
 *@n: number
 */
void print_binary(unsigned long int n)
{
unsigned long int x;
x = (n & 1) + '0';
if (n > 1)
print_binary(n >> 1);
_putchar(x);
}
