#include "main.h"

/**
 * _strlen_recursion - fghjk
 * @s: ghjk
 * Return: fghj
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


