#include "main.h"

/**
 * main - prints directory command is found in
 *
 * Return: 0 if successful, -1 otherwise
 */

int main(int ac, char **av)
{
	char *path = getenv("PATH");
	char *token, *dir, *cmd; 
	struct stat buf;

	if (ac != 2)
	{
		perror("Expected 2 arguments");
		return (-1);
	}
	
	cmd = av[1];
	token = strtok(path, ":");
	
	while(token != NULL)
	{
		dir = strdup(token);
		strcat(dir, "/");
		strcat(dir, cmd);

		if (stat(dir, &buf) == 0)
		{
			printf("%s\n", dir);
			free(dir);
			return (0);
		}
		token = strtok(NULL, ":");
	}
	printf("file not found in current PATH\n");
	return (-1);	
}

