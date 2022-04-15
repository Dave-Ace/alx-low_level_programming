#include "main.h"
/**
 * print_line - print line
 * @n: parameter
 * Return: void
 */
void print_line(int n)
{
int no = 1;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (no <= n)
{
_putchar('_');
no++;
}
_putchar('\n');
}
}
