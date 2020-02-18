#include "holberton.h"
/**
 *_strcpy- copy a string
 *@dest: destination
 *@src: source
 */
char *_strcpy(char *dest, char *src)
{
char *x = dest;
while(*src != '\0')
{
*dest = *src;
dest++;
src++;
} 
*dest = '\0';
return x;
}
