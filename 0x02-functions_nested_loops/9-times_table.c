#include "main.h"
/**
 * times_table - TImes table 1 to 9
 * Return: Void
 */
void times_table(void)
{
int t = 0;
int tt;
int nxt;
while (t < 10)
{
tt = 0;
while (tt < 10)
{
int times = t * tt;
if (times > 9)
{
_putchar('0' + times / 10);
_putchar('0' + times % 10);
}
else
{
_putchar('0' + times);
}
if (tt != 9)
{
_putchar(',');
_putchar(' ');
nxt = tt + 1;
if ((times < 9) && (nxt * t < 9))
_putchar(' ');
}
else
{
_putchar('\n');
}
tt++;
}
t++;
}
}
