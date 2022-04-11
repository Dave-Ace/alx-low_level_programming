#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: laways 0 (Success)
 */
int main(void)
{
int f = 48;
int s;
int t;
int c = -1;
int ct = -1;
while (f < 56)
{
++c;
for (s = 49 + c; s < 57; s++)
{
++ct;
for (t = 50 + ct; t < 58; t++)
{
if ((f != 55) && (t != 50))
{
putchar(',');
putchar(' ');
}
putchar(f);
putchar(s);
putchar(t);
}
}
f++;
}
putchar(10);
return (0);
}
