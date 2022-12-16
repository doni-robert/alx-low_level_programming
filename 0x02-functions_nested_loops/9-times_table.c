#include "main.h"

/**
 *times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int num, multplier, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multplier = 1; multplier <= 9; multplier++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * multplier;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
