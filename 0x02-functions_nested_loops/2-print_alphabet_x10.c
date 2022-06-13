#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char ch;

	while (count <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		count++;
		_putchar('\n');
	}
}
