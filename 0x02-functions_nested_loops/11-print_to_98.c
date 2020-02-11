#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98- print numbers till it reach 98
 *@n: integer given
 *return : 0
 */
void print_to_98(int n)
{
int j;
if (n < 98)
for (j = n; j <= 98; j++)
{
printf("%d", j);
if (j != 98)
{
printf(", ");
}
}
if (n == 98)
{
printf("%d", n);
}
if (n > 98)
{
for (j = n; j >= 98; j--)
{
printf("%d", j);
if (j != 98)
printf(", ");
}
}
printf("\n");
}
