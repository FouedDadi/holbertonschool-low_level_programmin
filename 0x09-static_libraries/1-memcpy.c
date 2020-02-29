#include "holberton.h"
/**
 *_memcpy- copy from a n memory to another n memory
 *@dest: pointer destination of values
 *@src: pointer source values
 *@n: number of bytes
 *Return: return pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
for (x = 0; x < n; x++)
{
dest[x] = src[x];
}
return (dest);
}
