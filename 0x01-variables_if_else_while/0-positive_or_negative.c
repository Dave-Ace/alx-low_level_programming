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
printf(n, " is positive");
else if (n == 0)
printf(n, "is zero");
else
printf(n, "is negative");
return (0);
}
