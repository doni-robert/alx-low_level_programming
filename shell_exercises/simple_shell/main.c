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
		
		printf("%s\n", array[0]);	
		if (strcmp(array[0], "exit") == 0)  
                {\
			free(array);
                        free(command);
                        exit(0);

                }


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

	free(path);
	free(command);
	free(array);

	return (0);
}
		
