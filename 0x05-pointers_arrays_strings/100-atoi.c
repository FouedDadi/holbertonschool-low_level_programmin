#include "holberton.h"
/**
 *_atoi- switch string to integer
 *@s: pointer
 *Return: return x * y
 */
int _atoi(char *s)
{
int i = 0;
int result =0;
int sign = 1;
while (s[i] != '\0')
{
if (s[i] == '-')
sign = sign * -1;
else if ((s[i] >= '0') && (s[i] <= '9'))
{
result = (result * 10) + ((s[i]) -'0');
}
i++;
}
return (result * sign);
}
