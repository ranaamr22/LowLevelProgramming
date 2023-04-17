#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for free_dog
 * @d: pointer to struct dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
/**
 * main - to make a valid c declaration
 * Return: always 0 (success)
 */
int main(void)
{
	return (0);
}
