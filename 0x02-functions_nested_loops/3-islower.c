#include "holberton.h"
/**
 *_islower - show if caracter is lowercase
 *
 */
int _islower(int c);
{
int c;
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
