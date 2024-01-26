#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers --prints a list o variables.
 * @separator: seperates the arguments.
 * @n: no of arguments.
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;
	
	va_start(args, n);
	if (separator == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	printf("\n");
}
