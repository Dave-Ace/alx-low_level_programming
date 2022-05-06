#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that creates an array
 * @str: string
 * Return: Char
 */
char *_strdup(char *str)
{
long unsigned int i;
char *ar;
ar = malloc(sizeof(*str) * strlen(str));
if (ar == NULL)
return (NULL);
for (i = 0; i < strlen(str); i++)
{
ar[i] = str[i];
}
return (ar);
}
