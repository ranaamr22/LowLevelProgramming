#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string needed to be copied
 *
 * Return: A pointer to the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int len = 0;
	char *p;

	if (str == NULL)
		return (null);
	while (str[len])
		len++;
	p = (char *) malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	while ((p[i] = str[i]) != '\0')
		i++;
	return (p);
}
