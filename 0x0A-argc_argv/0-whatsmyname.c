#include "holberton.h"
#include <stdio.h>
/**
 *main- print the name of the program
 *@argc: arguments length
 *@argv: each argument content
 */
int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
printf("%s ", argv[x]);
printf("\n");
return (0);
}
