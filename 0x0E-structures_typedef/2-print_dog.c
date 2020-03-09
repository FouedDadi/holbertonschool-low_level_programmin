#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dog- print the struct dog
 *@d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name= "(nil)";
else
printf("Name: %s\n", d->name);
if (d->age == 0)
d->age = 0;
else
printf("Age: %f\n", d->age);
if (d->owner == NULL)
d->owner = "(nil)";
else
printf("Owner: %s\n", d->owner);
}
