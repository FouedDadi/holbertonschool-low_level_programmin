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
char *p;
p = dest;
while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
dest = '\0';
return (p);
}
