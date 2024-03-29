#include "main.h"

/**
 * command_exec - executes a command
 *
 * @arr: array of strings of the commands to be executed
 * Return: 0 if successful, -1 otherwise
 */
int command_exec(char **arr)
{
	pid_t id;
	int i = 0;

	id = fork();

	if (id == -1)
	{
		perror("child error");
		return (-1);
	}

	if (id == 0)
	{
		if (execve(arr[0], arr, NULL) == -1)
		{
			perror("execution error");
			return (-1);
		}
	}
	wait(NULL);
	return (0);
}

	
