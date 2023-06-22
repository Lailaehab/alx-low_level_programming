#include "main.h"

/**
 * print_square - print using #
 * @size: the size
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int r,c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
			_putchar(35);
		_putchar('\n');
		}
	}
}
