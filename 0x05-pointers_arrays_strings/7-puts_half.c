#include "holberton.h"
/**
 *puts_half- print the half of the string
 *@str: pointer
 *
 */
void puts_half(char *str)
{
int x = 0, l = 0;
while (str[l])
l++;
if (l % 2 == 0)
x = (l / 2);
else
x = (l - 1) / 2;
while (*(str + x))
{
_putchar(str[x]);
x++;
_putchar('\n');
}
}
