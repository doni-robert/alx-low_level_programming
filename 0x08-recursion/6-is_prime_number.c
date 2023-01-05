/**
 * check_prime_num - helper function to check if number is prime
 *
 * @n: number to be examined
 * @i: number to aid in the calculation as per formula used
 * Return: 1 if input integer is a prime number, 0 otherwise
 *
 */

int check_prime_num(int i, int n)
{
	if (n < 2)
		return (0);
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	{
		i++;
		return (check_prime_num(i, n));
	}
}



/**
 * is_prime_number - checks if number is a prime number
 *
 * @n: the number to be examined
 * Return: 1 if input integer is a prime number, 0 otherwise
 *
 */

int is_prime_number(int n)
{
	return (check_prime_num(2, n));
}
