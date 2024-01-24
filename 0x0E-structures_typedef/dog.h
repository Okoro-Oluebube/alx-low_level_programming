#ifndef DOG_H
#define DOG_H
/**
 * struct dog --struct data type.
 *@name: fxn member
 *@age: fxn membee
 *@owner: fxn member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
