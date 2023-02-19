#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * main - a program that prints out the alphabet using g putchar
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int x = 'A';

	for (; x <= 'Z'; x++)
	{
		putchar (tolower(x));
	}
	putchar ('\n');

	return (0);
}
