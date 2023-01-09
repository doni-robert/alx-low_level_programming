#include "main.h"

/**
 * main - program prints its number of arguments passed to it
 *
 * @argc: number of arguments passed
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
        printf("%i\n", argc - 1);
	return (0);
}
