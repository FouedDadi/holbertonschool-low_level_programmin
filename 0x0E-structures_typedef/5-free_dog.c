#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_dog- dogo freed
 *@d: pointer to dogo
 */
void free_dog(dog_t *d);
{
if (d == NULL)
{
d->name = "";
d->owner = "";
}
else
{
free(d->name):
free(d->owner);
free(d);
}
}
