#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array
 * @size: size of array
 * @c: character to initialize array with
 * Return: Char
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar;
if (size == 0)
{
return (NULL);
}
else
{
ar = malloc(98);
if (ar == NULL)
return (NULL);
for (i = 0; i <= size; i++)
{
ar[i] = c;
}
}
return (ar);
}
