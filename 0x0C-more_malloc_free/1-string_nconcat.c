#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - function that concatenantes two strings
 * @s1: first string
 * @s2: Second String
 * @n: number of bytes of s2 to concatenate
 * Return: pointer that pointes to space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n){
	char *newstr;
	unsigned int i = 0, j = 0, m, p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = strlength(s1);
	p = strlength(s2);
	newstr = malloc(sizeof(char) * (m * p) + 1);
	if (newstr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		newstr[j] = s1[i];
		i++;
		j++;
	}
	if (n >= p)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			newstr[j] = s2[i];
			i++;
			j++;
		}
	}
	else
	{
		i = 0;
		while (i <= n)
		{
			newstr[j] = s2[i];
			i++;
			j++;
		}
	}
	newstr[j] = '\0';
	return (newstr);
}
