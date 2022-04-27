#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
int i, j;
int sumf = 0;
int sums = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j == i)
sumf = sumf + a[i][j];
}
}
for (i = size - 1; i >= 0; i--)
{
for (j = 0; j >= 0; j--)
{
sums = sums + a[i][j];
break;
}
}
printf("%i, %i", sumf, sums);
}
