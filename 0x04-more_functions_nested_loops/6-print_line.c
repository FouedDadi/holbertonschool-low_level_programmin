#include "holberton.h"
/**
 *print_line- print a line
 *@n: print line n times
 */
void print_line(int n)
{
int x;
for (x = 0; x < n; x++)
{
_putchar('_');
}
_putchar('\n');
if (n < 0)
_putchar('\n');
}
