#include "main.h"
#include <string.h>
/**
 * *_memcpy - copies memory area to another memory area
 * @dest:destination
 * @src: Sources
 * @n: number of bytes
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
