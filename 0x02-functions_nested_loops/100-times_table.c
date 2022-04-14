#include "main.h"
/**
 * print_times_table - TImes table 1 to n
 * @n: Parameter
 * Return: Void
 */
void print_times_table(int n)
{
int t = 0, tt;
if ((n < 15) || (n > 0))
{
while (t < n)
{
tt = 0;
while (tt < n)
{
int times = t * tt;
if (times == 0)
_putchar('0' + times);
else if (times > 0)
{
_putchar(',');
_putchar(' ');
if (times < 10)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + times);
}
else if (times < 100)
{
_putchar(' ');
_putchar('0' + times / 10);
_putchar('0' + times % 10);
}
else
{
_putchar('0' + (times / 10) / 10);
_putchar('0' + (times / 10) % 10);
_putchar('0' + times % 10);
if (tt == n)
_putchar('\n');
}
}
tt++;
}
t++;
}
}
}
