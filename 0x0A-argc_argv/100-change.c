#include "main.h"

/**
 * main - program prints the minimum number if coins to make change
 *	 for an amount of money
 *
 * @argc: number of arguments passed
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int arr[5] = {25, 10, 5, 2, 1};
	int num, n, i, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (n = 0; argv[1][n]; n++)
	{
		if (argv[1][n] < '0' || argv[1][n] > '9')
			printf("0\n");
	}

	num = atoi(argv[1]);
	
	if (num > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (num / arr[i] >= 1)
			{
				count += num / arr[i];
				num = num % arr[i];
			}
		}
		printf("%i\n", count);
	}
	return (0);	
}
