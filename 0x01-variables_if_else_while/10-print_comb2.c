#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the numbers from 00 to 99
 *Return: Always 0 (Success)
 */
int main(void)
{
int x, n;
for (x = '0'; x <= '9'; x++)
{
for (n = '0' ; n <= '9'; n++)
{
putchar(x);
putchar(n);
if (!(x == '9' && n == '9'))
{
putchar(',');
putchar (' ');
}
}
}
putchar('\n');
return (0);
}
