#include "main.h"

/**
 * create_array - creates an array of characters and initializes it with
 * a specific character
 *
 * @size: size of the array
 * @c: character for initialization
 *
 * Return: a pointer to the array, or NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}


