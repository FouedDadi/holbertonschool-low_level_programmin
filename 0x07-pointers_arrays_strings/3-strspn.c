#include "holberton.h"
/**
 *_strspn- gets length of substring
 *@s: pointer
 *@accept: pointer
 *Return: return statement
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int x, y;
for (x = 0; s[x]; x++)
{
for (y = 0; accept[y]; y++)
{
if (s[x] == accept[y])
break;
}
if (s[x] != accept[y])
break;
}
return (x);
}
