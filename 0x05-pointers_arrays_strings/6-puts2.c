#include "holberton.h"
/**
 *puts2- print values of even numbers
 *@str: pointer
 *
 */
void puts2(char *str)
{
int i, l = 0;
while (str[l])
l++;
for (i = 0 ; i < l; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
