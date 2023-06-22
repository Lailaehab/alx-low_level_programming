#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: character
 * Return: 1 if upper 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
