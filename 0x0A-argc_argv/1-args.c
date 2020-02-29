#include "holberton.h"
#include <stdio.h>
#define UNUSED(argv) (void)(argv)
/**
 *main- print number of arguments
 *@argc: number of arguments
 *@argv: each argument
 *Return: return 0
 */
int main(int argc, char *argv[])
{
int S;
UNUSED(argv);
S = argc - 1;
printf("%d\n", S);
return (0); 
}
