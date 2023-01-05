/**
 * find_sqrt - helper function that caculates the squareroot of a number
 *
 * @n: the number
 * @i: constant necessary for implemenation of the formula.
 * @k: helper variable
 * Return: the squareroot of a number
 */

int find_sqrt(int k, int i, int n)
{

	if (i > n)
		return (-1);
	n = n - i;
	i = i + 2;
	k++;
	if (n == 0)
		return (k);
	else
		return (find_sqrt(k, i, n));
}


/**
 * _sqrt_recursion - function returns the natural squareroot of a number
 *
 * @n: the number
 * Return: the natural squareroot of a number
 *
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(0, 1, n));
}


