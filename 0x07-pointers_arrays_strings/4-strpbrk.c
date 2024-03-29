/**
 * _strpbrk - locates the first occurence in the string of any
 * of the bytes in the string accept
 *
 * @s: the string
 * @accept: the substring
 *
 * Return: pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (0);
}
