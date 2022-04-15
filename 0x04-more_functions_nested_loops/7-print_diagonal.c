#include "main.h"
/**
 * print_diagonal - print line
 * @n: parameter
 * Return : void
 */
void print_diagonal(int n)
{
int no = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (no <= n)
{
_putchar(47);
no++;
}
_putchar('\n');
}
}
