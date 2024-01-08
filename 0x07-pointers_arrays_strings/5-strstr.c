#include <string.h>
/**
 * _strstr -- first occurrence
 * @haystack: fxn para
 * @needle: fxn para
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *s = strstr(haystack, needle);

	return (s);
}
