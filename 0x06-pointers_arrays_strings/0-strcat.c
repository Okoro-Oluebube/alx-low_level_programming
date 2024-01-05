#include <string.h>
/**
 * char *_strcat --concatinating two steings
 * @dest: fxn parameter
 * @src: fxn parameter
 * Return: pointer value
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
