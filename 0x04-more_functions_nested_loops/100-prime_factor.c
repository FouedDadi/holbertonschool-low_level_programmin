#include "holberton.h"
#include <stdio.h>
/**
 *main- contains the code
 *Return: return 0
 */
int main()
{
long int n = 612852475143;
long int div = 2, y = 0, x;
while(n!=0)
{
if(n % div !=0)
div = div + 1;
else
{
x = n;
n = n / div;
if(n == 1)
{
_putchar(n + '0')
y = 1;
break;
}
}
}
return 0;
}
