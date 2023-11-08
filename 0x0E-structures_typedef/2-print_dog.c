#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog
 * @d: the dog to print
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %s\n", (d->age) ? d->name : 0);
		printf("Owner:%s\n", (d->owner) ? d->owner : "(nil)");
	}
}
