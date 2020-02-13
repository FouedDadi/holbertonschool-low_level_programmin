#include "holberton.h"
/**
 *print_triangle- will print a triangle
 *@size: size of the triangle
 */
void print_triangle(int size)
{
int x, y, z;
for (x = 0; x < size; x++)
{
for (y = x + 1; y < size; y++)
{
_putchar(' ');
}
for (z = 0; z <= x; z++)
_putchar('#');
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
