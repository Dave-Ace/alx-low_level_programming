#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: laways 0 (Success)
 */
int main(void)
{
int f;
int s;
int t;
int c = -1;
int ct = -1;
for (f = 48; f < 56; f++)
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
putchar(ct);
}
}
}
putchar(10);
return (0);
}
