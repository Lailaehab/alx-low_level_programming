#include "main.h"

/**
 * _strdup - ghjk
 * @str: gh
 * Return: fghj
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	char *m = malloc(size + 1);

	if (m == 0 || size == 0)
	{
		return (0);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
