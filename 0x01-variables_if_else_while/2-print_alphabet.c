#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - fucntion main will print the alphabet in lowercase
 *Return: 0
 */
int main(void)
{ char x;
x = 'a';
while (x <= 'z')
{
putchar (x);
x++;
}
putchar (x);
return (0);
}
