#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = '0';
	int y = '0';
	int z = '0';

	for (z = '0'; z <= '0'; z++)
	{
		for (y = '0'; y <= '0'; y++)
		{
			for (x = '0'; x <= '0'; x++)
			{
				if (!((x == y) || (y == z) || (y > x) || (z > y)))

				{
					putchar(z);
					putchar(y);
					putchar(x);
					if (!(x == '9' && z == '7' && y == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
