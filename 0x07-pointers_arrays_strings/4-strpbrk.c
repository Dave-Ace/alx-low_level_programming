#include "main.h"
#include <string.h>
/**
 * *_strpbrk - searches a string for ny of a set of bytes
 * @s: occurence in string s
 * @accept: bytes in the string accept
 * return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
