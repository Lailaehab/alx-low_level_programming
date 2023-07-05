#include "main.h"

/**
 * _print_rev_recursion - dfgh
 * @s: fghj
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int i;

	if (s < 0)
		_putchar('\n');

	else
	{
		for (i = 0; *s != '\0'; i++)
			;
		_putchar(s[i - 1]);
		_print_rev_recursion(s - 1);
	}
}
