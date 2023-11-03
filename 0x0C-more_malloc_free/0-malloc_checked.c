#include "main.h"

/**
 * malloc_checked - normal process termination
 *
 * @b: allocated memory
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a =  malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
