#include <stdio.h>
#include <stdlib.h>
/**
 *main - print all digit numbers of base 10
 *Return: Always 0 (Success)
 */
int main(void)
{
int x = 0;
char n = 'a';
for (x = 0; x <= 9; x++)
{
putchar(x + '0');                                                                                                      }
while (n <= 'f')
{
putchar (n);
n++;
}
printf("\n");
return (0);
}
