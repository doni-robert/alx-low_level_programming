#include "hash_tables.h"

/**
 * hash_djb2 - a hash function implementing the djb2 algorithm
 *
 * @str: the string to be hashed
 * Return: a hash value in the form of an unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
	hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
