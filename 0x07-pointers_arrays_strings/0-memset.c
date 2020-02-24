#include "holberton.h"
/**
 *_memset- fills the n bytes with constant b
 *@n: number of bytes pointed by *s
 *@b: value of memory to be filled
 *@s: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
int x;
for(x = 0; x < n; x++)
{
s = b;
s++;
n--;
}
return (s);
}
