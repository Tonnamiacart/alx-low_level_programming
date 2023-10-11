#include "dog.h"
#include "stdlib.h"

/**
 * new_dog - this prototype calls the new dog function
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owner's name
 * Return: NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	
	return (new_dog);
}
