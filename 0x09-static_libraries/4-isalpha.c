#include "holberton.h"
/**
 *_isalpha - will print the alphabet in lowercase
 *@c: int
 *Return: return 1 if c is {a...Z} else return 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
