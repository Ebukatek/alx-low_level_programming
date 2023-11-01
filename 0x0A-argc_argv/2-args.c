#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: counts the arguments
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0 ; j < argc ; j++)
		printf("%s\n", argv[j]);
	return (0);
}
