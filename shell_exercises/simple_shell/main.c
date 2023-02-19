#include "main.h"
/**
 * main - executes a simple shell
 *
 * Return: 0 if successful, -1 otherwise
 *
 */
int main(int ac, char **av)
{
	char *command;
	char **array;

	while (1)
	{
		command = get_command();
		if (command == NULL)
			return (-1);

		array = split(command);
		if (array == NULL)
			return (-1);

		if (command_exec(array) == -1)
			return (-1);

	}
	return (0);
}
		
