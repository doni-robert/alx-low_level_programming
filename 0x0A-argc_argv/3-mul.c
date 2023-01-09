#include "main.h"

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments passed
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
	        printf("%i\n", mul);
        	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

