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
int c = 0;
for (f = 48; f < 58; f++)
{
for (s = 49 + c; s < 58; s++)
{
if (s == 57)
{
++c;
putchar(f);
putchar(s + ", ");
}
else
{
putchar(f);
putchar(s);
putchar(' ');
}
}
}
return (0);
}
