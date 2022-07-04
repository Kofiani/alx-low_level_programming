#include "dog.h"
/**
 * init_dog - create dog object using struct dog
 * @d: pointer to object created with struct dog
 * @name: name of owner
 * @age: age data for struct dog object
 * @owner: owner data for struct dog object
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
