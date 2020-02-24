#include "holberton.h"
#include <stdio.h>
/**
 *_strpbrk- find occurence
 *@s: pointer
 *@accept: pointer
 *Return: return null
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
const char *a = accept;
while (*a != '\0')
if (*a++ == *s)
return (char *) s;
++s;
}
return NULL;
}
