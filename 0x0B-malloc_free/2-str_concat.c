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
unsigned int long i = 0;
char *ar;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
ar = malloc(sizeof(*s1) * (strlen(s1) + strlen(s2)));
if (ar == NULL)
free(ar);
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
