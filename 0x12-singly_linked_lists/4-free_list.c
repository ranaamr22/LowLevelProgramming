#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees nodes from the memory
 * @head: pointer to an element of type list_t
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		free(head->str);
		temp = head->next;
		free(head);
		head = temp;
	}
}
