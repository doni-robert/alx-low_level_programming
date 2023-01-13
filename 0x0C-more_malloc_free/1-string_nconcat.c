#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to be examined
 * Return: length of the string
 */

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}


/**
 * string_nconcat - cancatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to be concatenated
 *
 * Return: pointer to the newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= _strlen(s2))
		n = _strlen(s2);

	ptr = malloc((1 +  _strlen(s1) + n) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	while (i < _strlen(s1))
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < (_strlen(s1) + n))
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';

	return (ptr);
}

