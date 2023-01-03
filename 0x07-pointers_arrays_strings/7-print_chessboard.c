#include "main.h"
/**
 * print_chessboard - prints a chesboard
 *
 * @a: the chessboard to be printed
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (*a)
	{
		for (i = 0; ; i++)
			for (j = 0; j < 8; j++)
				_putchar(*(a[i] + j));
	}
}


