#include "main.h"

/**
 * search - searches for a command 's full path
 * 
 * @command: command to be searched
 * Return: returns a pointer to the command's full path
 */

char *search(char *command)
{
	char *path;
	char *token, *dir; 
	struct stat buf;

	path = getenv("PATH");

	dir = malloc(sizeof(char *) * 1000);
	if (dir == NULL)
		return (NULL);

	printf("%s\n", path);
	token = strtok(path, ":");
	while(token != NULL)
	{
		printf("%s\n", path);
		dir = strcpy(dir, token);
		printf("%s\n", dir);
		strcat(dir, "/");
		strcat(dir, command);
		
		
		printf("%s\n", dir);
		if (stat(dir, &buf) == 0)
		{
			
			return (dir);
		}
		
		printf("%s\n", dir);	
		token = strtok(NULL, ":");
		
		printf("%s\n", token);
		
	}

//	printf("%s\n", dir);
	return (NULL);	
}

