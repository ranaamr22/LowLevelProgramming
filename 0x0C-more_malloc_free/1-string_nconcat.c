#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatinate two string
 * @s1: first string
 * @s2: second string needed to be concatenated
 * @n: number of chars needed to be concatenated from second string
 *
 * Return: pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, j, len1, len2;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;

	while (s1[len1] != 0)
		len1++;
	while (s2[len2] != 0)
		len2++;
	if (n < len2)
		p = (char *)malloc(sizeof(char) * (len1 + n + 1));
	else
		p = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);
	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	while ((j < n) && (n < len2))
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	while ((n >= len2) && (j < len2))
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';

	return (p);

}
