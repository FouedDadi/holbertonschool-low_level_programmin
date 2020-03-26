#include "holberton.h"
/**
 *
 *
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x;
x = (1 << index)
*n |= x;
return (1);
if (index > (sizeof(unsigned long int) *8))
return (-1);
}
