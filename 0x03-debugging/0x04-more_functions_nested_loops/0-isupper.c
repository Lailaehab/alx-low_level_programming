#include "main.h"
/**
 * _isupper - check if letter is uppercase
 * @c: input
 * Return: 1 for upper 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
