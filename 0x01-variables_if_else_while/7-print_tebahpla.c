#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * main - a program that prints the alphabet in lowercase, the reverse
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int x = 'Z';

	for (; x >= 'A'; x--)
	{
		putchar (tolower(x));
	}
	putchar ('\n');

	return (0);
}
