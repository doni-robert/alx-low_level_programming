#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest:Destination of string to be copied
 * @src:String to be copied
 * @n:Bytes of source to be copied
 *
 * Return: Points to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
