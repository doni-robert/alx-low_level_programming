#include "main.h"

/**
 * main - program adds positive numbers
 *
 * @argc: number of arguments passed
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, n, sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			n = atoi(argv[i]);
			if (isdigit(n))
				sum += n;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%i\n", sum);
		return (0);
	}
}

