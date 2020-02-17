#include "holberton.h"
/**
 *swap_int- this will swap the value of and b
 *@a: integer a
 *@b: integer b
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
