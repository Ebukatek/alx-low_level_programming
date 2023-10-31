#include "main.h"
/**
 * char *_strcpy - copies the string to by src
 * @dest: copy to
 * @src: copy from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int u = 0;
	int v = 0;

	while (*(src + u) != '\0')
	{
		u++;
	}
	for ( ; v < u ; v++)
	{
		dest[v] = src[v];
	}
	dest[u] = '\0';
	return (dest);
}
