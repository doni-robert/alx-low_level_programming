#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (n == 0)
		return;

	va_start (ptr, n);
	for (i = 0; i < n-1; i++)
		printf("%d%s ", va_arg (ptr, int), separator);
	for (i = n - 1; i < n; i++)
		printf("%d", va_arg (ptr, int));
	      
	printf("\n");

	va_end (ptr);
}	
