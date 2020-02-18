#include "holberton.h"
#include <stdio.h>
/**
 *print_array- print an array n times
 *@a: pointer
 *@n: number of prints
 */
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
if (x < n - 1)
printf("%d, ", a[x]);
else if (x >= n - 1)
printf("%d", a[x]);
}
printf("\n");
}
