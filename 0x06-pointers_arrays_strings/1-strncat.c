#include <string.h>
/**
 * _strncat --concatinates two strings
 * @dest: fxn par.
 * @src: fxn par.
 * @n: fxn par.
 * Return: a dest pointer value
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
