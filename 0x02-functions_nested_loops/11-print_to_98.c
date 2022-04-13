#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n: parameter
 * Return: Void
 */
void print_to_98(int n);
{
if (n < 98)
{
while (n <= 98)
{
printf("%i, ", n);
n++;
}
}
else
{
while (n >= 98)
{
printf("%i, ", n);
n--;
}
}
}
