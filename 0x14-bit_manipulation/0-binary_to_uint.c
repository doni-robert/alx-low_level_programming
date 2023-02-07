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


#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: string of 0 and 1 chars
 * Return: the converted number or 0 if there is one or more char in b
 * that is not 0 or 1 or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int index = 0, num = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	len--;
	for (; b[len]; len--)
	{
		if ((b[len] == '0') | (b[len] == '1'))
		{
			num += (b[len] - '0') << (index);
			index++;
		}
		else
			return (0);
	}
	return (num);
}

