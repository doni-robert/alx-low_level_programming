#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints argument of type character
 *
 * @arg: argument to be printed
 *
 * Return: nothing
 */
void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - prints argument of type integer
 *
 * @arg: argument to be printed
 *
 * Return: nothing
 */

void print_int(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%i", i);
}

/**
 * print_float - prints argument of type float
 *
 * @arg: argument to be printed
 *
 * Return: nothing
 */

void print_float(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f", f);
}

/**
 * print_string - prints argument of type string
 *
 * @arg: argument to be printed
 *
 * Return: nothing
 */

void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (arg == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 *
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int j, k;
	char *separator = "";
	types_t ft[4] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	k = 0;
	while (format[k] != '\0')
	{
		j = 0;
		while (j < 4 && format[k] != *(ft[j]._character))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			ft[j].fptr(ap);
			separator = ", ";
		}

		k++;
	}
	printf("\n");
	va_end(ap);
}


