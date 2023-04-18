#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: pointer to a variable of type struct dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
