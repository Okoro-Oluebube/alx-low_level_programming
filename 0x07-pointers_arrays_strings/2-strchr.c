#include <string.h>
/**
 * _strchr --looks for a specific character
 * @s: fxn para
 * @c: fxn para
 * Return: return character c or null
 */
char *_strchr(char *s, char c)
{
	char *a = strchr(s, c);

	return (a);
}
