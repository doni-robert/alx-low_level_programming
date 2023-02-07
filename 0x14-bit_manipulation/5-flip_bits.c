#include "main.h"

/**
 * flip_bits - returns the number of bits needed to be flipped to get from one
 * number to another
 *
 * @n: the first unsigned long integer
 * @m: the second unsigned long integer
 * Return: the number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n)
	{
		if ((n & 1) != (m & 1))
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}

