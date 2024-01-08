#include <string.h>
/**
 * _strspn --calculates the length
 * @s: fxn para
 * @accept: fxn para
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int l = strspn(s, accept);

	return (l);
}
