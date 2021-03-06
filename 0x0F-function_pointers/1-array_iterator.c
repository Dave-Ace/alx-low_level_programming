#include <stdio.h>
/**
 * array_iterator - pointer to function that executes a function
 * @array: array
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array && size && action)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
