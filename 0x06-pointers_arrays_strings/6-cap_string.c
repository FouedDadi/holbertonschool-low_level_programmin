#include "holberton.h"
/**
 *cap_string- uppercase for first letter
 *@x: pointer
 *Return: return x
 */
char *cap_string(char *x)
{
int i;
for (i = 0; x[i] != '\0'; i++)
{
if ((x[i] == ',') || (x[i] == ';') || (x[i] == '.') || (x[i] == '!')
|| (x[i] == '?') || (x[i] == '"') || (x[i] == '(') || (x[i] == ')')
|| (x[i] == '{') || (x[i] == '}') || (x[i] == ' ') || (x[i] == '\t')
|| (x[i] == '\n'))
{
if ((x[i + 1] >= 'a') && (x[i + 1] <= 'z'))
x[i + 1] = x[i + 1] - 32;
else if ((x[i + 1] >= 'A') && (x[i + 1] >= 'Z'))
x[i + 1] = x[i + 1];
}
}
return (x);
}
