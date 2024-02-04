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
	va_list var;
	unsigned int i;
	char *s;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(var, char *);
		if (separator == NULL)
		{
			printf("%s", s);
		}
		else if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(var);
	printf("\n");
}
