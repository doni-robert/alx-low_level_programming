#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: name to be printed
 * @f: function pointer to function that prints the name
 *
 * Return: nothing
 */

void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
