#include "function_pointers.h"

/**
 * int_index - this function searches for an integer
 *
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: index to the first element for which the cmp function does
 * not return 0, -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}


