#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%lu is positive\n", n);
else if (n == 0)
printf("%lu is zero\n", n);
else
printf("%lu is negative\n", n);
return (0);
}
