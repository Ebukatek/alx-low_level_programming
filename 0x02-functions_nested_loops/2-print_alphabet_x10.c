#include "main.h"
/**
 * print_alphabet_x10 -  prints 10x times the alphabet, in lowercase
 * Description: prints the code x10 
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
	}
	_putchar('\n');
	return (0);
}
