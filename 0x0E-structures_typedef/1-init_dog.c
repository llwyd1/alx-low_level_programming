#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: a pointer to struct dog to be initialized
 * @name: name to be intinialized
 * @age: age to be initialized
 *@owner: owner to be initialzed
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->onwer = onwer;
}
