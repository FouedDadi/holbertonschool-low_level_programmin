#include "holberton.h"
#include <stdio.h>
/**
 *main- print every argument
 *@argc: number of arguments
 *@argv: each argument
 *Return: return 0
 */
int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
printf("%s\n", argv[x]);
return (0);
}
