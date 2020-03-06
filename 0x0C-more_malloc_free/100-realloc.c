#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **_realloc- reallocates a memory block
 *@ptr: pointer of type void
 *@old_size: old size of the allocated space for ptr
 *@new_size: new size of the new allocated memory
 *Return: return NULL or void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
p = ptr;
if (new_size > old_size || ptr == NULL)
{
p = ptr;
free(ptr);
p = malloc(new_size);
return (p);
}
else if (new_size == old_size)
return (ptr);
else if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}
return (p);
free(ptr);
}
