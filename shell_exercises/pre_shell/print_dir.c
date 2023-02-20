#include "main.h"

/**
 * print_dir - prints each directory contained in path
 *
 * Return: 0 if successful, -1 otherwise
 */

int print_dir()
{
	char *dir = _getenv("PATH");
	char *token;

	printf("%s\n", dir);
	token = strtok(dir, ":");
	printf("%s\n", token);
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
	}
	return (0);
}

int main(int ac, char **av)
{
	int i = print_dir();
	printf("%i\n", i);
}


