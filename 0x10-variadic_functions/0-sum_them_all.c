#include <stdarg.h>
/**
 * sum_them_all --sum of variables.
 * @n: function parameter.
 * Return: an integer.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list var;
		va_start(var, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(var, int);
		}
		va_end(var);
		return (sum);
	}
}
