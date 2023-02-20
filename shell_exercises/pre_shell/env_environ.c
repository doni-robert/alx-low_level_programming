#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the address of env and environ
 *
 *
 *
 */
extern char **environ;

int main(int ac, char **av, char **env)
{
	printf("%p\n", environ);
	printf("%p\n", env);
	return (0);
}

