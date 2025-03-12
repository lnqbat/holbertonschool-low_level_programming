#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - init var
 *
 * @d:pointer
 * @name: name a dog
 * @age: age a dog
 * @owner: owner a dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
