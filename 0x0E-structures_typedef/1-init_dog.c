#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *init_dog- initialise a variable of type struct dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *@d: pointer to struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
