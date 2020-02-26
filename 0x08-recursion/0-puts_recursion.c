#include "holberton.h"
/**
 *_puts_recursion- print a string and then new line
 *@s: pointer
 *Return :return statement
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
