#include "holberton.h"
/**
 *_puts- print a string
 *@str: string pointer
 *
 */
void _puts(char *str)
{
while (*str != '\0')
{
str++;
_putchar(*str);
}
_putchar('\n');
}
