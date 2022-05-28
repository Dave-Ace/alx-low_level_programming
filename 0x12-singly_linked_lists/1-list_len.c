#include<stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to struct list_t
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
const list_t *node = h;
int no = 0;
while (node != NULL)
{
no++;
node = node->next;
}
return (no);
}
