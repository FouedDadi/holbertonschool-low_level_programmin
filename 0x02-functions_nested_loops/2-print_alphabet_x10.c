#include "holberton.h"
/**
 *print_alphabet_x10 - print the alphabet in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
int n, x;
for (n = 1; n <= 10; ++n)
{
x = 'a';
while (x <= 'z')
{
_putchar(x);
++x;
}
_putchar('\n');
}
}
