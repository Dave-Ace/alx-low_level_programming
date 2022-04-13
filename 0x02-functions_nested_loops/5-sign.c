#include <stdio.h>
/**
 * print_sign- print signs
 * @n: parameter
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
int r;
if (n > 0)
{
_putchar('+');
r = 1;
}
else if (n == 0)
{
_putchar('0');
r = 0;
}
else
{
_putchar('-');
r = -1;
}
return (r);
}
