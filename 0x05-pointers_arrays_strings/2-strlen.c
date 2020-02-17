#include "holberton.h"
/**
 *_strlen- lengh of string
 *@s: pointer s
 *@l: integer l
 *Return: return l 
 */
int _strlen(char *s)
{
int l = 0;
while (*s++)
l++;
return l;
}
