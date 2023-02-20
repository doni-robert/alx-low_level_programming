#include "main.h"
/**
 * main - executes a simple shell
 *
 * Return: 0 if successful, -1 otherwise
 *
 */
int main(void)
{
	char *command = "/bin/ls";
	char **array;
	int i;

	while (1)
	{
		command = get_command();
		if (command == NULL)
		{
			printf("get_command error");
			return (-1);
		}

		array = split(command);
		i = 0;
	        while(array[i])
	        {
        	        printf("%s\n", array[i]);
               		i++;
       		}

		if (array == NULL)
		{
			printf("split error");
			return (-1);
		}

		command_exec(array);
	}


	return (0);
}
		
