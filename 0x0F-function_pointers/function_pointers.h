#ifndef _function_pointers_H_
#define _function_pointers_H_
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int main(int argc, char *argv[]);
#endif
