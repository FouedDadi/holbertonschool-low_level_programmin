#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *get_op_func- function that selects the correct function
 *@s: pointer to operator
 *Return: return
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
while (i < 5)
{
  
}
if (*s != (ops + i)
return (NULL);
}
