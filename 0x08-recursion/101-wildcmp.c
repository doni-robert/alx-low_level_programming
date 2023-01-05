/**
 * compare_func - helper function to compare two strings
 *
 * @s1: first string
 * @s2: second string
 * @i: integer to aid traverse the string
 * Return: 1 if the string are identical, 0 otherwise
 *
 */

int compare_func(int i, char *s1, char *s2)
{
	if (s1[i] == s2[i] || s2[i] == '*')
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
		i++;
		return (compare_func(i, s1, s2));
	}
	else
		return (0);
}




/**
 * wildcmp - function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: 1 if the string are identical, 0 otherwise
 *
 */

int wildcmp(char *s1, char *s2)
{
	return (compare_func(0, s1, s2));
}

