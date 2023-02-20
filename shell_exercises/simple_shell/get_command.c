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

	printf("$");
	getline(&buffer, &input_size, stdin);
/*	{
		perror("Getline error");
		return (NULL);
	}
*/	return (buffer);
}
