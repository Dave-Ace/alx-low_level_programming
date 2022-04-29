#include "main.h"
/**
 * factorial - find factorial of a given number
 * @n: given number
 * Return: factoril
 */
int factorial(int n)
{
if (n == 1)
return (1);
return (n * factorial(n - 1));
}
