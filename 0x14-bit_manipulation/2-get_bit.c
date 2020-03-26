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
 if (index > (sizeof(unsigned long int) * 8))
return (-1);
x = (n >> index) & 1;
return (x);
}
