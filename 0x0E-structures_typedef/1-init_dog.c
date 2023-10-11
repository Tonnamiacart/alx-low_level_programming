#include "dog.h"
/**
 * init_dog - this prototype initializes the dog's function
 * @d: the function dog
 * @name: The name of the dog
 * @age: The dog's age
 * @owner: The owner's name
 * Return: void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
