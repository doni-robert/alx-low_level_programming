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
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);

		}
		printf("%i\n", sum);
		return (0);
	}
}

