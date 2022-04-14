#include "main.h"
/**
 * more_numbers - Print 10 times the numbers
 * Return: Void
 */
void more_numbers(void)
{
int a = 0;
int n;
while (a < 11)
{
for (n = 0; n < 15; n++)
_putchar('0' + n);
}
_putchar('\n');
}
