#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The charcter to print
 *
 * Return: 1(success)
 * on error, -1 is returned, and erron is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
