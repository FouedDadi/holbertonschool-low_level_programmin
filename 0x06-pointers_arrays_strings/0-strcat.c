#include "holberton.h"
/**
 *_strcat- concatenate two strings
 *@dest: first string
 *@src: second string
 *Return: return the string in dest
 */
char *_strcat(char *dest, char *src)
{
int x, y;
for (x = 0; dest[i] != '\0'; i++)
for (y = 0; src[y] != '\0'; j++)
dest[x + y] = src[y];
dest[x + y] = '\0';
return (*dest);
}
