#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node - functions that adds a new node at the begining of a list
 * @head: pointer to node
 * @str: pointer to node string
 * Return: addres of new element or null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_t *newNode = malloc(sizeof(struct list_t));
	size_t count;

	if (newNode == NULL)
	{
		return (NULL);
	}
	for (count = 0; str[count]; count++)
		;
	newNode->len = count;
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
