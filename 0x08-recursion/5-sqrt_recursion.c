#include "main.h"
/**
 * square_root - finds quare root
 * @n: given number
 * @c: given number
 * Return: square root
 */
int square_root(int n, int c)
{
if (c == 1)
return (-1);
if (square_root(n, c - 1) * square_root(n, c - 1) == n)
{
return (c);
}
else
{
square_root(n, c - 1);
}
}
/**
 * _sqrt_recursion - finds squareroot
 * @n: given number
 * Return: number or -1
 */
int _sqrt_recursion(int n)
{
int *c;
if (n == 0)
return (0);
if (n == 1)
return (1);
c = n;
return (square_root(n, c));
}
