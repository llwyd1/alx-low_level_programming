#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct to be printed
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!(d->name))
		d->name = "(nil)";
	if (!(d->owner))
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nowner: %s\n", d->name, d->age, d->owner);
}
