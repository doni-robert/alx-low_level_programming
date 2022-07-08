#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints string followed by 
 *     new line
 *
 * @separator: character separating strings
 * @n: number of arguments
 * @...: variable number of strings
 *
 * Description - IF separator is NULL, its not printed
 *    if string is NULL, nil is printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

        va_start (ptr, n);
	
       	for (i = 0; i < n; i++)
	{
		str = va_arg (ptr, char *);

		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);

		if (i != (n-1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end (ptr);
}
