#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - normal process termination
 *
 * @b: allocated memory
 *
 * Return: a pointer to the new memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a =  malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
