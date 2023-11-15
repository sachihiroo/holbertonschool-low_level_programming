#include "dog.h"
/**
 * print_dog - Short description
 * @name: char
 * @age: float
 * @owner: char
 *
 *  Return: 0 or NULL.
 * 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return;
	}
	n1 = strlen(name);
	n2 = strlen(owner);
	d->name = malloc(sizeof(char) * (n1 +1);
	if (d->name == NULL)
	{
		free(d);
		return;
	}
	d->owner = malloc(sizeof(char) * (n2 + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return;
	}
	strcpy(d, name, name);
	d->age = age;
	strcpy(d, owner, owner);
	return;
}
