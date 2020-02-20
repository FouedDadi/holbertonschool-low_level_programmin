#include "holberton.h"
/**
 *_strcat- concatenate two strings
 *@dest: first string
 *@src: second string
 *Return: return the string in dest
 */
char *_strcat(char *dest, char *src)
{
int x = 0, y = 0;
while (dest[x] != '\0')
x++;
while (src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
return (dest);
}
