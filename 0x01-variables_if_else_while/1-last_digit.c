#include <stdlib.h>
#include <time.h>
#include <stdo.h>
/**
 *main - will give a random int to the n variable and compare it to 0
 *Return: 0
 */
int main(void)
{
int n, x, lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = x % 10;
if (lastdigit > 5)
printf("last digit of %d is %d and is greater than 5\n", n, x);
else if
(lastdigit != 0)&&(lastdigit < 6)
printf("last digit of %d is %d and is less tha 6 and not 0\n", n, x);
else
printf("last digit of %d is %d and is 0\n", n, x);
return (0);
}
