#include "main.h"
/**
 * print_most_numbers - PRint number except 2 and 4
 * Reutn: void
 */
void print_most_numbers(void)
{
int a= 0;
while (a < 10)
{
if (a ==2 || a == 4)
a++;
_putchar('0' + a);
a++;
}
_putchar('\n');
}
