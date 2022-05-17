#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - functions that sum all arguments
 * @n: arg length
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int i;
int sum = 0;
int count = n;
int ite = 0;
va_start(ap, n);
if (n == 0)
{
return (0);
}
else
{
for (i = n; ite <= count;  i = va_arg(ap, int))
{
if (ite != 0)
{
sum += i;
printf("%d\n", i);
printf("Sum: %d\n", sum);
}
ite++;
}
va_end(ap);
return (sum);
}
}
