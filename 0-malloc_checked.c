#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - returns pointer to the allocated memory,
 * checks the failure of malloc
 * @b: number of bytes needed to be allocated in the memory
 *
 * Return: pointer to the allocated memory,(98)if fails
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		return (98);
	}
	return (p);
}
