#include "main.h"
/**
 * _isalpha -check if character is letter
 * @c: input
 * Return: 1 if 'c' is letter andotherwise Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
