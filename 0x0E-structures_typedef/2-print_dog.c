#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: struct dog
 */
voit print_dog(struct dog *d)
{
if ((*d))
{
if (d->name)
printf("Name: %s\n", (*d).name);
else
print("Name: (nil)");
if (d->age)
printf("Age: %d\n", (*d).age);
else
printf("Age: (nil)");
if (d->owner)
printf("Owner: %s\n", (*d).owner);
else
printf("Owner: (nil)");
}
else
{
print(NULL);
}
}
