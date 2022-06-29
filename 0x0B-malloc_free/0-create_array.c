#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 * initializes it with a specific char.
 *
 * @size: The size of the array to be initialized.
 * @c: The specific char that intializes the array 
 *
 * Return: If size == 0 or the function fails - NULL.
 *  else - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int index;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ptr[index] = c;

	return (ptr);
}
