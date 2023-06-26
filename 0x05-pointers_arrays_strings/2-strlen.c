#include "main.h"

/**
 * _strlen - return length of a string
 * @s: parameter
 * Return: length
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		c++;
	return (c);
}

