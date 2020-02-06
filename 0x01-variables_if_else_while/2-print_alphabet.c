#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - fucntion main will print the alphabet in lowercase
 *Return: 0
 */
int main(void)
{
for (int x = 'A'; x <= 'z'; x++)
{
x = tolower(x);
putchar(x);
}
return (0);
}
