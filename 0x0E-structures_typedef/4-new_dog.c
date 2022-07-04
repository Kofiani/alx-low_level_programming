#include "dog.h"
#include <stdlib.h>

/**
 * strl - calculate length of sting
 * @s: length
 * Return: integer
 */

int strl(char *s)
{
	int i;

	if (s == NULL)
		return (0);

	i = 0;

	while (*s)
	{
		i++;
		s++;
	}

	return (i);
}

/**
 * strcop - copy string from one place to another
 * @dest: destintion.
 * @src: original string
 * Return: valeu
 */

char *strcop(char *dest, char *src)
{
	int i = 0;

	while (*src)
	{
		dest[i] = src[i];
		src++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - create new dog object.
 * @name: name new dog object.
 * @age: age of new dog object.
 * @owner: name of owner of dog object.
 * Return: value
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_obj;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog_obj = malloc(sizeof(*dog_obj));

	if (dog_obj == NULL)
		return (NULL);

	dog_obj->name = malloc(sizeof(char) * (strl(name) + 1));
	if (dog_obj->name == NULL)
	{
		free(dog_obj);
		return (NULL);
	}

	dog_obj->owner = malloc(sizeof(char) * (strl(name) + 1));
	if (dog_obj->owner == NULL)
	{
		free(dog_obj->name);
		free(dog_obj);
		return (NULL);
	}

	dog_obj->name = strcop(dog_obj->name, name);
	dog_obj->age = age;
	dog_obj->owner = strcop(dog_obj->owner, owner);

	return (dog_obj);
}
