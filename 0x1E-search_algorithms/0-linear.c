#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - function that ssearch for value in array
 * @array: pointer to first element of array of integers
 * @size: size of array
 * @value: value to be found or to be searched for
 * Return: return - 1 or the index of value found
 */
int linear_search(int *array, size_t size, int value)
{
unsigned int x;
if (array == NULL)
return (-1);
for (x = 0; x < size; x++)
{
printf("Value checked array[%d] = [%d]\n", x, array[x]);
if (array[x] == value)
return (x);
}
return (-1);
}
