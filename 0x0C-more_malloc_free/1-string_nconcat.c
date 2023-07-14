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
	m = malloc(j + n + 1);
	if (m == 0)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		m[x] = s1[x];
	for (w = 0; w < n; w++)
	{
		m[x] = s2[w];
		x++;
	}
	str[i] = '\0';
	return (m);
}
