#include "main.h"
/**
 * jack_bauer - Time
 * Return: Void
 */
void jack_bauer(void)
{
int m = 0;
int h = 0;
while (h < 24)
{
while (m < 60)
{
if ((h < 10) || (m < 10))
{
_putchar('0');
_putchar(h + '0');
_putchar(':');
_putchar('0');
_putchar(m + '0');
_putchar('\n');
}
else
{
_putchar(h + '0');
_putchar(':');
_putchar(m + '0');
_putchar('\n');
}
m++;
}
h++;
}
return;
}
