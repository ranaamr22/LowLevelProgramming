#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: ponter to variable of type struct dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
