#include "holberton.h"
/**
 *_strcmp- compare two integers
 *@s1: pointer 1
 *@s2: pointer 2
 *Return: return statement
 */
int _strcmp(char *s1, char *s2)
{
while( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2 )
{
s1++;
s2++;
} 
if(*s1 == *s2)
{
return 0;
} 
else
{
return *s1 - *s2;
}
}
