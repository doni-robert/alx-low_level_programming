#include "main.h"

/**
 * split - splits a string into tokens
 *
 * @buffer: string to be split
 * Return: an array of tokens from the split string
 */

char **split(char *buffer)
{
	char **arr;

	arr = _strtok(buffer, " ");

	if (arr == NULL)
		return (NULL);
	return (arr);
}

