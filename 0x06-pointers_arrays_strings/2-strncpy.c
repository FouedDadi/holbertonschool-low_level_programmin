#include "holberton.h"
/**
 *_strncpy- copy a string
 *@dest: first string
 *@src: second string
 *@n: max n of bytes
 *@x: loop
 *Return: return statement
 */
char *_strncpy(char *dest, char *src, int n)
{
size_t x;
for (x = 0; x < n && src[x] != '\0'; x++)
dest[x] = src[x];
for ( ; x < n; x++)
dest[x] = '\0';
return dest;
}
