#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of Dog
 * @age: Dog's age
 * @owner: Dog Owner
 * Return: Struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t newdog;
newdog->name = name;
newdog->age = age;
newdog->owner = owner;
return (newdog);
}
