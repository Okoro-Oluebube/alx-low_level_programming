#include <string.h>
/**
 * _strpbrk --locates the first occurrence in the string s
 * @s: fxn para
 * @accept: fxn para
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = strpbrk(s, accept);

	return (p);
}
