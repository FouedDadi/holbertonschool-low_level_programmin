#include <unistd.h>
int main(void)
{
char c[]="Holberton";
int x;
int n=sizeof(c);
for (x = 0; x <= n-1; x++)
{
putchar(c[x]);

}
putchar('\n');
return 0;
}
