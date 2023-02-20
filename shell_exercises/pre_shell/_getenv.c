#include <string.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _getenv - gets an environment variable
 *
 * @name: the key name of the environment variable
 * Return: pointer to the corresponding value
 */

extern char **environ;

char *_getenv(const char *name)
{
	const char *key;
	int i = 0;

	while (environ[i] != NULL)
	{
		key = strtok(environ[i], "=");
		
		if (strcmp(name, key) == 0)
			return (strtok(NULL, "="));
		i++;
	}
	return (NULL);
}

