
/**
 * _strspn - function gets the length of a prefix substring
 *
 * @s: initial segment
 * @accept: prefix substring
 *
 * Return: number of bytes in the initial segment of s which
 * consists only of bytes from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				n++;

			}

			j++;
		}
		i++;
		if (s[i] == ' ')
			break;
	}
	return (n);
}

