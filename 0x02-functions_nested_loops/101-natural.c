#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
int sum = 0;
int i;
for (i = 3; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
sum = sum + i;
}
putchar('0' + sum);
putchar(10);
return (0);
}
