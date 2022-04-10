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
for (f = 49; f < 58; f++)
{
for (s = 49 + c; s < 58; s++)
{
if (s == 57)
++c;
else
{
putchar(f);
putchar(s);
putchar(44);
putchar(' ');
}
}
}
return (0);
}
