#include "holberton.h"
/**
 *_atoi- switch string to integer
 *@s: pointer
 *Return: return x * y
 */
int _atoi(char *s)
{
int w;
int x;
int y;
x = 0;
y = 1;
w = x * y;
while (('-' == (*s)) || ((*s) == '+'))
{
if (*s == '-')
y = y * -1;
s++;
}
while ((*s >= '0') && (*s <= '9'))
{
x = (x * 10) + ((*s) - '0');
s++;
}
_putchar(w);
return (0);
}
