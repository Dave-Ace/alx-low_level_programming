#include "main.h"
/**
 * jack_bauer - Time
 * Return: Void
 */
void jack_bauer(void)
{
int m1;
int m2;
int h1;
int h2 = 0;
int a = 9;
while (h2 < 3)
{
if (h2 == 2)
{
a = 3;
}
h1 = 0;
while (h1 <= a)
{
m2 = 0;
while (m2 < 6)
{
m1 = 0;
while (m1 < 10)
{
_putchar('0' + h2);
_putchar('0' + h1);
_putchar(':');
_putchar('0' + m2);
_putchar('0' + m1);
_putchar('\n');
m1++;
}
m2++;
}
h1++;
}
h2++;
}
return;
}
