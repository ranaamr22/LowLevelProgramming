#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to initialize the array
 *
 * Return: A pointer to an array (success)
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *p;
	unsigned int i = 0;

	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL)
		return (0);
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*p = '\0';
	return (p);
}
