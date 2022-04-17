#include <stdio.h>
/**
 * main - fibonacci
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 1;
int f = 1, s = 1, nxt;
while (n <= 50)
{
if (n == 1)
{
f = 1;
printf("%i, ", f);
}
nxt = f + s;
printf("%i, ", nxt);
f = s;
s = nxt;
n++;
}
printf("\n");
return (0);
}
