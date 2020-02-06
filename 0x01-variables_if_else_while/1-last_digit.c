#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - will give a random int to the n variable and compare it to 0
 *Return: 0
 */
int main(void)
{
int n, x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (x > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, x);
}
else if
(x != 0 && x < 6)
{
printf("last digit of %d is %d and is less tha 6 and not 0\n", n, x);
}
else
{
printf("last digit of %d is %d and is 0\n", n, x);
}
return (0);
}
