#include "holberton.h"
/**
 *print_rev- print in reverse
 *
 */
void print_rev(char *s)
{
while (*s != '\0')
{
s++;
}
s--;
while (*s != '\0')
{
_putchar(*s);
s--;
}
_putchar('\n');
}
