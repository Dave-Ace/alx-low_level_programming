#include "main.h"
/**
 * _sqrt_recursion - finds squareroot
 * @n: given number
 * Return: number or -1
 */
int _sqrt_recursion(int n)
{
if (i > n)
return (-1);
if (i * i == n)
return (i);
i++;
return (_sqrt_recursion(n));
}
