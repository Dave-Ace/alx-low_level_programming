#include <stdio.h>
/**
 * print_name - function to pointer that prints name
 * @name: name to print
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
