#include "dog.h"


/**
 * init_dog - this prototype initializes the dog function
 * @d: dog function
 * @name: this is the dog's name
 * @age: this is the dog's age
 * @owner: the owner's name
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
