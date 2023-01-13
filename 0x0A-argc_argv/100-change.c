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
	int i, n, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);

	if (n > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (n / arr[i] >= 1)
			{
				count += n / arr[i];
				n = n % arr[i];
			}
		}
		printf("%d\n", count);
	}
	else
		printf("0\n");

	return (0);
}
