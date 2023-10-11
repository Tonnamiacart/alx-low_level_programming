#include "dog.h"
#include <stdio.h>

/**
 * print_dog - This function prints struct dog
 * @d: this is a pointer to struct dog
 * Return: void;=
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
