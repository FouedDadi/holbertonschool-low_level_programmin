#include "holberton.h"
/**
 *_strlen_recursion- return the length of a string
 *@s: pointer
 */
int _strlen_recursion(char *s)
{
int l = 0;
if (s[l] != '\0')
{
l++;
return (l + _strlen_recursion(s + 1));
}
else
return (0);
}
