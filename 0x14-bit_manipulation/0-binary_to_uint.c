#include "holberton.h"
/**
 *_strlen- lengh of string
 *@s: pointer s
 *Return: return l
 */
int _strlen(const char *s)
{
int l = 0;
while (*s++)
l++;
return (l);
}
/**
 *binary_to_uint- function that converts binary to unsigned int
 *@b: pointer to binary number
 *Return: return val or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int c = 1;
unsigned int val = 0;
int x;
if (b == NULL)
return (0);
for (x = _strlen(b) - 1; x >= 0; x--)
{
if (b[x] == '1')
val += c;
c *= 2;
if (b[x] != '0' && b[x] != '1')
return (0);
}
return (val);
}
