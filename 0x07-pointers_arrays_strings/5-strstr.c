#include "holberton.h"
#include <stdio.h>
/**
 *_strstr- locates a substring
 *@haystack: pointer
 *@needle: pointer
 *Return: return statement
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *x = haystack;
char *y = needle;
while (*haystack == *y)
{
haystack++;
y++;
}
if (!*y)
return (x);
}
return (NULL);
}
