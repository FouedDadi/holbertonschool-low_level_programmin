#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums- sum diagonal of matrix
 *@a: pointer
 *@size: size of matrix
 */
void print_diagsums(int *a, int size)
{
int x, y, S;
S = 0;
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
if (x == y)
S = S + a[i];
}
}
printf("%d", S); 
}
