
#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string,
 *overwriting the terminating null byte (\0) at the end of dest,
 *and then adds a terminating null byte
 *
 *@dest: Pointer to the string to be concatenated
 *@src: The source string to be appended
 *
 *Return: A pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
