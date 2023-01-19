#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 
 */

int main(int argc, char **argv)
{
	int (*fptr)(int, int);
	int result;
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fptr = get_op_func(argv[2]);
	result = fptr(1,2);
/*	r = op_sub(4, atoi(argv[3]));
	r = fptr(3,4);
	result = fptr(atoi(argv[1]),atoi(argv[3]));
*/	
	printf("%i\n", result);
	return(0);
}


