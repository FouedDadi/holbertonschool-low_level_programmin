#include <stdio.h>
/**
 * int x will receive A;
 * fucntion main will print the alphabet in lowercase;
 * return (0);
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
