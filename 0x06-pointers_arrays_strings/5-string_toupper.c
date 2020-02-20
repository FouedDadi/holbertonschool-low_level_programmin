#include "holberton.h"
/**
 *string_toupper- change lowercase to uppercase
 *@x: pointer
 *Return: return x
 */
char *string_toupper(char *x)
{
int i = 0;
while (x[i] != '\0')
{
if (x[i] >= 'a' && x[i] <= 'z')
x[i] = x[i] - 32;
++i;
}
return (x);
}
