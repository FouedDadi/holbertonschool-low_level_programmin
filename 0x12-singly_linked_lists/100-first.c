#include <stdio.h>

void myfunction(void) __attribute__ ((constructor));
/**
 *myfunction- function that will be executed before main
 */
void myfunction(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
