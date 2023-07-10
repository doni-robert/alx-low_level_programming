#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * binary search algorithm
 *
 * @array: the array to be searched within
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: the index where the value is located, else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	low = 0;
	high = size - 1;

	if (!array || !value || !size)
		return (-1);
	while (low <= high)
	{
		print_array(array, low, high);

		mid = (low + high) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}

/**
 * print_array - prints an array of integers
 *
 * @array: the array to print
 * @start: the starting index from where to start printing
 * @end: the end index where printing stops
 */

void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");

	while (start <= end)
	{
		printf("%i", array[start]);

		if (start != end)
			printf(", ");
		else
			printf("\n");
		start++;
	}
}
