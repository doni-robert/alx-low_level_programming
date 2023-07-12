#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a video in a sorted array of integers using
 * the jump search algorithm
 *
 * @array: the array to be searched within
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: the first index where the value is located, else -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, i;

	if (!array || !value || !size)
		return (-1);
	jump = sqrt(size);

	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			return (seg_linear_search(array, i - jump, i,  value));
		}
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
	}
	return (-1);
}


/**
 * seg_linear_search - searches for a value of integers using the linear search
 * algorithm on a segment an array
 *
 * @array: the array to be searched within
 * @start: the index from where to start searching
 * @end: the index where search stops
 * @value: the value to search
 *
 * Return: the first index where the value is located, else -1
 */

int seg_linear_search(int *array, size_t start, size_t end, int value)
{
	printf("Value found between indexes [%li] and [%li]\n", start, end);
	if (!array || !value)
		return (-1);
	for (; start <= end; start++)
	{
		printf("Value checked array[%li] = [%i]\n", start, array[start]);

		if (array[start] == value)
			return (start);
	}
	return (-1);
}
