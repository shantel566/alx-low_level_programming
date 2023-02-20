#include <stdlib.h>
#include <stdio.h>

/**
 * main - use putcher to prints all possible single digit numbers of base
 * Return: 0
 */

int main(void)
{
	int number [10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(number[n]);

		if (number[n] != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
