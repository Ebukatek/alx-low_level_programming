#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		s1len++;
	for (a = 0; s2[a] != '\0'; a++)
		s2len++;

	output = malloc(sizeof(char) * (s1len + n) + 1);
	if (output == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (a = 0; s1[a] != '\0'; a++)
			output[a] = s1[a];
		for (a = 0; s2[a] != '\0'; a++)
			output[s1len + a] = s2[a];
		output[s1len + a] = '\0';
	}
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			output[a] = s1[a];
		for (a = 0; a < n; a++)
			output[s1len + a] = s2[a];
		output[s1len + a] = '\0';
	}
	return (output);
}
