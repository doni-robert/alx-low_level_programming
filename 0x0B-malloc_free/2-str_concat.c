#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to be examined
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}


/**
 * str_concat - function concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space with concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc((1 + _strlen(s1) + _strlen(s2)) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	while (i < _strlen(s1))
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < (_strlen(s1) + _strlen(s2)))
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';

	return (ptr);
}
