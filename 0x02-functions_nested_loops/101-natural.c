#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
int sum = 0;
int n;
for (n = 3; n < 1024; n++)
{
if ((n % 3 == 0) || (n % 5 == 0))
sum = sum + n;
}
printf("%i", sum);
putchar(10);
return (0);
}
