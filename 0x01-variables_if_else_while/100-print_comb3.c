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
int c = -1;
for (f = 48; f < 58; f++)
{
++c;
for (s = 49 + c; s < 58; s++)
{
if (( f != 57) && (s != 49))
{
putchar(',');
putchar(' ');
}
else
{
putchar(' ');
}
putchar(f);
putchar(s);
}
}
return (0);
}
