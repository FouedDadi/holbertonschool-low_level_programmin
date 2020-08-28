#include "search_algos.h"
/**
 * print_array - function that prints arrays
 * @array: pointer to first element of array of integers
 * @low: lowest value of the array
 * @high: highest value of the array
 */
void print_array(int low, int high, int *array)
{
int x;
printf("Searching in array: ");
for (x = low; x < high; x++)
{
printf("%d, ", array[x]);
}
printf("%d\n", array[x]);
}

/**
 * binary_search - function that ssearch for value in array
 * @array: pointer to first element of array of integers
 * @size: size of array
 * @value: value to be found or to be searched for
 * Return: return - 1 or the index of value found
 */
int binary_search(int *array, size_t size, int value)
{
int low = 0, high = (size - 1), mid;
while (low <= high)
{
print_array(low, high, array);
mid = (low + high) / 2;
if (value < array[mid])
{
high = mid - 1;
}
if (value > array[mid])
{
low = mid + 1;
}
if (value == array[mid])
{
return (value);
}
}
return (-1);
}

