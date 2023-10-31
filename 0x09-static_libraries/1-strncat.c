#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @m: number of bytes to concatenates
 * Return: dest
 */

char *_strncat(char *dest, char *src, int m)
{
	int len = strlen(dest);
	int j;

	for (j = 0 ; j < m && *src != '\0' ; j++)
	{
		dest[len + j] = *src;
		src++;
	}
	dest[len + j] = '\0';
	return (dest);
}
