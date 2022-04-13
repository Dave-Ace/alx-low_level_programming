#include "main.h"
/**
 * jack_bauer - Time
 * Return: Void
 */
void jack_bauer(void)
{
int m1;
int m2;
int h;
while (h < 25)
{
_putchar(h + '0');
_putchar(':');
for (m2 = 48; m2 < 54; m2++)
{
_putchar(m2 + '0');
for (m1 = 48; m1 < 58; m1++)
{
_putcharr(m1 + '0');
_putchar('\n');
}
}
h++;
}
return;
}
