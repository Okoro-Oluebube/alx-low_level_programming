#include <ctype.h>
/**
 * _isdigit --checks if a character is a digit or not
 * @c: function parameter
 * Returns: 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
