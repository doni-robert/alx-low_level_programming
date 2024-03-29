/**
 * _pow_recursion - function that returns the value of x raised to the
 * power of y
 *
 * @x: number to be raised
 * @y: power to raise by
 * Return: result of the operation
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
