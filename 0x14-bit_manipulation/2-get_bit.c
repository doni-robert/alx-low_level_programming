#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: integer to be evaluated
 * @index: the index to check bit
 * Return: the value of the bit at index or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if (n & (1 << index))
		return (1);
	return (0);
}

