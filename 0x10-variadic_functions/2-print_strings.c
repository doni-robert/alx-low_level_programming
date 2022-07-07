#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (n == 0)
		return;
	
	va_start (ptr, n);
       	for (i = 0; i < n-1; i++)
		printf("%ld%s ", va_arg (ptr, int), separator);
	
	for (i = n-1; i < n; i++)
		printf("%ld", va_arg (ptr, int));
	va_end (ptr);
	
		
}
