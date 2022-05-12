#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a variable type dog
 * @name: name of dog
 * @d: structure dog
 * @age: dog age
 * @owner: Owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
