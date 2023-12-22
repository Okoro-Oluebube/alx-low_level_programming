#include <ctype.h>
/**
 * _isupper --function to determine if a character is upper/lower case
 * @c: the function patameter
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
