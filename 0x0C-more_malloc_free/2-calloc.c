#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int x;
char *p
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
if (nmemb == NULL) || (size == NULL)
return (NULL);
x = 0;
while (x < (nmemb * size))
{
x++;
p[x] = '\0';
}
return (p);
}
