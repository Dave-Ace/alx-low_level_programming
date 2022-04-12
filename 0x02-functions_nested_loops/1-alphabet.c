#include  <stdio.h>
/**
 * print_alphabet - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int i;
for (i = 97; i < 113; i++)
{
putchar(i);
putchar(10);
}
return (0);
}
