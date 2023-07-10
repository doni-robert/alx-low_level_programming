#include "search_algos.h"

/**
 * linear_search - searches for an array of integers using the linear search
 * algorithm
 *
 * @array: the array to be searched within
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: the first index where the value is located, else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || !value || !size)
		return (-1);
	for (i = 0; i <= size - 1; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
