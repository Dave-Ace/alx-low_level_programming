#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - functions that prints string
 * @separator: string separator
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list no;
int i;
char *s;
int count = n;
int ite = 0;
va_start(no, n);
if (separator != NULL)
{
for (i = n; ite <= count;  s = va_arg(no, char *))
{
if (ite != 0)
{
if (s != NULL)
{
printf("%s", s);
}
else
{
printf("nil");
}
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
