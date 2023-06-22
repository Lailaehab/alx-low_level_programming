#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n : number of times \ should be printed
 */
void print_diagonal(int n)
{
	int pos, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pos = 1; pos <= n; pos++)
		{
			for (space = 1; space <= pos; space++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
}

