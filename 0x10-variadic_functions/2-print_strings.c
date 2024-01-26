#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings --prints strings.
 * @separator: separates the strings.
 * @n: no of arguments.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}
	else
	{
		va_list var;

		va_start(var, n);
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(var, const char *));
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		va_end(var);
	}
	printf("\n");
}
