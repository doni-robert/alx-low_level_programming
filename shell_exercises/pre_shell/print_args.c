#include <stdio.h>

/**
 * main - prints all the arguments without using ac
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int i = 1;

	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
