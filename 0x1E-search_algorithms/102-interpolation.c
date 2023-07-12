#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the interpolation search algorithm
 *
 * @array: the array to be searched within
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: the first index where the value is located, else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0;
	high = size - 1;
	if (!array || !value || !size)
		return (-1);
	while (value <= array[high] &&
			value >= array[low] &&
			low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%li] = [%i]\n", pos, array[pos]);

		if (array[low] == value)
			return (low);
		if (array[high] == value)
			return (high);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	if (value > array[high] || value < array[low])
		printf("Value checked array[2109] is out of range\n");
	return (-1);
}
