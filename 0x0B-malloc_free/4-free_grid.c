#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid- free a 2 dimensional grid
 *@grid: double pointer
 *@height: height
 *
 */
void free_grid(int **grid, int height)
{
int x;
for (x = 0; x < height; x++)
{
free(grid[x]);
free(grid);
}
}
