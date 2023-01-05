/**
 * _strlen - returns the length of a string
 *
 * @s: string to be examined
 * Return: length of the string
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
 * check_palindrm - helper function to check if string is palindrome
 *
 * @i: necessary integer for calculation formula
 * @s: the string
 * @len: length of the string
 * Return: 1 if string is palindrome, 0 if not
 *
 */

int check_palindrm(int i, int len, char *s)
{
	if (i >= len - (i + 1))
		return (1);
	if (s[i] != s[len - (i + 1)])
		return (0);
	{
		i++;
		return (check_palindrm(i, len, s));
	}
}

/**
 * is_palindrome  -checks if string is a palindrome
 *
 * @s: the string
 * Return: 1 if string is palindrome, 0 if not
 *
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_palindrm(0, len, s));
}
