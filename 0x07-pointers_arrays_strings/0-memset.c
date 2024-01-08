#include <string.h>
/**
 * _memset --fills first n byte pointed by 's' with a constant byte
 * @s: fxn parameter
 * @b: fxn parameter
 * @n: fxn parameter
 * Return: pointer to pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char **s1;

	s1 = &s;
	memset(s, b, n);
	return (*s1);
}
