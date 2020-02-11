#include "holberton.h"
/**
 *print_last_digit- will show last digit
 *@LD:just an int
 *Return: 0
 */
int print_last_digit(int LD)
{
LD = LD % 10;
if (LD < 0)
LD = -LD;
_putchar(LD + '0');
return (LD);
}
