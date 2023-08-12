#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:'prints the alphabet in lowercase, followed by a new line'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
