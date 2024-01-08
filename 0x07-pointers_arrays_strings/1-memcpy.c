#include <string.h>
/**
 * _memcpy --function copies n bytes from memory area src to memory area dest
 * @dest: fxn para
 * @src: fxn para
 * @n: fxn para
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char **dest1;

	dest1 = &dest;
	memcpy(dest, src, n);
	return (*dest1);
}
