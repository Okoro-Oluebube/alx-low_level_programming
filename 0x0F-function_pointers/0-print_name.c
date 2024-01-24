#include "function_pointers.h"
/**
 * print_name --print name.
 * @name: augment to be printed.
 * @f: pointer to a function.
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
