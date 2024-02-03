#include "dog.h"
/**
 * main --main body.
 * init_dog --intializing struct dog variables.
 * @d: pointer variable
 * @name: fxn member.
 * @age: fxn member.
 * @owner: fxn member.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		(*d).age = age;
		(*d).owner = owner;
}
