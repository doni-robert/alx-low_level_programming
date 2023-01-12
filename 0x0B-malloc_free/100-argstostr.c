#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to be examined
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * argstostr - Concatenates all the arguments of the program
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to the new concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, index, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
		total_len += _strlen(av[i]);
	ptr = malloc(sizeof(char) * (total_len + ac));

	if (ptr == NULL)
		return (NULL);
	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
			ptr[index++] = av[i][j];
		ptr[index++] = '\n';
	}
	ptr[index++] = '\0';
	return (ptr);
}

