#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a variable type dog
 * @d: structure dog
 * @age: dog age
 * @owner: Owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = "poppy";
(*d).age = 3.5;
(*d).owner = "Bob";
}
