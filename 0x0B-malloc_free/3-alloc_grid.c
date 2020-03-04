#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
***alloc_grid- pointer to 2 arry of integers
 *@width: integer
 *@height: integer
 *Return: return a pointer to 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
int **w, x;
if (width <= 0 || height <= 0)
return (NULL);
w = malloc(sizeof(int *) * height);
if (w == NULL)
return (NULL);
for (x = 0; x < width; x++)
{
w[x] = malloc(sizeof(int) * width);
if (w[x] == NULL)
{
for (; x >= 0; x--)
free(w[x]);
free(w);
return (NULL);
}
}
return (w);
}
