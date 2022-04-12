#include <stdio.h>
#include <ctype.h>
/**
 * _islower - lower case
 * @c: argument
 * Return: Always 0(Success)
 */
int _islower(int c)
{
if (c > 97 && c < 123)
return (1);
else
return (0);
}
