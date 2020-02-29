#include "holberton.h"
/**
 *_strncat- concatenate two strings
 *@dest: first string
 *@src: second string
 *@n: max n bytes from src
 *Return: return the string in dest
 */
char *_strncat(char *dest, char *src, int n)
{
int x = 0, y = 0;
while (dest[x] != '\0')
x++;
while ((src[y] != '\0') && (y < n))
{
dest[x] = src[y];
x++;
y++;
}
return (dest);
}
