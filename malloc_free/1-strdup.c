#include "main.h"
/**
 * _strdup - returns a pointer
 * @str: pointer
 * Return: NULL or string
 */
char *_strdup(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	printf("%s", str);
	str = malloc(sizeof(char) * i + 1);
	return (str);
}
