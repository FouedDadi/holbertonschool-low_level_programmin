#include "holberton.h"
/**
 *main - fucntion main will print the alphabet in lowercase
 *Return: 0
 */
void print_alphabet(void)
{
char x;
x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
}
