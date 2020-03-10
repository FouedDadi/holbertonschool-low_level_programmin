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
int x, y, w;
dog_t *d;
 
for (x = 0; name[x] != '\0'; x++)
;
for (y = 0; owner[y] != '\0'; y++)
;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
d->name = malloc(sizeof(char) * x + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->owner = malloc(sizeof(char) * y + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (w = 0; w <= x; w++)
d->name[w] = name[w];
for (w = 0; w <= y; w++)
d->owner[w] = owner[w];
d->age = age;
return (d);
}
