#include "dog.h"
/**
 * init_dog - Short description
 * @name: char
 * @age: float
 * @owner: char
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
		d->name = "Name: (nil)";
	
	}

		printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
}
