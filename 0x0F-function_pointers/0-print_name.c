#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_name- function that prints a name
 *@name: pointer to name
 *@f: pointer to function that will take the name
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL && f == NULL)
return;
else
f(name);
}
