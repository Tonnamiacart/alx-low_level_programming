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
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

/**
 * _strlen - this function returns the length of a string
 * @s: pointer to string
 * Return: ola
 */
int _strlen(char *s)
{
	int ola = 0;

	while (*s != '\0')
	{
		ola++;
		s++;
	}

	return (ola);
}

/**
 * _strcpy - this copys the string pointed to by src to dest
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int jide, i;

	jide = 0;
	while (src[jide] != '\0')
	{
		jide++;
	}
	for (i = 0; i < jide; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
