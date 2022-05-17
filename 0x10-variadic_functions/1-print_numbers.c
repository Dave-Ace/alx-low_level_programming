#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - functions that prints numbers
 * @separator: number separators
 * @n: number lengths
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list no;
int i;
int count = n;
int ite = 0;
va_start(no, n);
if (n == 0)
return (0);
if (separator != NULL)
{
for (i = n; ite <= count;  i = va_arg(no, int))
{
if (ite != 0)
{
printf("%d", i);
if (ite != count)
{
printf("%c ", *separator);
}
}
ite++;
}
printf("\n");
}
va_end(no);
}
