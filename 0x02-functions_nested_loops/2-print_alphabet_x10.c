#include <stdio.h>
/**
* print_alphabet_x10 - function prototype
*
* Return: ALways 0 (Success)
*/
void print_alphabet_x10(void)
{
int i = 1;
int c;
while (i < 11)
{
for (c = 97; c < 123; c++)
{
putchar(c);
}
putchar(10);
i++;
}
return;
}
