#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int c;
int d;
for (c = 97; c < 123; c++)
if (c != 113 || c != 101)
putchar(c);
putchar(10);
return (0);
}
