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

	id = fork();
	if (id == 0)
	{
		execve(arr[0], arr, NULL);
	}
	wait(NULL);
	return (0);
}

	
