#include "lists.h"
/**
 * race - printing a line before main function
 * Return: void.
 */
void race(void) __attribute__((constructor));
void race(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
