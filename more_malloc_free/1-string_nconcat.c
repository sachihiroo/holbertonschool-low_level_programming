#include "main.h"
/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: pointer
 * @s2: pointer
 * @i: unsigned int
 * Return: pointer oor NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int n1, n2;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	n1 = strlen(s1);
	n2 = strlen(s2);
	if (n >= n2)
	{
		n = n2;
	}
	p = malloc(sizeof(char) * (n1 + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, s1);
	strncat(p, s2, n);
	return (p);
}
