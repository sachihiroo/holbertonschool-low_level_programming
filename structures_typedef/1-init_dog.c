#include "dog.h"
/**
 * init_dog - Short description
 * @name: char
 * @age: float
 * @owner: char
 * @d: the dog to init
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
