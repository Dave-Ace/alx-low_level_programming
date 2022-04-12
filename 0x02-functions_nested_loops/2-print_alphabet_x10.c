#include <stdio.h>
/**
* print_alphabet_x10 - function prototype
*
* Return: ALways 0 (Success)
*/
void print_alphabet_x10(void)
{
int i = 1;
while (i < 11)
{
print_alphabet();
i++;
}
putchar(10);
return (0);
}
