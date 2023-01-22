#include "variadic_functions.h"

/**
 * sum_them_all - adds all its parameters
 *
 * @n: the expected number of arguments
 *
 * Return: the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);
}

