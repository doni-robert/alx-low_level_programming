#include "main.h"

/**
 * get_command - displays prompt and  reads inputted line
 *
 * Return: a pointer to the inputted string
 */

char *get_command(void)
{
	char *buffer = NULL;
	size_t input_size = 0;
	size_t len;

	printf("$");
	if (getline(&buffer, &input_size, stdin) < 1)
	{
		perror("Getline error");
		return (NULL);
	}

        len = strlen(buffer);

	buffer[strlen(buffer) - 1] = '\0';

	return (buffer);
}
