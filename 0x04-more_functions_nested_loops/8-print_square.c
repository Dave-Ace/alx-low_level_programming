#include "main.h"
/**
 * print_square - to print square
 * @size: parameter
 * Return: void
 */
void print_square(int size)
{
int l = 0;
int b;
if (size <= 0)
{
_putchar('\n');
}
else
{
while (l < size)
{
b = 0;
while (b < size)
{
_putchar('#');
b++;
}
_putchar('\n');
l++;
}
_putchar('\n');
}
}
