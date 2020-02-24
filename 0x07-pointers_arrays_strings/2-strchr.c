#include "holberton.h"
#include <stdio.h>
/**
 *_strchr- find a characater in a string
 *@s: pointer
 *@c: character
 *Return: return null or pointer s
 */
char *_strchr(char *s, char c)
{
for (;; s++)
{
if (*s == c)
return (s);
if (!*s)
return (NULL);
}
return (NULL);
}
