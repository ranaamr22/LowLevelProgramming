#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to an element of type list_t
 * @str: string to be added to the new node
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	int len = 0;

	list = malloc(sizeof(list_t));
	while (str[len])
		len++
	if (list != NULL)
	{
		list->str = strdup(str);
		list->len = len;
		list->next = (*head);
		(*head) = list;
	}
	else
		return (NULL);

	return (*head);
}
