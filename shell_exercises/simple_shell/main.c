#include "main.h"
/**
 *
 *
 *
 */
int main(int ac, char **av)
{
	char *command;
	char **array;

	while (1)
	{
		command = get_command();
		array = split(command);
		command_exec(array);
	}
	return (0);
}
		
