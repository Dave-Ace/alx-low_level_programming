#include "main.h"
#include <string.h>
/**
 * _strspn - gets length of a substring
 * @s: number of bytes in s
 * @accept: from
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
