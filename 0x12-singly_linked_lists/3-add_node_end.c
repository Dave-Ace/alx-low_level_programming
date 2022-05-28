#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node_end - functions that adds a new node at the end of a list
 * @head: pointer to node
 * @str: pointer to node string
 * Return: addres of new element or null if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *preNode;
	size_t count;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	for (count = 0; str[count]; count++)
		;
	preNode = *head;
	newNode->count = count;
	newNode->str = strdup(str);
	newNode->next = NULL;
	if (preNode == NULL)
		*head = newNode;
		return (*head);
	if (preNode != NULL)
	{
		while (preNode->next != NULL)
			preNode = preNode->next;
		preNode->next = newNode;
		return (newNode);
	}
}
