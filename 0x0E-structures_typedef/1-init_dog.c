#include "dog.h"

/**
 * init_dog --intializing struct dog variables.
 * @d: pointer variable
 * @name: fxn member.
 * @age: fxn member.
 * @owner: fxn member.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
	else
	{
		return;
	}
}
