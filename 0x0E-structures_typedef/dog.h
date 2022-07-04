#ifndef DOG_H
#define DOG_H

/**
 * File: dog.h
 * Desc: Header file to define struct dog.
 */

/**
 * struct dog - Creates dog object.
 * @name: dog name property.
 * @age: dog age property.
 * @owner: dog owner property.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog_t
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
