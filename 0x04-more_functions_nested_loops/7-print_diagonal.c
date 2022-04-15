#include "main.h"
/**
 * print_diagonal - print line
 * @n: parameter
 * Return : void
 */
void print_diagonal(int n)
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
int space = 1;
while (space < no)
{
_putchar(' ');
space++;
}
_putchar('0' + 47);
_putchar('\n');
no++;
}
_putchar('\n');
}
}
