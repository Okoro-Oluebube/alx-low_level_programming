#include <string.h>
/**
 * _strncpy -- copying length of a string
 * @dest: fxn para
 * @src: fxn para
 * @n: function para
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
