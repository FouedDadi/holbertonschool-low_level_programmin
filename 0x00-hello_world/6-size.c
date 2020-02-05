#include<stdio.h>
/**
*main-printf print the message
*sizeof evaluates the size of a variable
*Return:0
*/
int main(void)
{int intType;
float floatType;
double doubleType;
char charType;
printf("Size of int: %ld bytes\n", sizeof(intType));
printf("Size of float: %ld bytes\n", sizeof(floatType));
printf("Size of double: %ld bytes\n", sizeof(doubleType));
printf("Size of char: %ld byte\n", sizeof(charType));
return (0);
}
