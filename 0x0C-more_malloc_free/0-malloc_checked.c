#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **malloc_checked- allocate memory for b and check if the function fails
 *@b: unsigned integer
 *Return: return the pointer x
 */
void *malloc_checked(unsigned int b)
{
int *x;
x = malloc(b);
if (x == NULL)
exit(98);
return (x);
}
