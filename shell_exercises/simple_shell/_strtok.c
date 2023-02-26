#include "main.h"

/**
 * _strtok - splits a string and returns an array of each word of the string.
 *
 * @str: string to be split
 * Return: array of each word of the string
 */

char **_strtok(char *str, char * delim)
{
	char **token;
	int i = 0;

	token = malloc(100 * sizeof(char *));
	if (token == NULL)
		return (NULL);

	token[i] = strtok(str, delim);
	while(token[i] != NULL)
	{
		i++;
		token[i] = strtok(NULL, delim);
	}
	token[i] = NULL;

	return (token);
}
