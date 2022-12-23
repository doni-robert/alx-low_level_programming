#include "main.h"

/**
 *_strcmp - Compares two strings
 *
 *@s1: A pointer to the first string
 *@s2: A pointer to the second string
 *
 *Return: 0 if same, -ve if s1 < s2, +ve if s2 < s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
