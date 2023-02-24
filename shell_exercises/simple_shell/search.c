#include "main.h"

/**
 * search - searches for a command 's full path
 * 
 * @command: command to be searched
 * Return: returns a pointer to the command's full path
 */

char *search(char *command)
{
	char *token, *dir, *path, *path_cpy; 
	struct stat buf;

	path = getenv("PATH");
	path_cpy = strdup(path);

	dir = malloc(sizeof(char *) * 100);
	if (dir == NULL)
		return (NULL);

	token = strtok(path_cpy, ":");
	while(token != NULL)
	{
		dir = strcpy(dir, token);
		strcat(dir, "/");
		strcat(dir, command);
		
		
		if (stat(dir, &buf) == 0)
		{	
			free(path_cpy);
			return (dir);
		}
		
		token = strtok(NULL, ":");
		
	}

	printf("command not found\n");
	free(path_cpy);
	return (NULL);	
}

