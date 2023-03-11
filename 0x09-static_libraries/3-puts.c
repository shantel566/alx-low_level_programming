#include "main.h"

/**
 * _puts - prints a string to stdout.
 *
 * @str: string.
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
