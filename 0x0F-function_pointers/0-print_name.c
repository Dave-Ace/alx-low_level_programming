#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function to pointer that prints name
 * @name: name to print
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
f = print_name_as_is;
f(name);
f = print_name_uppercase;
f(name);
}
