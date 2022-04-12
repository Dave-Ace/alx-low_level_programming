#include <stdio.h>
#include <ctype.h>
/**
 * _islower - lower case
 * @c: argument
 * Return: Always 0(Success)
 */
int _islower(int c)
{
int r;
if (islower(c))
return (1);
else
return (0);
}
