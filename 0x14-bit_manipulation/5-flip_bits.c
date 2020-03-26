#include "holberton.h"
/**
 *countbits- function that count bits
 *@n: numbers
 *Return: return c
 */
int countbits(unsigned long int n)
{
int c = 0;
while (n)
{
c += n & 1;
n >>= 1;
}
return (c);
}

/**
 *flip_bits- function that returns  the number of bits to flip
 *@n: number 1
 *@m: number 2
 *Return: return number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{  
return (countbits(n ^ m));
}
