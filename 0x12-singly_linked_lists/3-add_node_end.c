#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to an element of type list_t
 * @str: string to added to the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list;
	int len = 0;
	list_t *temp = *head;

	list = malloc(sizeof(list_t));
	while (str[len])
		len++;
	if (list == NULL)
		return (NULL);
	list->str = strdup(str);
	list->len = len;
	list->next = NULL;
	if (*head == NULL)
	{
		*head = list;
		return (list);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = list;

	return (list);
}
