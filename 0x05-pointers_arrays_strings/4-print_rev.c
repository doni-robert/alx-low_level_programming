#include "main.h"

/**
 *print_rev - Prints a string in reverse
 *
 *@s: The string to be printed.
 */

void print_rev(char *s)
{
	int len, index;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (index = len - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
