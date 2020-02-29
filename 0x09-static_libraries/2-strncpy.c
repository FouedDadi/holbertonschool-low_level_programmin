#include "holberton.h"
/**
 *_strncpy- copy a string
 *@dest: first string
 *@src: second string
 *@n: max n of bytes
 *Return: return statement
 */
char *_strncpy(char *dest, char *src, int n)
{
int x;
for (x = 0; src[x] != '\0'; x++)
if (x < n)
dest[x] = src[x];
for ( ; x < n; x++)
dest[x] = '\0';
return (dest);
}
