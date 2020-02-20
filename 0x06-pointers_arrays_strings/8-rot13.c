#include "holberton.h"
/**
 *rot13- encode using rot13
 *@s: pointer
 *Return: return s
 */
char *rot13(char *s)
{
char one[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char two[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, x, y;
for (i = 0; s[i] != '\0'; i++)
{
y = 0;
for (x = 0; one[x] != '\0'; x++)
{
if (s[i] == one[x] && y == 0)
{
y = x;
s[i] = two[y];
 y = 1;
}
}
y = 0;
}
return (s);
}
