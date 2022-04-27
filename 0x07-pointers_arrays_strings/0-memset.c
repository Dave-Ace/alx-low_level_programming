#include "main.h"
#include <string.h>
/**
 * *_memset - function that fills bytes
 * @s: memory area
 * @b: byte
 * @n: n bytes
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
