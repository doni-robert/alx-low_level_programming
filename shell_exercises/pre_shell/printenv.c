#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the environmental variables
 *
 *
 *
 */
extern char **environ;

int main(int ac, char **av)
{
	int i = 0;
	
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
