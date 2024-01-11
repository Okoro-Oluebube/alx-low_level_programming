/**
 * _pow_recursion --multiplication using recursion.
 * @x: function input variable.
 * @y: function input parameter.
 * Return: an integer.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	x = x * _pow_recursion(x, y - 1);
	return (x);
}
