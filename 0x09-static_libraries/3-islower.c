#include "holberton.h"
/**
 *_islower - show if caracter is lowercase
 *@c: it's just an int plz stop
 *Return: 1 will return 1
 *
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
