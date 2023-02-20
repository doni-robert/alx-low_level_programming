#include "main.h"

/**
 * main - executes command in 5 different child processes
 *
 * Return: 0 if successful, 1 otherwise
 *
 */

int main(int ac, char **av)
{

	pid_t cpid;
	char buffer[] = "/bin/ls -l /tmp";
	char **token;
	int i;


	for (i = 0; i < 5; i++)
	{
		cpid = fork();
		if (cpid == -1)
		{
        		perror("Error:");
        		return (1);
		}
		if (cpid == 0)
		{
			token = _strtok(buffer);

			if (execve(token[0], token, NULL) == -1)
			{
				perror("Error");
				return (1);
			}
		}
		else
		{
			wait(NULL);
			printf("\nChild %i executed\n\n", i);
		}
	}
	return (0);
		
}

