#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memmory
 * @b: variable
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
