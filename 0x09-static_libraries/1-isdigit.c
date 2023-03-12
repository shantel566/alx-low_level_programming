#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: character to test.
 * Return: 1 if it is a digit, 0 ifnot.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
