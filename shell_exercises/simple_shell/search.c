#include "main.h"

/**
 * search - searches for a command 's full path
 * 
 * @command: command to be searched
 * Return: returns a pointer to the command's full path
 */

char *search(char *command)
{
	char *path = getenv("PATH");
	char *token, *dir; 
	struct stat buf;
	
	token = strtok(path, ":");
	
	while(token != NULL)
	{
		dir = strdup(token);
		strcat(dir, "/");
		strcat(dir, command);

		if (stat(dir, &buf) == 0)
		{
			return (dir);
		}
		token = strtok(NULL, ":");
	}
	return (NULL);	
}

