#include "main.h"
/**
 * main - executes a simple shell
 *
 * Return: 0 if successful, -1 otherwise
 *
 */
int main(int ac, char **av, char **env)
{
	char *command;
	char **array;
	char *path;
	int i = 0;
	int (*fptr)(char **array);

	while (1)
	{
		command = get_command();
		if (command == NULL)
		{
			perror("get_command error");
			continue;
		}

		array = split(command);
		if (array == NULL)
		{
			perror("split error");
			continue;
		}
		
		fptr = search_builtin(array[0]); 
		if (fptr != NULL)
		{
			fptr(array);
		}
		
		else
		{
			path = search(array[0]);
                	if (path == NULL)
                	{	
				perror("path error");
                       		continue;
			}
		
			array[0] = path;
		
			if(command_exec(array) != 0)
			{
				perror("command_exec error");
				continue;
			}

			free(path);
			free(command);
			free(array);
		}
	}

	free(path);
	free(command);
	free(array);

	return (0);
}
