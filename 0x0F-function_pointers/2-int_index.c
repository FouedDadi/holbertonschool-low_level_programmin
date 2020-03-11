#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *int_index- function that searches for integer
 *@array: array of integers
 *@cmp: pointer to this function
 *@size: size of teh array
 *Return: return -1 or x
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (size <= 0)
return (-1);
if (array != NULL && cmp != NULL)
{
x = 0;
while (x < size)
{
x++;
if (cmp(array[x]) != 0)
return (x);
}
}
return (-1);
}
