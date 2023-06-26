#include "main.h"

/**
 * print_rev - prints the string reversed
 * @s: string
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}

	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
