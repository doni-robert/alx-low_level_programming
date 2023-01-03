/**
 * _strstr - finds the first occurence of the substring 'needle' in the
 * substring 'haystack'
 *
 * @haystack: the main string
 * @needle: the substring
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 * if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
			{
				while (needle[j] != '\0')
				{
					if (haystack[i++] == needle[j++])
					{
						j++;
						i++;
					}
				}
				return (&haystack[i]);
			}
		else
			i++;
	}
	return (0);
}


