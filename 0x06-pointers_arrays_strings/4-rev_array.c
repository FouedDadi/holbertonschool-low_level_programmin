#include "holberton.h"
/**
 *reverse_array- reverse integers
 *@a: pointer
 *@n: number of elements
 */
void reverse_array(int *a, int n)
{
int tmp;
int x;
for (x = 0; x < (n / 2); x++)
{
tmp = a[n - 1 - x];
a[n - 1 - x] = a[x];
a[x] = tmp;
}
}
