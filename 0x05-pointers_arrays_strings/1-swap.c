#include "main.h"
/**
 * swap_int - swap two integers
 * @a: first parameter
 * @b: second parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
int *c;
*c = *a;
*a = *b;
*b = *c;
}
