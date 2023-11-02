#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coin
 * @argc: the number of argument
 * @argv: argument vector
 *
 * Return: if the number of argument is not one, return 1. if not 0
 */

int main(int argc, char *argv[])
{
	int dollar, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	dollar = atoi(argv[1]);

	while (dollar > 0)
	{
		coins++;
		if ((dollar - 25) >= 0)
		{
			dollar -= 25;
			continue;
		}
		if ((dollar - 10) >= 0)
		{
			dollar -= 10;
			continue;
		}
		if ((dollar - 5) >= 0)
		{
			dollar -= 5;
			continue;
		}
		if ((dollar - 2) >= 0)
		{
			dollar -= 2;
			continue;
		}
		dollar--;
	}

	printf("%d\n", coins);

	return (0);
}
