#include "dog.h"
/**
 * print_dog - Short description
 * @d: the dog to init
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
