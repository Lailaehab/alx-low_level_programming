#include "main.h"

/**
 * str_concat - fghj
 * @s1: ghj
 * @s2: fghj
 * Return: ghj
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i = 0, j;
	char *m;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}

	for (; s1[size1] != '\0'; size1++)
		;
	for (; s2[size2] != '\0'; size2++)
		;
	m = malloc(size1 + size2 + 1);
	if (m == 0)
	{
		return (0);
	}
	else
	{
		for (; i < size1; i++)
			m[i] = s1[i];
		for (j = 0; i < size1 + size2; i++)
		{
			m[i] = s2[j];
			j++;
		}
	}
	return (m);
}
