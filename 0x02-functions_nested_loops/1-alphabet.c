#include "main.h"
/**
 *main - prints lowercase alphabet
 *
 *Return: 0 if unsuccessful
 */
int main (void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
		_putchar('\n');
	}
	return (0);
}

