#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints "$ ", wait for the user to enter a command
 * and prints it on the next line
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	char *buf = NULL;
	int i;
	size_t n;       

	printf("$ ");

	do{
		i = getline(&buf, &n, stdin);
		printf("%s", buf);
	} while (i == 0);

	return (0);
}
