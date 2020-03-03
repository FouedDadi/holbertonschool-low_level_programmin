#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array- create an array of chars
 *@size: unsigned integer
 *@c: character
 *Return: return NULL or pointer to character
 */
char *create_array(unsigned int size, char c)
{
unsigned int x;
char *y;
if (size == 0)
return (NULL);
y = malloc(sizeof(char) * size);
if (y == NULL)
return (NULL);
for (x = 0; x < size; x++)
y[x] = c;
return (y);
free(y);
}
