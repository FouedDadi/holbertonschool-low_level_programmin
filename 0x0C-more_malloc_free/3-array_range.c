#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **array_range- creates an array of integers
 *@min: minimum integr
 *@max: maximum integer
 *Return: return NULL or p
 */
int *array_range(int min, int max)
{
int x, y;
int *p;
y = max - min + 1;
if (min > max)
return (NULL);
p = malloc(sizeof(int) * y);
if (p == NULL)
return (NULL);
for (x = 0; x < y; x++)
{
p[x] = min;
min++;
}
return (p);
}
