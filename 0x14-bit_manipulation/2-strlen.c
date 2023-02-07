#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to be examined
 * Return: length of the string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

