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
++c
for (s = 49 + c; s < 58; s++)
{
putchar(f);
putchar(s);
putchar(',');
putchar(' ');
}
}
return (0);
}
