#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints all possible different combinations of two digits
 *Return: Always 0 (Success)
 */
int main(void)
{
int x, n, v;
for (x = '0'; x <= '9'; x++)
{
v = x;
v++;
for (n = v ; n <= '9'; n++)
{
putchar(x);
putchar(n);
if (!(x == '8' && n == '9'))
{
putchar(',');
putchar (' ');
}
}
}
putchar('\n');
return (0);
}
