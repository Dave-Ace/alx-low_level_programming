#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
char i;
int j;
double d;
float c;
long k;
printf("Size of a char: %lu.\n", (unsigned long)sizeof(i));
printf("Size of an int: %lu.\n", (unsigned long)sizeof(j));
printf("Size of a long int: %lu.\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(k));
printf("Size of a float: %lu.\n", (unsigned long)sizeof(c));
return (0);
}
