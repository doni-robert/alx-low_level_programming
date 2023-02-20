#include "main.h"
/**
 * main - executes a simple shell
 *
 * Return: 0 if successful, -1 otherwise
 *
 */
int main(void)
{
	char *command;
	char **array;
	int i;

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
			printf("split error");
			return (-1);
		}

		if(command_exec(array) != 0)
		{
			perror("command_exec error");
			return (-1);
		}
	}
	free(command);
	free(array);

	return (0);
}
		
