#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **_calloc- allocate memory for an array
 *@nmemb: number of elements
 *@size: size of each element
 *Return: return NULL in two cases and return p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int x;
char *p;
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
if (nmemb == 0 || size == 0)
return (NULL);
for (x = 0; x < (nmemb * size); x++)
p[x] = '\0';
return (p);
}
