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
int x, y;
char new_name, new_owner;
for (x = 0; name[x] != '\0'; x++)
;
for (y = 0; owner[y] != '\0'; y++)
;
struct dog *d;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
new_name = malloc(sizeof(char) * x + 1);
if (new_name == NULL)
free(d);
return (NULL);
new_owner = malloc(sizeof(char) * y + 1);
if (new_owner == NULL)
free(new_name);
free(d);
return (NULL)
for (w = 0;name[w] != '\0'; w++)
{
new_name[w] = name[w];
}
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
