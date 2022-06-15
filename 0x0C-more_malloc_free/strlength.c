#include "main.h"
/**
 * strlength = function that finds the length of a string
 * @string: given string
 * Return: Length of string
 */
int strlength(char *string)
{
	int i = 0;

	while (*(string + i) != '\0')
		i++;
	return (i);
}
