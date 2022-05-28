#include<stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a node
 * @h: node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
int no = 0;
while (h != NULL)
{
_putchar('[');
if (h->str != NULL)
{
_putchar('0', h->len);
_putchar(']');
_putchar(' ');
_putchar('0', h->str);
_putchar('\n');
}
else
{
_putchar('0');
_putchar(']');
_putchar (' ');
_putchar('0', "(nil)");
_putchar('\n');
}
no++;
h = h->next;
}
return (no);
}
