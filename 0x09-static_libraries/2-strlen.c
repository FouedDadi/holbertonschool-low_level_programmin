#include "holberton.h"
/**
 *_strlen- lengh of string
 *@s: pointer s
 *Return: return l
 */
int _strlen(char *s)
{
int l = 0;
while (*s++)
l++;
return (l);
}
