#include "main.h"
/**
 * _islower -check if character is lowercase
 * Return: 1 if character is lowercase otherwise Always 0 (Success)
 */

int _islower(int c)
{
	if (c > 97 && c <= 122)
		return (1);
	else
		return (0);
}
