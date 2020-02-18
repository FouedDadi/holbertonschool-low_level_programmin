#include "holberton.h"
#include <stdio.h>
/**
 *rev_string- reverse a string
 *@s: pointer
 */
void rev_string(char *s)
{
char tmp;
int x, l = 0;
while (s[l])
l++;
l--;
for (x = 0; x <= l / 2; x++)
{
tmp = s[l - x + '\0'];
s[l - x] = s[x];
s[x] = tmp;
}
}
