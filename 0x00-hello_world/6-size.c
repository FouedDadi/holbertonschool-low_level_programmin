#include<stdio.h>
/**
*main-printf print the message
*sizeof evaluates the size of a variable
*Return:0
*/
int main(void)
{printf("Size of int: %ld bytes\n", sizeof(int));
printf("Size of float: %ld bytes\n", sizeof(float));
printf("Size of double: %ld bytes\n", sizeof(double));
printf("Size of char: %ld byte\n", sizeof(char));
return (0);
}
