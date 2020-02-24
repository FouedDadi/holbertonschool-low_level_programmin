#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums- sum diagonal of matrix
 *@a: pointer
 *@size: size of matrix
 */
void print_diagsums(int *a, int size)
{
int x, S1 = 0, S2 = 0;
for (x = 0; x < size; x++)
{
S1 += *(a + x * size + x);
S2 += *(a + (x * size) + (size - 1 - x));
}
printf("%d, %d\n", S1, S2);
}
