#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *new_dog- create a new dogo
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: return the pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *d;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
