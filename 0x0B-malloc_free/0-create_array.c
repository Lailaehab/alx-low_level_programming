#include "main.h"

/**
 * create_array - fghj
 * @size: hj
 * @c: fghj
 * Return: hj
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;
	return (n);
}
