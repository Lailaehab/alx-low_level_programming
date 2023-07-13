#include "main.h"

/**
 * string_nconcat - ghj
 * @s1: ghj
 * @s2: yhuj
 * @n: fghj
 * Return: ghj
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, x, y = 0, w;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL || n == 0)
		s2 = "";
	for (; *s2 != '\0'; s2++)
		i++;
	for (; *s1 != '\0'; s1++)
		j++;
	if (i > n)
	{
		m = malloc(j + n + 1);
		if (m == 0)
			return (NULL);
		for (x = 0; *s1 != '\0'; s1++, x++)
		{
			m[y] = s1[x];
			y++;
		}
		for (w = 0; w < n; w++)
		{
			m[y] = s2[w];
			y++;
		}
		return (m);
	}
	else
	{
		m = malloc(j + i + 1);
		if (m == 0)
			return (NULL);
		for (x = 0; *s1 != '\0'; s1++, x++)
		{
			m[y] = s1[x];
			y++;
		}
		for (w = 0; *s2 != '\0'; s2++, w++)
		{
			m[y] = s2[w];
			y++;
		}
		return (m);
	}
}
