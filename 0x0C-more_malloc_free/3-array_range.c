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
int x;
int *p;
if (min > max)
return (NULL);
p = malloc(sizeof(int) * (max - min));
if (p == NULL)
return (NULL);
for (x = min; x < (max - min); x++, min++)
p[x] = min;
return (p);
}
