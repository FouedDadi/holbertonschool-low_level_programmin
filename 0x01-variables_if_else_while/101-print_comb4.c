#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints all possible different combinations of two digits
 *Return: Always 0 (Success)
 */
int main(void)
{
int y, x, n;
for (y = '0'; y <= '9'; y++)
{
for (x = y + 1; x <= '9'; x++)
{
for (n = x + 1; n <= '9'; n++)
{
putchar(y);
putchar(x);
putchar(n);
if (!(y == '7' && x == '8' && n == '9'))
{
putchar(',');
putchar (' ');
}
}
}
}
putchar('\n');
return (0);
}
