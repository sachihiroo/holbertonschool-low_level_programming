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
		printf("(nil)");
	}
	if (d->name == NULL)
	{
		d->name = "nil";
		printf("%c", d->name);
		printf("%f", d->age);
	}
}
