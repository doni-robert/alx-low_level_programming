#include "main.h"

/**
 *rev_string - Reverses a string
 *@s: The string to be reversed
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char ch;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		ch = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = ch;
	}
}
