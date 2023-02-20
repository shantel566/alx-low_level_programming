#include <stdlib.h>
#include <stdio.h>

/**
 * main - use putcher to prints all combination single digit numbers of base
 * Return: 0
 */

int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 9; n1++)
	{

		for (n2 = n1 + 1; n2 < 10; n2++)
		{
			putchar((n1 % 10) + '0');
			putchar((n2 % 10) + '0');

			if (n1 + n2 != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
