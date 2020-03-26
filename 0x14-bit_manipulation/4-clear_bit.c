#include "holberton.h"
/**
 *clear_bit- function that set the value of bit to 0
 *@n: number
 *@index: index
 *Return: return 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x;
if (index > (sizeof(unsigned long int) * 8))
return (-1);
x = ~(1 << index);
n &= x;
return (1);
}
