#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @s: string to e encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	int i;
	int j;
	char arr[] = "ol-ea--t";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; arr[j]; j++)
		{
			if (s[i] == arr[j] || s[i] == (arr[j] - 32))
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
