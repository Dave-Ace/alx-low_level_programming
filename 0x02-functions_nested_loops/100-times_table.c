#include "main.h"
/**
 * print_times_table - TImes table 1 to n
 * @n: Parameter
 * Return: Void
 */
void print_times_table(int n)
{
int t = 0;
int tt;
int f;
int s;
int t;
int fs;
if ((n < 15) || (n > 0))
{
while (t < n)
{
tt = 0;
while (tt < n)
{
int times = t * tt;
if (times == 0)
{
_putchar('0' + times);
}
else if (times > 99)
{
fs = times / 10;
f = fs / 10;
s = s % 10;
t = times % 10;
_putchar(',');
_putchar(' ');
_putchar('0' + f);
_puthar('0' + s);
_putchar('0' + t);
if (tt == n)
{
_putchar('\n');
}
}
else if (times > 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + times / 10);
_putchar('0' + times % 10);
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar('0' + times);
}
tt++;
}
t++;
}
}
}
