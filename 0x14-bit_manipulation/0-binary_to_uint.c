#include "holberton.h"
/**
 *binary_to_uint- function that converts binary to unsigned int
 *@b: pointer to binary number
 *Return: return en or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int en = 0;
int x = 0;
if (b == NULL)
return (0);
if (b[x] != '0' && b[x] != '1')
return (0);
while (b[x] == '0' || b[x] == '1')
{
en <<= 1;
en += b[x] - '0';
x++;
}
return (en);
}
