#include "main.h"
/**
 * _pow_recursion - raise a value to the power of another value
 * @x: value to be raised
 * @y: ower
 * Return: value raised
 */
int _pow_recursion(int x, int y)
{
if (y = 0)
return (1);
if (y < 0)
return (-1);
return (x * _pow_recursion(x, y - 1));
}
