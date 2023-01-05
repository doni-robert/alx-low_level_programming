#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to be examined
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: the string to be reversed
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}


