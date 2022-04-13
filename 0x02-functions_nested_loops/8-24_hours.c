#include "main.h"
/**
 * jack_bauer - Time
 * Return: Void
 */
void jack_bauer(void)
{
int m1 = 0;
int m2 = 0;
int h = 0;
while (h < 24)
{
if (h < 10)
{
_putchar('0');
_putchar(h + '0');
_putchar(':');
}
else
{
_putchar(h + '0');
_putchar(':');
}
while (m2 < 5)
{
_putchar(m2 + '0');
while (m1 < 10)
{
_putchar(m1 + '0');
_putchar('\n');
m1++;
}
m2++;
}
h++;
}
return;
}
