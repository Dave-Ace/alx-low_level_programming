#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function that free list
 * @head: point4er to list 
 */
void free_list(list_t *head)
{
	list_t *nodes;

	while (head != NULL)
	{
		nodes = head->next;
		free(heaad->str);
		free(head);
		head = nodes;
	}
}
