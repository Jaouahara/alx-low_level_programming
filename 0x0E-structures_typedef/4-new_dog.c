#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - a function that gets a length of string
 *
 * @str: the string to get the length
 *
 * Return: length of @str
 */

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - a function that returns @dest with a copy of a string from @src
 *
 * @dest: copy string to here
 * @src: string to copy
 *
 * Return: @dest
 */

char *_strcopy(char *dest, char *src)
{
	int p;

	for (p = 0; src[p]; p++)
		dest[p] = src[p];
	dest[p] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: struct pointer dog
 *         NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	my_dog = (dog_t *) malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*my_dog).name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*my_dog).owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->name = _strcopy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = _strcopy(my_dog->owner, owner);

	return (my_dog);
}
