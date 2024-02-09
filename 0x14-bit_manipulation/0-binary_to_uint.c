#include "main.h"
/**
 * binary_to_uint --Converts binary to decimal.
 * @b: Pointer to string.
 * Return: Integer.
 */
unsigned int binary_to_uint(const char *b)
{
	char *s = strdup(b);
	unsigned int dec, binval;
	int i, j;

	dec = 0;
	i = strlen(s);
	binval = 1;
	if (s == NULL)
	{
		return (0);
	}
	else
	{
		for (j = (i - 1); j >= 0; j--)
		{
			if ((s[j] < 48) || (s[j] > 49) || (s == NULL))
			{
				return (0);
			}
			else if (s[j] == '1')
			{
				dec += binval;
			}
			binval *= 2;
		}
	}
	return (dec);
}
