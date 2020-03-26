#include "holberton.h"
/**
 *get_bit- function that return value of a bit
 *@n: number
 *@index: index
 *Return: return x
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int x;
x = (n >> index) & 1;
return (x);
if (x != 0)
return (1);
if (x == 0)
return (0);
}
