#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: variable of the times table
 *
 */

void print_times_table(int n)
{
	int i, j, mult;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j;
				if (mult > 99)
				{
					_putchar(mult / 100 + '0');
					_putchar(((mult % 100) / 10) + '0');
					_putchar(mult % 10 + '0');
				}
				else if (mult < 100 && mult > 9)
				{
					_putchar(mult / 10 + '0');
					_putchar(mult % 10 + '0');
				}
				else
					_putchar(mult + '0');
				if (j < n)
				{
					_putchar(',');
					if (mult < 1000)
						_putchar(' ');
					if (mult < 100)
						_putchar(' ');
					if (mult < 10)
						_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
	}
}


