#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int (*fptr)(int, int);
	int result, arg1, arg2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fptr = get_op_func(argv[2]);

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	result = fptr(arg1, arg2);

	printf("%i\n", result);
	return (0);
}


