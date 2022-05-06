#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that creates an array
 * @s1: string
 * @s2: string
 * Return: Char
 */
char *str_concat(char *s1, char *s2)
{
unsgined int long i = 0;
char *ar;
ar = malloc(sizeof(*s1) * (strlen(s1) + strlen(s2));
if (ar == NULL)
return (NULL);
while (i < strlen(s1))
{
ar[i] = s1[i];
i++;
}
while (i < strlen(s2))
{
ar[i] = s2[i];
i++;
}
return (ar);
}
