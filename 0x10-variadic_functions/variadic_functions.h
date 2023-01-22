#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct types - defines a new struct of type types
 *
 * @_character: character of the type
 * @fptr: function whose parameter is a va_list and returns nothing
 */

typedef struct types
{
	char *_character;
	void (*fptr)(va_list);
} types_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
