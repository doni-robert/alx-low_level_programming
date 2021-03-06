#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *  containing a copy of the string given as parameter.
 *
 * @str: The string to be copied
 *
 * Return: If str == NULL or memory is insufficient- NULL.
 *  else - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dup[index] = str[index];

	dup[len] = '\0';

	return (dup);
}
