#include "_putchar.c"
/**
 *main - fucntion main will print the alphabet in lowercase
 *Return: 0
 */
int main (void)
{
char x;
x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
return (0);
}
