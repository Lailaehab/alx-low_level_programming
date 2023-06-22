#include "main.h"

/**
 * print_line -prints line
 * @n: number of times the _ should be printed
 */
void print_line(int n)
{
	int l;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 1; l <= n; l++)
			_putchar('_');
		_putchar('\n');
	}
}
