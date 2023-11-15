#include "dog.h"
/**
 * free_dog - Short description
 * @d: pointer
 *  Return: 0 or NULL.
 */
void free_dog(dog_t *d)
{
	if (d==NULL)
	return;
	free(d->name);
	free(d->owner);
	free(d);
}
