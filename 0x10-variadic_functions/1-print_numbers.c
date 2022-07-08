#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print numbers - prints numbers followed by new line
 *
 * @separator: character separating numbers
 * @n: number of arguments
 * @...: variable numbers to be printed
 *
 * Description: if separator is NULL do not print it
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start (ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg (ptr, int));

		if (i != (n-1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end (ptr);
}	
