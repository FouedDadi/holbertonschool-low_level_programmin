#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the numbers from 0 to 9
 *Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (x < '9')
{
putchar(',');
putchar (' ');
}
}
putchar('\n');
return (0);
}
