#include "main.h"
/**
 * *str_concat - a function that concatenates two strings.
 * @s1: pointer
 * @s2: pointer
 * Return: pointer oor NULL
 */
char *str_concat(char *s1, char *s2)
{
	int n1, n2;
	char *c;

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
	c = malloc(n1 + n2 + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	strcpy(c, s1);
	strcat(c, s2);
	return (c);
}
