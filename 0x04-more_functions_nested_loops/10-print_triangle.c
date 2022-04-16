#include "main.h"
/**
 * print_triangle - PRint triangk;lel of given size
 * @size - parameter
 * Return : Void
 */
void print_triangle(int size)
{
int space = size - 1;
int start;
int ash = 1;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (start = 1; start < size; start++)
{
while (space > 0)
{
_putchar(' ');
space--;
}
while (ash <= start)
{
_putchar('#');
ash++;
space = (size - 1) - (ash - 1);
}
_putchar('\n');
ash = 1;
}
}
}
