#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: unsigned long integer whose bit is to be cleared
 * @index: the position of the bit to be cleared
 * Return: 1 if successful, -1 if en error occured
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}

