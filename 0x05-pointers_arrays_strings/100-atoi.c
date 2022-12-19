#include "main.h"
/**
 * _atoi - converts a string to an integer
 *
 * @s: string to be converted
 * Return: 0 if there are no numbers in the string
 */

int _atoi(char *s)
{
	int i = 0, num = 0, sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			num = (num * 10) + (s[i] - '0') * sign;
		else if (num)
			break;

		i++;
	}

	return (num);
}
