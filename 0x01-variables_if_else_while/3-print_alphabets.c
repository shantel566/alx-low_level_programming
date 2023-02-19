#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * main - a program that prints the alphbet in lwercase,and upercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int x = 'A';

	for (; x <= 'Z'; x++)
	{
		putchar (tolower(x));

		if (x == 'Z')
		{
			int x = 'A';

			for (; x <= 'Z'; x++)

			{
				putchar (x);
			}
		}
	}
	putchar ('\n');

	return (0);
}
