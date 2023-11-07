#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a dog
 * @d: pointer to a dog
 * @name: dogs name
 * @age: dogs age
 * @owner: name of the owner
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
