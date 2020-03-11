#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator- function that executes a function
 *@array: array
 *@action: pointer to the function
 *@size: size of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;
if (array == NULL || action == NULL)
array = 0;
x = 0;
while (x < size)
{
action(array[x]);
x++;
}
}
