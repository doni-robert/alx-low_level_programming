#include "main.h"

/**
 * cap_string - capiitalizes all words of a string.
 *
 * @s: string to be capitalized
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 32;
			else if (s[i - 1] == ' ' ||
				 s[i - 1] == '\t' ||
			    s[i - 1] == '\n' ||
			    s[i - 1] == ',' ||
			    s[i - 1] == ';' ||
			    s[i - 1] == '.' ||
			    s[i - 1] == '!' ||
			    s[i - 1] == '?' ||
			    s[i - 1] == '"' ||
			    s[i - 1] == '(' ||
			    s[i - 1] == ')' ||
			    s[i - 1] == '{' ||
			    s[i - 1] == '}')
				s[i] -= 32;
			else
			i++;
		}
		else
			i++;
	}
	return (s);
}
