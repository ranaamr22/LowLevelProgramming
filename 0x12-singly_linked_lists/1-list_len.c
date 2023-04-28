#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of nodes in a linked list
 * @h: pointer to an element of type list_t list
 *
 * Return: number of nodes in linked list
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
