#include "main.h"

/**
 * _strtok - splits a string and returns an array of each word of the string.
 *
 * @str: string to be split
 * Return: array of each word of the string
 */

char **_strtok(char *str)
{
	char **token;
	int i = 0;

	token = malloc(sizeof(char *));
	*token = malloc(sizeof(char) * 100);
	
	token[i] = strtok(str, " ");

	while(token[i] != NULL)
	{
		i++;
		token[i] = strtok(NULL, " ");
	}
	token[i] = NULL;

	return (token);
}

