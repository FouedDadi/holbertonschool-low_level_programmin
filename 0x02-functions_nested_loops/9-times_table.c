#include "holberton.h"
/**
 *times_table - show multiplication table
 *Return: nothing
 */
void times_table(void)
{
int x, y, S;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
S = x * y;
if (S < 10)
{
_putchar(S + '0');
if (y < 9)
{
if (((y + 1) * x) >= 10)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
}
else
{
_putchar((S / 10) + '0');
_putchar((S % 10) + '0');
if (y < 9)
{
_putchar (',');
_putchar (' ');
}
}
}
_putchar ('\n');
}
}
