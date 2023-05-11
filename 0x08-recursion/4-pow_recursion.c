/**
 * _pow_recursion - this function returns the value of x raised to the power of y.
 * @x: the number
 * @y: the value to be raised to
 * Return: the value of x raised to the power of y if y is less than 0.
 * and -1 if y is greater 0;
 */

int _pow_recursion(int x, int y)
{
	int value = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	value *= _pow_recursion(x, y - 1);
	return (value);
}
