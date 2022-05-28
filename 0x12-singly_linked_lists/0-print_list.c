#include<stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - function that prints all the elements of a node
 * @h: node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *node = h;
int no = 0;
while (node != NULL)
{
if (node->str != NULL)
printf("[%d] %s\n", node->len, node->str);
else
printf("[%d] %s\n", 0, "(nil)");
no++;
node = node->next;
}
return (no);
}
