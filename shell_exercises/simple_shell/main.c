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
			return (-1);
		}
		

		array = split(command);
		if (array == NULL)
		{
			perror("split error");
			return (-1);
		}
		
		printf("%s\n", array[0]);

		path = search(array[0]);
                if (path == NULL)
                {
                        perror("path error");
                        return (-1);
                }

		array[0] = path;
		
		if(command_exec(array) != 0)
		{
			perror("command_exec error");
			return (-1);
		}
		free(path);
		free(command);
		while (array[i] == NULL)
		{
			free(array[i]);
			i++;
		}
		free(array);
	}
	return (0);
}
		
