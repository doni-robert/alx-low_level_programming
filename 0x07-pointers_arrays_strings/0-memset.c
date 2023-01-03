#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 *
 * @s: memory to be filled
 * @b: the constant byte
 * @n: number of bytes
 *
 * Return: pointer to the memory area
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
